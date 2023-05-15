#include "First.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThread]
int main(array<String^>^ arg) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Magazin::first form;
    Application::Run(% form);
}

System::Void Magazin::first::expiration_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Magazin::first::earnings_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Magazin::first::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Данная программа предназначена для упрощения работы с бд.\nТут вы можете:\n1.Добавлять данные в базу данных магазина\n2.Удалять данные из базы данных магазина\n3.Искать нужную информацию\n4.Вносить изменения в базу данных магазина", "О программе!!!");
    return System::Void();
}
