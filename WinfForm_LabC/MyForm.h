#pragma once

namespace WinFormVar3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->label1->Location = System::Drawing::Point(15, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ширина\r\nпрямоугольника\r\n";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->textBox1->Location = System::Drawing::Point(167, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->textBox2->Location = System::Drawing::Point(167, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->label2->Location = System::Drawing::Point(18, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Высота\r\nпрямоугольника";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(21, 142);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(158, 106);
			this->panel1->TabIndex = 4;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->radioButton3->Location = System::Drawing::Point(18, 70);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(126, 22);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"10% площадь";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->radioButton2->Location = System::Drawing::Point(18, 41);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(97, 22);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Периметр";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->radioButton1->Location = System::Drawing::Point(18, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 22);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Площадь";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->button1->Location = System::Drawing::Point(294, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(308, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Значение";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->textBox3->Location = System::Drawing::Point(240, 171);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(211, 26);
			this->textBox3->TabIndex = 7;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(39, 284);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(151, 20);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Удвоить значение";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 330);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Вариант 3";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double width = Convert::ToDouble(textBox1->Text);
		double height = Convert::ToDouble(textBox2->Text);
		double result;
		if (radioButton2->Checked)
		{
			result = width * 2 + height * 2;
		}
		else
		{
			result = width * height;
			if (radioButton3->Checked)
				result *= 0.1;
		}
		if (checkBox1->Checked)
		{
			result *= 2;
		}
		textBox3->Text = Convert::ToString(result);
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		textBox3->Text = "";
		if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
		{
			button1->Enabled = 0;
		}
		else
			button1->Enabled = 1;
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar >= '0' && e->KeyChar <= '9')
			return;
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if (textBox1->Text->IndexOf(',') != -1 ||
				textBox1->Text->Length == 0)
			{
				e->Handled = 1;
			}
			return;
		}
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				textBox2->Focus();
			}
			return;
		}
		e->Handled = 1;
	}

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar >= '0' && e->KeyChar <= '9')
			return;
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if (textBox2->Text->IndexOf(',') != -1 ||
				textBox2->Text->Length == 0)
			{
				e->Handled = 1;
			}
			return;
		}

		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				button1->Focus();
			}
			return;
		}
		e->Handled = 1;
	}


	};
}
