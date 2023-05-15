#include "third.h"
#include <list>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
//Подключение + вывод в DataGrid
System::Void Magazin::third::update_Click(System::Object^ sender, System::EventArgs^ e)
{
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    if (dataGridView1->Rows->Count > 0)
        dataGridView1->Rows->Clear();
    String^ query = "SELECT * FROM [Продано товара]";//запрос
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
            dataGridView1->Rows->Add(dbReader["Номер"], dbReader["Название"], dbReader["Вид_упаковки"],dbReader["Дата_продажи"], dbReader["Количество"]);
        }
    }
    dbReader->Close();
    dbConnection->Close();
    return System::Void();
}



//Добавление
System::Void Magazin::third::addd_Click(System::Object^ sender, System::EventArgs^ e)
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
        dataGridView1->Rows[index]->Cells[4]->Value == nullptr )
    {
        MessageBox::Show("Вы ввели не все данные,\n программа будет работать,\nкогда вы введете все данные и каждый столбец будет заполнен!", "Ошибка!");
        return;
    }
    //Далее нужно считать все данные
    String^ Номер = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    String^ Название = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
    String^ Вид_упаковки = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
    String^ Количество = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
    String^ Дата_продажи = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    String^ query = "INSERT INTO [Продано товара] VALUES ('" + Номер + "','" + Название + "','" + Вид_упаковки + "','" + Количество + "','" + Дата_продажи + "')";//запрос
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
System::Void Magazin::third::dell_Click(System::Object^ sender, System::EventArgs^ e)
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
    String^ query = "DELETE FROM [Продано товара] WHERE Номер =" + Номер;//запрос
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
System::Void Magazin::third::search_Click(System::Object^ sender, System::EventArgs^ e)
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
System::Void Magazin::third::correct_Click(System::Object^ sender, System::EventArgs^ e)
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
        dataGridView1->Rows[index]->Cells[4]->Value == nullptr)
    {
        MessageBox::Show("Вы ввели не все данные,\n программа будет работать,\nкогда вы введете все данные и каждый столбец будет заполнен!", "Âíèìàíèå!");
        return;
    }
    //Далее нужно считать все данные
    String^ Номер = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    String^ Название = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
    String^ Вид_упаковки = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
    String^ Количество = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
    String^ Дата_продажи = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
    //подключение к БД
    String^ connectionString = "provider=Microsoft.jet.OLEDB.4.0;Data Source=Magazin.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    //Запрос к БД
    dbConnection->Open();//открытие соединения
    String^ query = "UPDATE [Продано товара] SET Название = '" + Название + "', Вид_упаковки = '" + Вид_упаковки + "', Количество = '" + Количество + "', Дата_продажи = '" + Дата_продажи + "' WHERE Номер = " + Номер;//запрос
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