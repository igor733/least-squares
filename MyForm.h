#pragma once
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
namespace MNK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Globalization;

	void AddText( FileStream^ fs, String^ value )
{
   array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes( value );
   fs->Write( info, 0, info->Length );
}

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::CheckBox^ checkBox1;





















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->dataGridView3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dataGridView2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(760, 287);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(8, 14);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(745, 210);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			this->chart1->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			this->chart1->Titles->Add(title1);
			this->chart1->Visible = false;
			this->chart1->Titles[0]->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(265, 256);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Сохранить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(265, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Загрузить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView3->Location = System::Drawing::Point(7, 13);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(747, 212);
			this->dataGridView3->TabIndex = 13;
			this->dataGridView3->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Эксп. данные", L"Данные для коэф.", L"График" });
			this->comboBox1->Location = System::Drawing::Point(442, 233);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectedIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(345, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 48);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(306, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Экспериментальные данные";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(695, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Таблица 1";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(7, 13);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(120, 50);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"Оптическая плотность";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(8, 38);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(745, 186);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(126, 13);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(628, 25);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Концентрация, С мг/дм3";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(184, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Создать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(150, 258);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(28, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 233);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(28, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите кол-во строк:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите кол-во столбцов:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(7, 13);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(747, 212);
			this->dataGridView2->TabIndex = 9;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(642, 302);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(130, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Нелинейный график";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 321);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 360);
			this->MinimumSize = System::Drawing::Size(800, 360);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Метод наименьших квадратов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int x1 = 0; // indicator of most left column
		int x2 = 0;
		int x3 = 0; // total columns
		int y1 = 0; // total rows
		int count = 0; // indicator of most last row
		int col_count = 0;
		int count_d3 = 0; // indicator of most last rows in the third table
		int x_save; // for save files
		int y_save;
		int rou = 10000;

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int x, y; // rows, columns

		x = Convert::ToInt32(textBox1->Text); // rows
		y = Convert::ToInt32(textBox2->Text); // columns

		if (x < 0 || y < 0)
			MessageBox::Show(L"Введённые данные некорректны!", L"Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{

			if (x1 == 0 && (x > 0 || y > 0)) // most left column
			{
				dataGridView1->Columns->Add("", "");
				dataGridView1->Columns[0]->ReadOnly = true;
				dataGridView1->Columns[0]->Width = 118;
				dataGridView1->Rows->Add();
				if (comboBox1->SelectedIndex == 0)
				{
					textBox4->Visible = true; // headers of the table
					textBox5->Visible = true;
				}
				++count;
				x1 = 1;
				for (int i = 0; i < 10; ++i)
				{
					dataGridView3->Columns->Add("", "");
					dataGridView3->Columns[i]->Width = 75;
					dataGridView3->Columns[i]->DefaultCellStyle->Format = "N3";
				}
				if (checkBox1->Checked)
				{
					dataGridView3->Columns[0]->Width = 60;
					dataGridView3->Columns[0]->DefaultCellStyle->Format = "N0";
					dataGridView3->Columns[9]->Width = 84;
					dataGridView3->Rows->Add();
					dataGridView3->Rows->Add();
					dataGridView3[1, 0]->Value = "x";
					dataGridView3->Columns[1]->DefaultCellStyle->Format = "N2";
					dataGridView3[2, 0]->Value = "y";
					dataGridView3[3, 0]->Value = "x2";
					dataGridView3[4, 0]->Value = "y2";
					dataGridView3[5, 0]->Value = "x*y";
					dataGridView3[6, 0]->Value = "x3";
					dataGridView3[7, 0]->Value = "x4";
					dataGridView3->Columns[7]->DefaultCellStyle->Format = "N4";
					dataGridView3[8, 0]->Value = "x2*y";
					dataGridView3[9, 0]->Value = L"Формула";

					dataGridView3->Rows[1]->DefaultCellStyle->Font = gcnew System::Drawing::Font(dataGridView3->DefaultCellStyle->Font, System::Drawing::FontStyle::Bold);

					dataGridView3[1, 1]->Value = L"С, мг/дм3";
					dataGridView3[2, 1]->Value = L"Д ср.";
					dataGridView3[3, 1]->Value = L"С квадр.";
					dataGridView3[4, 1]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold);
					dataGridView3[4, 1]->Value = L"Д ср. квадр.";
					dataGridView3[5, 1]->Value = L"С * Д";
				}
				else
				{
					dataGridView3->Columns[0]->Width = 60;
					dataGridView3->Columns[0]->DefaultCellStyle->Format = "N0";
					dataGridView3->Columns[9]->Width = 84;
					dataGridView3->Rows->Add();
					dataGridView3->Rows->Add();
					dataGridView3[1, 0]->Value = "x";
					dataGridView3->Columns[1]->DefaultCellStyle->Format = "N2";
					dataGridView3[2, 0]->Value = "y";
					dataGridView3[3, 0]->Value = "x2";
					dataGridView3[4, 0]->Value = "y2";
					dataGridView3[5, 0]->Value = "x*y";
					dataGridView3[6, 0]->Value = "b";
					dataGridView3[7, 0]->Value = "a";
					dataGridView3->Columns[7]->DefaultCellStyle->Format = "N4";
					dataGridView3[8, 0]->Value = "a*x";
					dataGridView3[9, 0]->Value = "y=b+a*x";

					dataGridView3->Rows[1]->DefaultCellStyle->Font = gcnew System::Drawing::Font(dataGridView3->DefaultCellStyle->Font, System::Drawing::FontStyle::Bold);

					dataGridView3[1, 1]->Value = L"С, мг/дм3";
					dataGridView3[2, 1]->Value = L"Д ср.";
					dataGridView3[3, 1]->Value = L"С квадр.";
					dataGridView3[4, 1]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold);
					dataGridView3[4, 1]->Value = L"Д ср. квадр.";
					dataGridView3[5, 1]->Value = L"С * Д";
					dataGridView3[6, 1]->Value = L"Д нач.";
					dataGridView3[7, 1]->Value = L"К";
					dataGridView3[8, 1]->Value = L"К * С";
					dataGridView3[9, 1]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold);
					dataGridView3[9, 1]->Value = L"ДР=Днач.К*С";
				}
			}

			x3 += x;
			y1 += y;

			if (count > 1) //replacing last row
			{
				dataGridView1->Rows->RemoveAt(count);
				dataGridView1->Rows->Add();
			}

			for (int i = 0; i < x; ++i, ++col_count) // columns adding
			{
				dataGridView1->Columns->Add("", "");
				dataGridView3->Rows->Add();
				dataGridView3[0, col_count + 2]->Value = col_count + 1;
			}

			for (int i = 0; i < y; ++i, ++count) // rows adding
			{
				dataGridView1->Rows->Add();
				dataGridView1[0, count]->Value = L"Д" + count; // values of most left column
				dataGridView1->Rows[count]->ReadOnly = false;
			}
			if (x2 == 0 && y > 0)
			{
				dataGridView1->Rows->Add();
				x2 = 1;
			}
			if (count > 1) // the last row
			{
				dataGridView1[0, count]->Value = L"Д ср.";
				dataGridView1->Rows[count]->DefaultCellStyle->Format = "N3";
				dataGridView1->Rows[count]->ReadOnly = true;
			}
			if (col_count > 0)
			{
				if (count_d3 == 0)
				{
					dataGridView3->Rows->Add();
					dataGridView3->Rows->Add();
					count_d3 = 1;
				}
				dataGridView3[0, col_count + 2]->Value = L"Сумма";
				dataGridView3[0, col_count + 3]->Value = L"Кв.суммы";
			}
			x_save = x;
			y_save = y;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(L"Введённые данные некорректны!", L"Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView3->Columns->Clear();
	dataGridView3->Rows->Clear();
	textBox1->Clear();
	textBox2->Clear();
	textBox4->Visible = false;
	textBox5->Visible = false;
	x1 = 0;
	x2 = 0;
	x3 = 0;
	y1 = 0;
	count = 0;
	col_count = 0;
	count_d3 = 0;
	x_save = 0;
	y_save = 0;
	chart1->Visible = false;
	chart1->Series[0]->Points->Clear();
	chart1->Titles[0]->Text = "";
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		float n = 0;
		int i = 0;

		CultureInfo^ MyCI = gcnew CultureInfo("en-US", false);
		NumberFormatInfo^ nfi = MyCI->NumberFormat;
		nfi->NumberDecimalSeparator = ".";

		// first table average
		for (int i = 1, quantity = 0; i <= x3; ++i)
		{
			for (int i1 = 1; i1 <= y1; ++i1)
			{
				if (dataGridView1[i, i1]->Value)
				{
					n += Convert::ToDouble(dataGridView1[i, i1]->Value, nfi);
					++quantity;
				}
			}
			if (quantity != 0)
				dataGridView1[i, y1 + 1]->Value = n / quantity;
			n = 0;
			quantity = 0;
		}

		//second table first column
		for (i = 1; i <= col_count; ++i)
		{
			if (dataGridView1[i, 0]->Value)
			{
				n += Convert::ToDouble(dataGridView1[i, 0]->Value, nfi);
				dataGridView3[1, i + 1]->Value = Convert::ToDouble(dataGridView1[i, 0]->Value, nfi);
			}
		}
		dataGridView3[1, i + 1]->Value = n;
		dataGridView3[1, i + 2]->Value = n * n;
		n = 0;
		i = 0;

		//second table second column
		for (i = 1; i <= col_count; ++i)
			if (dataGridView1[i, count]->Value)
			{
				n += Convert::ToDouble(dataGridView1[i, count]->Value, nfi);
				dataGridView3[2, i + 1]->Value = Convert::ToDouble(dataGridView1[i, count]->Value, nfi);
			}
		dataGridView3[2, i + 1]->Value = n;
		dataGridView3[2, i + 2]->Value = n * n;
		n = 0;
		i = 0;

		//second table third column
		for (i = 1; i <= col_count; ++i)
			if (dataGridView3[1, i + 1]->Value)
			{
				n += Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi);
				dataGridView3[3, i + 1]->Value = Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi);
			}
		dataGridView3[3, i + 1]->Value = n;
		n = 0;
		i = 0;

		//second table fourth column
		for (i = 1; i <= col_count; ++i)
			if (dataGridView3[2, i + 1]->Value)
			{
				n += Convert::ToDouble(dataGridView3[2, i + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[2, i + 1]->Value, nfi);
				dataGridView3[4, i + 1]->Value = Convert::ToDouble(dataGridView3[2, i + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[2, i + 1]->Value, nfi);
			}
		dataGridView3[4, i + 1]->Value = n;
		n = 0;
		i = 0;

		//second table fifth column
		for (i = 1; i <= col_count; ++i)
			if (dataGridView3[1, i + 1]->Value && dataGridView3[2, i + 1]->Value)
			{
				n += Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[2, i + 1]->Value, nfi);
				dataGridView3[5, i + 1]->Value = Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[2, i + 1]->Value, nfi);
			}
		dataGridView3[5, i + 1]->Value = n;
		n = 0;
		i = 0;

		if (checkBox1->Checked)
		{
			for (int i = 6; i <= 9; ++i)
				dataGridView3[i, 1]->Value = "";

			double sum = 0;
			int i = 0;

			//the sixth column
			for (i = 0, sum = 0; i < x3; ++i)
			{
				dataGridView3[6, i + 2]->Value = Convert::ToDouble(dataGridView3[1, i + 2]->Value, nfi) * Convert::ToDouble(dataGridView3[3, i + 2]->Value, nfi);
				sum += Convert::ToDouble(dataGridView3[6, i + 2]->Value, nfi);
			}
			dataGridView3[6, i + 2]->Value = sum;
			dataGridView3[6, i + 3]->Value = sum * sum;

			sum = 0;

			//the seventh column
			dataGridView3[7, 2]->Style->ForeColor = Color::Black;
			dataGridView3[7, 2]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 8);
			for (i = 0, sum = 0; i < x3; ++i)
			{
				dataGridView3[7, i + 2]->Value = Convert::ToDouble(dataGridView3[3, i + 2]->Value, nfi) * Convert::ToDouble(dataGridView3[3, i + 2]->Value, nfi);
				sum += Convert::ToDouble(dataGridView3[7, i + 2]->Value, nfi);
			}
			dataGridView3[7, i + 2]->Value = sum;

			sum = 0;

			//the eight column
			for (i = 0, sum = 0; i < x3; ++i)
			{
				dataGridView3[8, i + 2]->Value = Convert::ToDouble(dataGridView3[3, i + 2]->Value, nfi) * Convert::ToDouble(dataGridView3[2, i + 2]->Value, nfi);
				sum += Convert::ToDouble(dataGridView3[8, i + 2]->Value, nfi);
			}
			dataGridView3[8, i + 2]->Value = sum;

			sum = 0;

			std::vector<float> ab;
			ab.resize(9);
			ab[0] = Convert::ToDouble(dataGridView3[8, i + 2]->Value, nfi) / Convert::ToDouble(dataGridView3[7, i + 2]->Value, nfi);
			ab[1] = Convert::ToDouble(dataGridView3[6, i + 3]->Value, nfi) / Convert::ToDouble(dataGridView3[7, i + 2]->Value, nfi);
			ab[2] = ab[0] * Convert::ToDouble(dataGridView3[6, i + 2]->Value, nfi);
			ab[3] = Convert::ToDouble(dataGridView3[5, i + 2]->Value, nfi) - ab[2];
			ab[4] = Convert::ToDouble(dataGridView3[3, i + 2]->Value, nfi) - ab[1];
			ab[5] = ab[3] / ab[4];
			ab[6] = ab[5] * Convert::ToDouble(dataGridView3[6, i + 2]->Value, nfi);
			ab[7] = Convert::ToDouble(dataGridView3[8, i + 2]->Value, nfi) - ab[6];
			ab[8] = ab[7] / Convert::ToDouble(dataGridView3[7, i + 2]->Value, nfi);

			//the ninth column
			for(i = 0; i < x3; ++i)
				dataGridView3[9, i + 2]->Value = ab[8] * Convert::ToDouble(dataGridView3[1, i + 2]->Value, nfi) * Convert::ToDouble(dataGridView3[1, i + 2]->Value, nfi) + (ab[5] * Convert::ToDouble(dataGridView3[1, i + 2]->Value, nfi));
		}
		else
		{
			//second table seventh column
			n = Convert::ToDouble(dataGridView3[1, col_count + 2]->Value, nfi);
			n *= Convert::ToDouble(dataGridView3[2, col_count + 2]->Value, nfi);
			n -= Convert::ToDouble(dataGridView3[0, col_count + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[5, col_count + 2]->Value, nfi);
			n /= Convert::ToDouble(dataGridView3[1, col_count + 3]->Value, nfi) - (col_count * Convert::ToDouble(dataGridView3[3, col_count + 2]->Value, nfi));
			dataGridView3[7, 2]->Style->ForeColor = Color::Red;
			dataGridView3[7, 2]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold);
			dataGridView3[7, 2]->Value = n;
			n = 0;

			//second table sixth column
			n = Convert::ToDouble(dataGridView3[7, 2]->Value, nfi);
			n *= Convert::ToDouble(dataGridView3[1, col_count + 2]->Value, nfi);
			n = Convert::ToDouble(dataGridView3[2, col_count + 2]->Value, nfi) - n;
			n /= Convert::ToDouble(dataGridView3[0, col_count + 1]->Value, nfi);
			dataGridView3[6, 2]->Value = n;
			n = 0;

			//second table eighth column
			for (i = 1; i <= col_count; ++i)
				if (dataGridView3[1, i + 1]->Value)
				{
					n = Convert::ToDouble(dataGridView3[7, 2]->Value, nfi) * Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi);
					dataGridView3[8, i + 1]->Value = n;
				}
			n = 0;

			//second table ninth column
			for (i = 1; i <= col_count; ++i)
				if (dataGridView3[8, i + 1]->Value)
				{
					n = Convert::ToDouble(dataGridView3[6, 2]->Value, nfi) + Convert::ToDouble(dataGridView3[8, i + 1]->Value, nfi);
					dataGridView3[9, i + 1]->Value = n;
				}
			n = 0;
		}

		//first chart
		if(comboBox1->SelectedIndex == 2)
			chart1->Visible = true;
		chart1->Series[0]->Points->Clear();
		chart1->ChartAreas[0]->AxisX->Minimum = 0;
		chart1->ChartAreas[0]->AxisX->Maximum = Convert::ToDouble(dataGridView3[1, col_count+1]->Value, nfi);
		chart1->ChartAreas[0]->AxisX->Interval = round(Convert::ToDouble(dataGridView3[1, col_count + 1]->Value, nfi) / (col_count * 2) * 100) / 100;
		chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = round(Convert::ToDouble(dataGridView3[1, col_count + 1]->Value, nfi) / (col_count * 2) * 100) / 100;
		chart1->ChartAreas[0]->AxisY->Minimum = 0;
		chart1->ChartAreas[0]->AxisY->Maximum = round(Convert::ToDouble(dataGridView3[2, col_count + 1]->Value, nfi) * 10) / 10;
		chart1->ChartAreas[0]->AxisY->Interval = 0.05;
		chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = 0.05;
		chart1->Series[0]->BorderWidth = 2;
		chart1->Series[0]->Color = Color::Red;
		n = (Convert::ToDouble(dataGridView3[0, col_count + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[5, col_count + 2]->Value, nfi) - Convert::ToDouble(dataGridView3[1, col_count + 2]->Value, nfi) * Convert::ToDouble(dataGridView3[2, col_count + 2]->Value, nfi)) / sqrt(((Convert::ToDouble(dataGridView3[0, col_count + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[3, col_count + 2]->Value, nfi) - Convert::ToDouble(dataGridView3[1, col_count + 3]->Value, nfi)) * (Convert::ToDouble(dataGridView3[0, col_count + 1]->Value, nfi) * Convert::ToDouble(dataGridView3[4, col_count + 2]->Value, nfi) - Convert::ToDouble(dataGridView3[2, col_count + 3]->Value, nfi))));
		chart1->Titles[0]->Text = "y = " + round(Convert::ToDouble(dataGridView3[7, 2]->Value, nfi) * rou) / rou + " x + " + round(Convert::ToDouble(dataGridView3[6, 2]->Value, nfi) * rou) / rou + ": r2 = " + round(n * rou) / rou + ": R2 = " + round((n * n) * rou) / rou + ":";

		for (i = 1; i <= col_count; ++i)
			if (dataGridView3[1, i + 1]->Value && dataGridView3[9, i + 1]->Value)
				chart1->Series[0]->Points->AddXY(Convert::ToDouble(dataGridView3[1, i + 1]->Value, nfi), Convert::ToDouble(dataGridView3[9, i + 1]->Value, nfi));
	}
	catch (Exception^ e)
	{
		MessageBox::Show(L"Введённые данные некорректны!", L"Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex == 1)
	{
		dataGridView3->Visible = true;
		label3->Text = L"Таблица 2";
		label3->Location = System::Drawing::Point(695, 0);
		label4->Text = L"Данные для нахождения коэффициентов";
		label4->Location = System::Drawing::Point(250, 0);
		textBox4->Visible = false;
		textBox5->Visible = false;
		chart1->Visible = false;
		if (x1 != 0)
			dataGridView1->Visible = false;
	}
	else if (comboBox1->SelectedIndex == 0)
	{
		label3->Text = L"Таблица 1";
		label3->Location = System::Drawing::Point(695, 0);
		label4->Text = L"Экспериментальные данные";
		label4->Location = System::Drawing::Point(306, 0);
		chart1->Visible = false;
		dataGridView3->Visible = false;
		dataGridView1->Visible = true;
		if (x1 != 0)
		{
			textBox4->Visible = true;
			textBox5->Visible = true;
		}
	}
	else if (comboBox1->SelectedIndex == 2)
	{
		chart1->Visible = true;
		label3->Text = L"График";
		label3->Location = System::Drawing::Point(710, 0);
		label4->Text = L"Калибровочный график";
		label4->Location = System::Drawing::Point(310, 0);
		textBox4->Visible = false;
		textBox5->Visible = false;
		dataGridView3->Visible = false;
		dataGridView1->Visible = false;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (x1 != 0)
	{
		if (checkBox1->Checked)
		{
			dataGridView3[1, 0]->Value = "x";
			dataGridView3->Columns[1]->DefaultCellStyle->Format = "N2";
			dataGridView3[2, 0]->Value = "y";
			dataGridView3[3, 0]->Value = "x2";
			dataGridView3[4, 0]->Value = "y2";
			dataGridView3[5, 0]->Value = "x*y";
			dataGridView3[6, 0]->Value = "x3";
			dataGridView3[7, 0]->Value = "x4";
			dataGridView3->Columns[7]->DefaultCellStyle->Format = "N4";
			dataGridView3[8, 0]->Value = "x2*y";
			dataGridView3[9, 0]->Value = L"Формула";

			button3_Click(sender, e);

		}
		else
		{
			for (int i = 2; i <= x3+3; ++i)
			{
				dataGridView3[6, i]->Value = "";
				dataGridView3[7, i]->Value = "";
				dataGridView3[8, i]->Value = "";
				dataGridView3[9, i]->Value = "";
			}

			dataGridView3->Columns[0]->Width = 60;
			dataGridView3->Columns[0]->DefaultCellStyle->Format = "N0";
			dataGridView3->Columns[9]->Width = 84;
			dataGridView3[1, 0]->Value = "x";
			dataGridView3->Columns[1]->DefaultCellStyle->Format = "N2";
			dataGridView3[2, 0]->Value = "y";
			dataGridView3[3, 0]->Value = "x2";
			dataGridView3[4, 0]->Value = "y2";
			dataGridView3[5, 0]->Value = "x*y";
			dataGridView3[6, 0]->Value = "b";
			dataGridView3[7, 0]->Value = "a";
			dataGridView3->Columns[7]->DefaultCellStyle->Format = "N4";
			dataGridView3[8, 0]->Value = "a*x";
			dataGridView3[9, 0]->Value = "y=b+a*x";

			dataGridView3->Rows[1]->DefaultCellStyle->Font = gcnew System::Drawing::Font(dataGridView3->DefaultCellStyle->Font, System::Drawing::FontStyle::Bold);

			dataGridView3[1, 1]->Value = L"С, мг/дм3";
			dataGridView3[2, 1]->Value = L"Д ср.";
			dataGridView3[3, 1]->Value = L"С квадр.";
			dataGridView3[4, 1]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold);
			dataGridView3[4, 1]->Value = L"Д ср. квадр.";
			dataGridView3[5, 1]->Value = L"С * Д";
			dataGridView3[6, 1]->Value = L"Д нач.";
			dataGridView3[7, 1]->Value = L"К";
			dataGridView3[8, 1]->Value = L"К * С";
			dataGridView3[9, 1]->Style->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold);
			dataGridView3[9, 1]->Value = L"ДР=Днач.К*С";
			button3_Click(sender, e);
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->InitialDirectory = "C:\\Users\\" + Environment::UserName + "\\Documents";
	openFileDialog1->Title = L"Загрузить данные";
	openFileDialog1->Filter = "mnk files (*.mnk)|*.mnk";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	try
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
			std::vector<int> v = { 0, 0 };
			String^ s = "";
			for (int c, i = 0, number = 0, count = 1, exist_table = 0, string_wait = 0; (c = sr->Read()) != EOF;)
			{
				if (c >= 48 && c <= 57)
				{
					if (string_wait != 1)
					{
						number += (c - 48) * count;
						count *= 10;
					}
					else
					{
						s += Convert::ToChar(c);
						while ((c = sr->Read()) != ';')
							s += Convert::ToChar(c);
						dataGridView1[v[0], v[1]]->Value = s;
						s = "";
						string_wait = 0;
					}
				}
				else
				{
					if (count > 1)
					{
						v[i] = number;
						if (i == 0)
							++i;
						else
						{
							i = 0;
							if (exist_table == 0)
							{
								button2_Click(sender, e);
								textBox1->Text = Convert::ToString(v[0]);
								textBox2->Text = Convert::ToString(v[1]);
								button1_Click(sender, e);
								textBox1->Clear();
								textBox2->Clear();
								exist_table = 1;
							}
							else
								string_wait = 1;
						}
					}
					count = 1;
					number = 0;
				}
			}
			button3_Click(sender, e);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(L"Невалидный файл или путь.", L"Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fpath = "C:\\Users\\" + Environment::UserName + "\\Documents";

	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->InitialDirectory = fpath;
	saveFileDialog1->FileName = "mnk_save.mnk";
	saveFileDialog1->Title = L"Сохранить данные";
	saveFileDialog1->Filter = "mnk files (*.mnk)|*.mnk";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		File::WriteAllText(saveFileDialog1->FileName, "This is the data-file of MNK program.\n");
		File::AppendAllText(saveFileDialog1->FileName, "{\n");
		File::AppendAllText(saveFileDialog1->FileName, "x = " + Convert::ToString(x_save) + ";");
		File::AppendAllText(saveFileDialog1->FileName, " y = " + Convert::ToString(y_save) + ";\n\n");

		for (int i = 1; i <= x3; ++i)
		{
			for (int i1 = 0; i1 <= y1; ++i1)
				if (dataGridView1[i, i1]->Value)
				{
					File::AppendAllText(saveFileDialog1->FileName, "[" + Convert::ToString(i) + ", " + Convert::ToString(i1) + "] = " + Convert::ToString(dataGridView1[i, i1]->Value) + ";\n");
				}
		}
		File::AppendAllText(saveFileDialog1->FileName, "}");
	}
}
};
}