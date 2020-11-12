#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	void result();
	void clean_for_operations();
	
	std::string temp_plus;
	std::string temp_minus;
	std::string temp_multiply;
	std::string temp_devide;

	bool flag_plus = false;
	bool flag_minus = false;
	bool flag_multiply = false;
	bool flag_devide = false;
	bool flag_equal = false;

	int count_plus = 0;
	int count_minus = 0;
	int count_multiply = 0;
	int count_devide = 0;

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
		//string tmp_label;
		
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

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(80, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(185, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(290, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(80, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(185, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 47);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(290, 224);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 47);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(80, 277);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 47);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(185, 277);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 47);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(290, 277);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 47);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(185, 330);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 47);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(80, 330);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 47);
			this->button11->TabIndex = 11;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(290, 330);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 47);
			this->button12->TabIndex = 12;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(462, 171);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(99, 47);
			this->button13->TabIndex = 13;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(462, 224);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 47);
			this->button14->TabIndex = 14;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(462, 277);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(99, 47);
			this->button15->TabIndex = 15;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(462, 330);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(99, 47);
			this->button16->TabIndex = 16;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(304, 120);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(99, 32);
			this->button17->TabIndex = 17;
			this->button17->Text = L"CE";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(-1, 50);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(99, 30);
			this->button18->TabIndex = 18;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(-1, 88);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(99, 45);
			this->button19->TabIndex = 19;
			this->button19->Text = L"x^2";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(-1, 141);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(99, 45);
			this->button20->TabIndex = 20;
			this->button20->Text = L"x^n";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(-1, 194);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(99, 45);
			this->button21->TabIndex = 21;
			this->button21->Text = L"√x";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(-1, 247);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(99, 45);
			this->button22->TabIndex = 22;
			this->button22->Text = L"log";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(80, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(481, 67);
			this->label1->TabIndex = 23;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Location = System::Drawing::Point(567, 87);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(99, 303);
			this->panel1->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 50);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Ещё не реализовано";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->UseMnemonic = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 402);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Location = System::Drawing::Point(90, 90);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	//	
	// Кнопка "1"
	//
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
		this->label1->Text = this->label1->Text + "1";
		}
		
	}
	//	
	// Кнопка "2"
	//
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "2";
		}
	}
	//	
	// Кнопка "3"
	//
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (flag_equal == true) { // сигнал, что было нажато =
			this->label1->Text = "";
			flag_equal = false;
		}

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "3";
		}
	}
	//	
	// Кнопка "4"
	//
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "4";
		}
	}
	//	
	// Кнопка "5"
	//
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "5";
		}
	}
	//	
	// Кнопка "6"
	//
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "6";
		}
	}
	//	
	// Кнопка "7"
	//
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "7";
		}
	}
	//	
	// Кнопка "8"
	//
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "8";
		}
	}
	//	
	// Кнопка "9"
	//
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();

		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "9";
		}
	}
	//	
	// Кнопка "0"
	//
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		clean_for_operations();
		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + "0";
		}
	}
	//	
	// Кнопка ","
	//
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->label1->Text->Length != 12)
		{
			this->label1->Text = this->label1->Text + ".";
		}
	}
	
	

	//	
	// Кнопка "+"
	//
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((flag_equal == false) && (count_plus>0)) //если пользователь спамит + и не нажимает =
			result();
		
		temp_plus = marshal_as<std::string>(this->label1->Text);
		flag_plus = true;
		count_plus = 1;

		// если пользователь не захотел /, -, *, а захотел +
		if (flag_minus == true)
			temp_minus = "";
		if (flag_multiply == true)
			temp_multiply = "";
		if (flag_devide == true)
			temp_devide = "";
	}

	//	
	// Кнопка "-"
	//
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((flag_equal == false) && (count_minus > 0)) //если пользователь спамит - и не нажимает =
			result();

		temp_minus = marshal_as<std::string>(this->label1->Text);
		flag_minus = true;
		count_minus = 1;

		// если пользователь не захотел +, /, *, а захотел -
		if (flag_plus == true)
			temp_plus = "";
		if (flag_multiply == true)
			temp_multiply = "";
		if (flag_devide == true)
			temp_devide = "";
	}
	
	//	
	// Кнопка "*"
	//
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((flag_equal == false) && (count_multiply > 0)) //если пользователь спамит * и не нажимает =
			result();

		temp_multiply = marshal_as<std::string>(this->label1->Text);
		flag_multiply = true;
		count_multiply = 1;

		// если пользователь не захотел +, -, /, а захотел *
		if (flag_plus == true)
			temp_plus = "";
		if (flag_minus == true)
			temp_minus = "";
		if (flag_devide == true)
			temp_devide = "";
	}

	//	
	// Кнопка "/"
	//
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((flag_equal == false) && (count_devide > 0)) //если пользователь спамит / и не нажимает =
			result();

		temp_devide = marshal_as<std::string>(this->label1->Text);
		flag_devide = true;
		count_devide = 1;

		// если пользователь не захотел +, -, *, а захотел /
		if (flag_plus == true)
			temp_plus = "";
		if (flag_minus == true)
			temp_minus = "";
		if (flag_multiply == true)
			temp_multiply = "";
	}



	//	
	// Кнопка "="
	//
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		result();
	}

	//	
	// Кнопка "CE"
	//
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		this->label1->Text = "";
		count_plus = 0;
		count_minus = 0;
		count_multiply = 0;
		count_devide = 0;
		temp_plus = "";
		temp_minus = "";
		temp_multiply = "";
		temp_devide = "";
	}
	
	//	
	// Кнопка "<-"
	//
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	void result() {
		static std::string result;
		std::string temp_equal = marshal_as<std::string>(this->label1->Text);
		std::ostringstream ost;
		if (temp_plus != "") {
			ost << (atof(temp_equal.c_str()) + atof(temp_plus.c_str()));
			temp_plus = "";
		}
			
		if (temp_minus != "") {
			ost << (atof(temp_minus.c_str()) - atof(temp_equal.c_str()));
			temp_minus = "";
		}
			
		if (temp_multiply != "") {
			ost << (atof(temp_multiply.c_str()) * atof(temp_equal.c_str()));
			temp_multiply = "";
		}

		if (temp_devide != "") {
			ost << (atof(temp_devide.c_str()) / atof(temp_equal.c_str()));
			temp_devide = "";
		}

		result = ost.str();
		//ost << std::endl;
		ost.str(std::string());
		this->label1->Text = gcnew System::String(result.c_str());;
		result = "";
		
		flag_equal = true;
	}	

	void clean_for_operations() {
		if (flag_plus == true) {// сигнал, что был нажат плюс
			this->label1->Text = "";
			flag_plus = false;
		}

		if (flag_minus == true) {// сигнал, что был нажат минус
			this->label1->Text = "";
			flag_minus = false;
		}

		if (flag_multiply == true) {// сигнал, что было нажато умножение
			this->label1->Text = "";
			flag_multiply = false;
		}

		if (flag_devide == true) {// сигнал, что было нажато деление
			this->label1->Text = "";
			flag_devide = false;
		}

		if (flag_equal == true) { // сигнал, что было нажато =
			this->label1->Text = "";
			flag_equal = false;
		}
	}




};


}
