#include "second.h"
#include <list>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;



//Информ. панель
System::Void Magazin::second::infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Приветствую вас в программе по работе \nс базой данных <<Продуктовый магазин>>\nПравила по работе с данным блоком:\n1.Перед тем, как добавить данные в таблицу, нужно нажать на кнопку (Загрузить БД);\n2.Внести данные, удалить данные, скорректировать данные можно только в 1строке за 1 раз;\n3.Для проверки внесенных или изменненых данных, нужно нажать (загрузить БД)","ПРАВИЛА РАБОТЫ!!!");
    return System::Void();
}



//Подключение + вывод в DataGrid
System::Void Magazin::second::update_Click(System::Object^ sender, System::EventArgs^ e)
{
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    if (dataGridView1->Rows->Count > 0)
        dataGridView1->Rows->Clear();
    String^ query = "SELECT * FROM [Поставка товара]";//запрос
    OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
    OleDbDataReader^ dbReader = dbComand->ExecuteReader();//считываем данные которые есть в таблице "продукты в магазине"
    if (dbReader->HasRows == false) 
    {
        MessageBox::Show("Ошибка считывания", "Ошибка!");
    }
    else 
    {
       while (dbReader->Read()) 
       {
           dataGridView1->Refresh();
            dataGridView1->Rows->Add(dbReader["Номер"], dbReader["Код"], dbReader["Название"], dbReader["Вид_упаковки"], dbReader["Количество"], dbReader["Срок_годности"]);
       }
    }
    dbReader->Close();
    dbConnection->Close();
    return System::Void();
}



//Добавление
System::Void Magazin::second::addd_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dataGridView1->SelectedRows->Count != 1) {// это нужно для выбора строки
        MessageBox::Show("Для добавления нужно выбрать 1 строку!", "ВНИМАНИЕ!");
        return;//В случае если выбранно 0 или большее 1 строки, выведется это сообщение
    }
    int index = dataGridView1->SelectedRows[0]->Index;//Узнаем индекс выбранной строки, куда были внесены данные
    //Далее проводим проверку введенных данных
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[5]->Value == nullptr )
	{
		MessageBox::Show("Вы ввели не все данные,\n программа будет работать,\nкогда вы введете все данные и каждый столбец будет заполнен!", "Ошибка!");
		return;
	}
	//Далее нужно считать все данные
	String^ Номер = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Код = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ Название = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ Вид_упаковки = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ Количество = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ Срок_годности = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    String^ query = "INSERT INTO [Поставка товара] VALUES ('" + Номер + "','" + Код + "','" + Название + "','" + Вид_упаковки + "','" + Количество + "','" + Срок_годности + "')";//запрос
    OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	//запрос
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "ОШИБКА!");
	else
		MessageBox::Show("Данные успешно добавлены!", "УСПЕШНО!");
	//далее идет закрытие соединения с БД
    dbConnection->Close();
    return System::Void();
}


//Удаление
System::Void Magazin::second::dell_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dataGridView1->SelectedRows->Count != 1) {// это нужно для выбора строки
        MessageBox::Show("Для добавления нужно выбрать 1 строку!", "ВНИМАНИЕ!");
        return;//В случае если выбранно 0 или большее 1 строки, выведется это сообщение
    }
    int index = dataGridView1->SelectedRows[0]->Index;//Узнаем индекс выбранной строки, куда были внесены данные
    //Далее проводим проверку введенных данных
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr)
    {
        MessageBox::Show("Вы ввели не все данные,\n программа будет работать,\nкогда вы введете все данные и каждый столбец будет заполнен!", "Âíèìàíèå!");
        return;
    }
    //Далее нужно считать все данные
    String^ Номер = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    String^ query = "DELETE FROM [Поставка товара] WHERE Номер =" + Номер;//запрос
    OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
    //запрос
    if (dbComand->ExecuteNonQuery() != 1)
        MessageBox::Show("Ошибка выполнения запроса!", "ОШИБКА!");
    else
        MessageBox::Show("Данные успешно удалены!", "УСПЕШНО!");
    //далее идет закрытие соединения с БД
    dbConnection->Close();
    return System::Void();
}



//Поиск
System::Void Magazin::second::search_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < dataGridView1->Rows->Count;) {
        if (dataGridView1->Rows[i] != nullptr && dataGridView1->Rows[i]->Cells[2]->Value != nullptr) {
            if (!dataGridView1->Rows[i]->Cells[2]->Value->ToString()->ToLower()->Contains(textBox1->Text->ToLower())) {
                dataGridView1->Rows->RemoveAt(i);
                continue;
            }
        }
        i++;
    }
}



//Исправление
System::Void Magazin::second::correct_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dataGridView1->SelectedRows->Count != 1) {// это нужно для выбора строки
        MessageBox::Show("Для добавления нужно выбрать 1 строку!", "ВНИМАНИЕ!");
        return;//В случае если выбранно 0 или большее 1 строки, выведется это сообщение
    }
    int index = dataGridView1->SelectedRows[0]->Index;//Узнаем индекс выбранной строки, куда были внесены данные
    //Далее проводим проверку введенных данных
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[5]->Value == nullptr )
    {
        MessageBox::Show("Вы ввели не все данные,\n программа будет работать,\nкогда вы введете все данные и каждый столбец будет заполнен!", "Âíèìàíèå!");
        return;
    }
    //Далее нужно считать все данные
    String^ Номер = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    String^ Код = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
    String^ Название = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
    String^ Вид_упаковки = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
    String^ Количество = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
    String^ Срок_годности = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    String^ query = "UPDATE [Поставка товара] SET Код = '" + Код + "', Название = '" + Название + "', Вид_упаковки = '" + Вид_упаковки + "', Количество = '" + Количество + "', Срок_годности = '" + Срок_годности + "' WHERE Номер = " + Номер;//запрос
    dataGridView1->Refresh();
    OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

    //запрос на смену
    if (dbComand->ExecuteNonQuery() != 1)
        MessageBox::Show("Ошибка при попытке замены данных!", "ОШИБКА!");
    else
        MessageBox::Show("Данные успешно изменены!", "Успешно!");

    //закрытие соединения
    dbConnection->Close();
    return System::Void();
}
