#pragma once
#include "second.h"
#include "third.h"
namespace Magazin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для first
	/// </summary>
	public ref class first : public System::Windows::Forms::Form
	{
	public:
		first(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~first()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ earnings;
	private: System::Windows::Forms::Button^ expiration;
	private: System::Windows::Forms::Button^ sell;

	private: System::Windows::Forms::Button^ instore;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(first::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->earnings = (gcnew System::Windows::Forms::Button());
			this->expiration = (gcnew System::Windows::Forms::Button());
			this->sell = (gcnew System::Windows::Forms::Button());
			this->instore = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(12, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(659, 29);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->оПрограммеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(121, 23);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &first::оПрограммеToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->earnings);
			this->groupBox1->Controls->Add(this->expiration);
			this->groupBox1->Controls->Add(this->sell);
			this->groupBox1->Controls->Add(this->instore);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(13, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->MaximumSize = System::Drawing::Size(630, 196);
			this->groupBox1->MinimumSize = System::Drawing::Size(630, 196);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(630, 196);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выберите таблицу, с которой хотите работать";
			// 
			// earnings
			// 
			this->earnings->BackColor = System::Drawing::Color::Orange;
			this->earnings->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->earnings->ForeColor = System::Drawing::Color::Brown;
			this->earnings->Location = System::Drawing::Point(361, 117);
			this->earnings->Name = L"earnings";
			this->earnings->Size = System::Drawing::Size(262, 72);
			this->earnings->TabIndex = 3;
			this->earnings->Text = L"Бухгалтерия";
			this->earnings->UseVisualStyleBackColor = false;
			this->earnings->Click += gcnew System::EventHandler(this, &first::earnings_Click);
			// 
			// expiration
			// 
			this->expiration->BackColor = System::Drawing::Color::Black;
			this->expiration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->expiration->ForeColor = System::Drawing::Color::Yellow;
			this->expiration->Location = System::Drawing::Point(12, 117);
			this->expiration->Name = L"expiration";
			this->expiration->Size = System::Drawing::Size(262, 72);
			this->expiration->TabIndex = 2;
			this->expiration->Text = L"Остатки товара в магазине";
			this->expiration->UseVisualStyleBackColor = false;
			this->expiration->Click += gcnew System::EventHandler(this, &first::expiration_Click);
			// 
			// sell
			// 
			this->sell->BackColor = System::Drawing::Color::Lime;
			this->sell->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sell->ForeColor = System::Drawing::Color::Black;
			this->sell->Location = System::Drawing::Point(361, 39);
			this->sell->Name = L"sell";
			this->sell->Size = System::Drawing::Size(262, 72);
			this->sell->TabIndex = 1;
			this->sell->Text = L"Продано товара";
			this->sell->UseVisualStyleBackColor = false;
			this->sell->Click += gcnew System::EventHandler(this, &first::sell_Click);
			// 
			// instore
			// 
			this->instore->BackColor = System::Drawing::Color::Purple;
			this->instore->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->instore->ForeColor = System::Drawing::Color::Black;
			this->instore->Location = System::Drawing::Point(12, 39);
			this->instore->Name = L"instore";
			this->instore->Size = System::Drawing::Size(262, 72);
			this->instore->TabIndex = 0;
			this->instore->Text = L"Поставка товара";
			this->instore->UseVisualStyleBackColor = false;
			this->instore->Click += gcnew System::EventHandler(this, &first::instore_Click);
			// 
			// first
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 244);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"first";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Продуктовый магазин";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void instore_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		second^ f2 = gcnew second();
		f2->Owner = this;
		f2->Show();
		this->Hide();
	}
private: System::Void sell_Click(System::Object^ sender, System::EventArgs^ e) 
{
	third^ t2 = gcnew third();
	t2->Owner = this;
	t2->Show();
	this->Hide();
}
private: System::Void expiration_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void earnings_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
