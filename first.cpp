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

System::Void Magazin::first::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("������ ��������� ������������� ��� ��������� ������ � ��.\n��� �� ������:\n1.��������� ������ � ���� ������ ��������\n2.������� ������ �� ���� ������ ��������\n3.������ ������ ����������\n4.������� ��������� � ���� ������ ��������", "� ���������!!!");
    return System::Void();
}
