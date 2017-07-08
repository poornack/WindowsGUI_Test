#pragma once
#include <stdlib.h>
#include <vector>

int offset = 0;

namespace WindowsGUI_Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Num 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(281, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Num 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(403, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Num 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(528, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Num 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(646, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Num 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(758, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Num 6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(877, 65);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Num 7";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(289, 117);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(637, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(309, 120);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1095, 524);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_click(System::Object^  sender, System::EventArgs^  e) {

		std::vector<int> numbers;
		numbers.erase(numbers.begin(), numbers.end());

		for (int i = 0; i < 7; i++) {
			numbers.push_back(i + offset);
		}

		offset++;

		this->label1->Text = Convert::ToString(numbers.at(0));
		this->label2->Text = Convert::ToString(numbers.at(1));
		this->label3->Text = Convert::ToString(numbers.at(2));
		this->label4->Text = Convert::ToString(numbers.at(3));
		this->label5->Text = Convert::ToString(numbers.at(4));
		this->label6->Text = Convert::ToString(numbers.at(5));
		this->label7->Text = Convert::ToString(numbers.at(6));

		this->button2->Enabled = true;

	}
	private: System::Void button2_click(System::Object^  sender, System::EventArgs^  e) {

		// clear label fields
		this->label1->Text = "0";
		this->label2->Text = "0";
		this->label3->Text = "0";
		this->label4->Text = "0";
		this->label5->Text = "0";
		this->label6->Text = "0";
		this->label7->Text = "0";

		// set button state
		this->button1->Enabled = true;
		this->button2->Enabled = false;

		// reset offset
		offset = 0;

	}
};
}