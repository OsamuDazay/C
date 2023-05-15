#pragma once
namespace Magazin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для second
	/// </summary>
	public ref class second : public System::Windows::Forms::Form
	{
	public:
		second(void)
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
		~second()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ info;

	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ retur;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::Button^ addd;

	private: System::Windows::Forms::Button^ correct;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Button^ dell;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::ToolStripMenuItem^ exit;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Номер;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Код;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Название;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Вид_упаковки;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Количество;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Срок_годности;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(second::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->retur = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->correct = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->dell = (gcnew System::Windows::Forms::Button());
			this->addd = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Номер = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Код = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Название = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Вид_упаковки = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Количество = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Срок_годности = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->info, this->действияToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(12, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1334, 29);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// info
			// 
			this->info->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->info->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(121, 23);
			this->info->Text = L"О программе";
			this->info->Click += gcnew System::EventHandler(this, &second::infoToolStripMenuItem_Click);
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->retur,
					this->exit
			});
			this->действияToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(90, 23);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// retur
			// 
			this->retur->Name = L"retur";
			this->retur->Size = System::Drawing::Size(265, 26);
			this->retur->Text = L"Перейти в главное меню";
			this->retur->Click += gcnew System::EventHandler(this, &second::retur_Click);
			// 
			// exit
			// 
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(265, 26);
			this->exit->Text = L"выход";
			this->exit->Click += gcnew System::EventHandler(this, &second::exitToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->correct);
			this->groupBox1->Controls->Add(this->search);
			this->groupBox1->Controls->Add(this->dell);
			this->groupBox1->Controls->Add(this->addd);
			this->groupBox1->Controls->Add(this->update);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1124, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(207, 372);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Что нужно сделать\?";
			// 
			// correct
			// 
			this->correct->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->correct->Location = System::Drawing::Point(6, 285);
			this->correct->Name = L"correct";
			this->correct->Size = System::Drawing::Size(195, 60);
			this->correct->TabIndex = 4;
			this->correct->Text = L"Корректировать";
			this->correct->UseVisualStyleBackColor = true;
			this->correct->Click += gcnew System::EventHandler(this, &second::correct_Click);
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search->Location = System::Drawing::Point(6, 219);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(195, 60);
			this->search->TabIndex = 4;
			this->search->Text = L"Найти";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &second::search_Click);
			// 
			// dell
			// 
			this->dell->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dell->Location = System::Drawing::Point(6, 153);
			this->dell->Name = L"dell";
			this->dell->Size = System::Drawing::Size(195, 60);
			this->dell->TabIndex = 3;
			this->dell->Text = L"Удалить";
			this->dell->UseVisualStyleBackColor = true;
			this->dell->Click += gcnew System::EventHandler(this, &second::dell_Click);
			// 
			// addd
			// 
			this->addd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addd->Location = System::Drawing::Point(6, 87);
			this->addd->Name = L"addd";
			this->addd->Size = System::Drawing::Size(195, 60);
			this->addd->TabIndex = 2;
			this->addd->Text = L"Добавить";
			this->addd->UseVisualStyleBackColor = true;
			this->addd->Click += gcnew System::EventHandler(this, &second::addd_Click);
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->update->Location = System::Drawing::Point(6, 21);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(195, 60);
			this->update->TabIndex = 1;
			this->update->Text = L"Загрузить БД / Обновить";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &second::update_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Номер,
					this->Код, this->Название, this->Вид_упаковки, this->Количество, this->Срок_годности
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1118, 378);
			this->dataGridView1->TabIndex = 4;
			// 
			// Номер
			// 
			this->Номер->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Номер->HeaderText = L"№";
			this->Номер->MinimumWidth = 6;
			this->Номер->Name = L"Номер";
			this->Номер->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Номер->Width = 27;
			// 
			// Код
			// 
			this->Код->HeaderText = L"Код товара";
			this->Код->MinimumWidth = 6;
			this->Код->Name = L"Код";
			this->Код->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Код->Width = 125;
			// 
			// Название
			// 
			this->Название->HeaderText = L"Наименование";
			this->Название->MinimumWidth = 6;
			this->Название->Name = L"Название";
			this->Название->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Название->Width = 125;
			// 
			// Вид_упаковки
			// 
			this->Вид_упаковки->HeaderText = L"Вид упаковки";
			this->Вид_упаковки->MinimumWidth = 6;
			this->Вид_упаковки->Name = L"Вид_упаковки";
			this->Вид_упаковки->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Вид_упаковки->Width = 125;
			// 
			// Количество
			// 
			this->Количество->HeaderText = L"Количество";
			this->Количество->MinimumWidth = 6;
			this->Количество->Name = L"Количество";
			this->Количество->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Количество->Width = 125;
			// 
			// Срок_годности
			// 
			this->Срок_годности->HeaderText = L"Годен до";
			this->Срок_годности->MinimumWidth = 6;
			this->Срок_годности->Name = L"Срок_годности";
			this->Срок_годности->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Срок_годности->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(149, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Поиск";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(209, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 6;
			// 
			// second
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1334, 418);
			this->ControlBox = false;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1352, 465);
			this->MinimumSize = System::Drawing::Size(1352, 465);
			this->Name = L"second";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поставка товара";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void retur_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Owner->Show();
		this->Close();
	}
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addd_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dell_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void correct_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
};
}
