#pragma once
#include <iostream>

namespace uProgrammingTool {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for uProgramming
	/// </summary>

	public ref class uProgramming : public System::Windows::Forms::Form
	{
	public:
		uProgramming(void)
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
		~uProgramming()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::ComboBox^  comboBoxALU;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  singleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  multiToolStripMenuItem;






	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxALU = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->singleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(629, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Code!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &uProgramming::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 55);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(67, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"PC->Bus";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 78);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"PC Load";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 101);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(71, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"PC Count";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(264, 55);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(63, 17);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"MDR In";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(181, 55);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(77, 17);
			this->checkBox5->TabIndex = 5;
			this->checkBox5->Text = L"RAM Load";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(89, 55);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(86, 17);
			this->checkBox6->TabIndex = 4;
			this->checkBox6->Text = L"MAR Enable";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(264, 78);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(78, 17);
			this->checkBox7->TabIndex = 7;
			this->checkBox7->Text = L"Bus->MDR";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(264, 124);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(78, 17);
			this->checkBox8->TabIndex = 9;
			this->checkBox8->Text = L"MDR->Bus";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(264, 101);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(71, 17);
			this->checkBox9->TabIndex = 8;
			this->checkBox9->Text = L"MDR Out";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(348, 55);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(73, 17);
			this->checkBox10->TabIndex = 10;
			this->checkBox10->Text = L"IR Enable";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(427, 78);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(94, 17);
			this->checkBox11->TabIndex = 11;
			this->checkBox11->Text = L"ALU LoadFlag";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox11_CheckedChanged);
			// 
			// comboBoxALU
			// 
			this->comboBoxALU->FormattingEnabled = true;
			this->comboBoxALU->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CMA", L"AND", L"OR", L"XOR", L"ADD", L"SUB",
					L"RAL", L"RAR"
			});
			this->comboBoxALU->Location = System::Drawing::Point(427, 51);
			this->comboBoxALU->Name = L"comboBoxALU";
			this->comboBoxALU->Size = System::Drawing::Size(121, 21);
			this->comboBoxALU->TabIndex = 12;
			this->comboBoxALU->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBoxALU_SelectedIndexChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(427, 101);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(83, 17);
			this->checkBox12->TabIndex = 13;
			this->checkBox12->Text = L"ALU CarryIn";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox12_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(427, 124);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(67, 17);
			this->checkBox13->TabIndex = 14;
			this->checkBox13->Text = L"ALU Out";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox13_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(427, 147);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(95, 17);
			this->checkBox16->TabIndex = 15;
			this->checkBox16->Text = L"ALU LoadShift";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox16_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"PC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(424, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"ALU";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(86, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"MAR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"RAM";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"MDR";
			this->label5->Click += gcnew System::EventHandler(this, &uProgramming::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(345, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"IR";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(551, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Regs";
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(554, 55);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(64, 17);
			this->checkBox14->TabIndex = 23;
			this->checkBox14->Text = L"Bus Out";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox14_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A", L"TMP", L"B", L"C" });
			this->comboBox1->Location = System::Drawing::Point(554, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 24;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A", L"TMP", L"B", L"C" });
			this->comboBox2->Location = System::Drawing::Point(554, 120);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 26;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBox2_SelectedIndexChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(554, 101);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(58, 17);
			this->checkBox15->TabIndex = 25;
			this->checkBox15->Text = L"Reg In";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox15_CheckedChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A", L"TMP", L"B", L"C" });
			this->comboBox3->Location = System::Drawing::Point(554, 166);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 28;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A", L"TMP", L"B", L"C" });
			this->comboBox4->Location = System::Drawing::Point(554, 212);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 30;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBox4_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(551, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Source A";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(551, 196);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Source B";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 196);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"IN";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"(None)", L"1", L"2" });
			this->comboBox5->Location = System::Drawing::Point(15, 212);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 37;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBox5_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"(None)", L"3", L"4" });
			this->comboBox6->Location = System::Drawing::Point(15, 252);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 21);
			this->comboBox6->TabIndex = 39;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::comboBox6_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 236);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 13);
			this->label11->TabIndex = 38;
			this->label11->Text = L"OUT";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(503, 328);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 20);
			this->textBox1->TabIndex = 40;
			this->textBox1->Text = L"Give A Name to File!";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &uProgramming::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &uProgramming::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(193, 212);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(301, 95);
			this->listBox1->TabIndex = 41;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &uProgramming::listBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(193, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 20);
			this->textBox2->TabIndex = 42;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &uProgramming::textBox2_TextChanged_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(419, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 20);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &uProgramming::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(193, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 44;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &uProgramming::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(419, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 45;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &uProgramming::button5_Click);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(15, 290);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(45, 17);
			this->checkBox17->TabIndex = 46;
			this->checkBox17->Text = L"Halt";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &uProgramming::checkBox17_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->selectToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(716, 24);
			this->menuStrip1->TabIndex = 47;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &uProgramming::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &uProgramming::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &uProgramming::openToolStripMenuItem_Click);
			// 
			// selectToolStripMenuItem
			// 
			this->selectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->singleToolStripMenuItem,
					this->multiToolStripMenuItem
			});
			this->selectToolStripMenuItem->Name = L"selectToolStripMenuItem";
			this->selectToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->selectToolStripMenuItem->Text = L"Select";
			// 
			// singleToolStripMenuItem
			// 
			this->singleToolStripMenuItem->Name = L"singleToolStripMenuItem";
			this->singleToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->singleToolStripMenuItem->Text = L"Single";
			this->singleToolStripMenuItem->Click += gcnew System::EventHandler(this, &uProgramming::singleToolStripMenuItem_Click);
			// 
			// multiToolStripMenuItem
			// 
			this->multiToolStripMenuItem->Name = L"multiToolStripMenuItem";
			this->multiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->multiToolStripMenuItem->Text = L"Multi";
			this->multiToolStripMenuItem->Click += gcnew System::EventHandler(this, &uProgramming::multiToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &uProgramming::openFileDialog1_FileOk);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(301, 313);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 48;
			this->button6->Text = L"Rename";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &uProgramming::button6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(512, 287);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 49;
			// 
			// uProgramming
			// 
			this->AccessibleName = L"fileNameInput";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 363);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->comboBoxALU);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"uProgramming";
			this->Text = L"uProgramming";
			this->Load += gcnew System::EventHandler(this, &uProgramming::uProgramming_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<int> ^contents= gcnew array <int>(100);
		array<String^> ^hexcont0= gcnew array <String^>(1000000);
		array<String^> ^hexcont1 = gcnew array <String^>(1000000);
		array<String^> ^hexcont2 = gcnew array <String^>(1000000);
		array<String^> ^hexcont3 = gcnew array <String^>(1000000);
		int contentIndex = 0;
		int pcBus,pcLoad,pcCnt;
		int marEn;
		int ramLoad;
		int mdIn, busMdr, mdrOut, mdrBus;
		int irEn;
		int aluOp0, aluOp1, loadFlag, carryIn, aluOut, loadShift;
		int busOut, busOutSel, regIn, regInSel, sourceA1, sourceA2, sourceB;
		int inSel0, inSel1, outSel, halt;


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ outputFile = textBox1->Text;
		String^ fileContent0;
		String^ fileContent1;
		String^ fileContent2;
		String^ fileContent3;
		StreamWriter^ sw;

		if (textBox1->Text == "Give A Name to File!")
			outputFile = "output";
		sw = gcnew StreamWriter(outputFile + "0");

		for (int i = 0; i <= contentIndex; i++)
				fileContent0 += hexcont0[i] + " ";

		sw->WriteLine("v2.0 raw");
		sw->Write(fileContent0);
		sw->Write('\n');
		sw->Close();


		sw = gcnew StreamWriter(outputFile + "1");

		for (int i = 0; i <= contentIndex; i++)
				fileContent1 += hexcont1[i] + " ";
			

		sw->WriteLine("v2.0 raw");
		sw->Write(fileContent1);
		sw->Write('\n');
		sw->Close();

		sw = gcnew StreamWriter(outputFile + "2");

		for (int i = 0; i <= contentIndex; i++)
				fileContent2 += hexcont2[i] + " ";

		sw->WriteLine("v2.0 raw");
		sw->Write(fileContent2);
		sw->Write('\n');
		sw->Close();

		sw = gcnew StreamWriter(outputFile + "3");

		for (int i = 0; i <= contentIndex; i++)
				fileContent3 += hexcont3[i] + " ";

		sw->WriteLine("v2.0 raw");
		sw->Write(fileContent3);
		sw->Write('\n');
		sw->Close();

		MessageBox::Show(outputFile + "0\n" + outputFile + "1\n" + outputFile + "2\n" + outputFile + "3\n" + " are created!\n");
	}
	private: System::Void comboBoxALU_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		if (comboBoxALU->SelectedIndex == 0)
		{
			aluOp0 = 0; aluOp1 = 0;
		}
		else if (comboBoxALU->SelectedIndex == 1)
		{
			aluOp0 = 4; aluOp1 = 0;
		}
		else if (comboBoxALU->SelectedIndex == 2)
		{
			aluOp0 = 8; aluOp1 = 0;
		}
		else if (comboBoxALU->SelectedIndex == 3)
		{
			aluOp0 = 12; aluOp1 = 0;
		}
		else if (comboBoxALU->SelectedIndex == 4)
		{
			aluOp0 = 0; aluOp1 = 1;
		}
		else if (comboBoxALU->SelectedIndex == 5)
		{
			aluOp0 = 4; aluOp1 = 1;
		}
		else if (comboBoxALU->SelectedIndex == 6)
		{
			aluOp0 = 8; aluOp1 = 1;
		}
		else if (comboBoxALU->SelectedIndex == 7)
		{
			aluOp0 = 12; aluOp1 = 1;
		}
		else
		{
			aluOp0 = 0; aluOp1 = 0;
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 0)
		busOutSel = 0;
	else if (comboBox1->SelectedIndex == 1)
		busOutSel = 4;
	else if (comboBox1->SelectedIndex == 2)
		busOutSel = 8;
	else if (comboBox1->SelectedIndex == 3)
		busOutSel = 12;
	else
		busOutSel = 0;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->SelectedIndex == 0)
		regInSel = 0;
	else if (comboBox2->SelectedIndex == 1)
		regInSel = 2;
	else if (comboBox2->SelectedIndex == 2)
		regInSel = 4;
	else if (comboBox2->SelectedIndex == 3)
		regInSel = 6;
	else
		regInSel = 0;
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->SelectedIndex == 0)
	{
		sourceA1 = 0; sourceA2 = 0;
	}
	else if (comboBox3->SelectedIndex == 1)
	{
		sourceA1 = 8; sourceA2 = 0;
	}
	else if (comboBox3->SelectedIndex == 2)
	{
		sourceA1 = 0; sourceA2 = 1;
	}
	else if (comboBox3->SelectedIndex == 3)
	{
		sourceA1 = 8; sourceA2 = 1;
	}
	else
	{
		sourceA1 = 0; sourceA2 = 0;
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox4->SelectedIndex == 0)
		sourceB = 0;
	else if (comboBox4->SelectedIndex == 1)
		sourceB = 2;
	else if (comboBox4->SelectedIndex == 2)
		sourceB = 4;
	else if (comboBox4->SelectedIndex == 3)
		sourceB = 6;
	else
		sourceB = 0;
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox5->SelectedIndex == 0)
	{
		inSel0 = 0; inSel1 = 0;
	}
	else if (comboBox5->SelectedIndex == 1)
	{
		inSel0 = 8; inSel1 = 0;
	}
	else if (comboBox5->SelectedIndex == 2)
	{
		inSel0 = 0; inSel1 = 1;
	}
	else
	{
		inSel0 = 0; inSel1 = 0;
	}
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox6->SelectedIndex == 0)
		outSel = 0;
	else if (comboBox6->SelectedIndex == 1)
		outSel = 2;
	else if (comboBox6->SelectedIndex == 2)
		outSel = 4;

	else
		outSel = 0;
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox1->Text = "";
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int deleted= Convert::ToInt32(listBox1->SelectedIndex);

	if (deleted == -1)
		return;
	if (listBox1->SelectionMode == SelectionMode::One)
	{
		listBox1->Items->Remove(listBox1->SelectedItem);
		int length0 = hexcont0->Length - 1;
		int i = deleted;

		while (i < length0)
		{
			hexcont0[i] = hexcont0[i + 1];
			i++;
		}
		i = deleted;
		int length1 = hexcont1->Length - 1;
		while (i < length1)
		{
			hexcont1[i] = hexcont1[i + 1];
			i++;
		}
		i = deleted;
		int length2 = hexcont2->Length - 1;
		while (i < length2)
		{
			hexcont2[i] = hexcont2[i + 1];
			i++;
		}
		i = deleted;
		int length3 = hexcont3->Length - 1;
		while (i < length3)
		{
			hexcont3[i] = hexcont3[i + 1];
			i++;
		}
		contentIndex -= 1;
	}
	else if (listBox1->SelectionMode == SelectionMode::MultiExtended)
	{
		listBox1->Items->Remove(listBox1->SelectedIndices);
		MessageBox::Show(Convert::ToString(listBox1->SelectedIndices));
		int selectedLength = sizeof(listBox1->SelectedIndices);
		int length0 = hexcont0->Length - selectedLength;
		int length1 = hexcont1->Length - selectedLength;
		int length2 = hexcont2->Length - selectedLength;
		int length3 = hexcont3->Length - selectedLength;
		int i = deleted;

		while (i < length0)
		{
			hexcont0[i] = hexcont0[i + 1];
			i++;
		}
		i = deleted;
		while (i < length1)
		{
			hexcont1[i] = hexcont1[i + 1];
			i++;
		}
		i = deleted;
		while (i < length2)
		{
			hexcont2[i] = hexcont2[i + 1];
			i++;
		}
		i = deleted;
		while (i < length3)
		{
			hexcont3[i] = hexcont3[i + 1];
			i++;
		}
		contentIndex -= selectedLength;
	}
	
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	printGui(hexcont0,0);
	printGui(hexcont1, 1);
	printGui(hexcont2, 2);
	printGui(hexcont3, 3);
	textBox3_Hex();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int Index = listBox1->SelectedIndex;

	if (Index == -1)
		return;
	int dec[8];
	dec[0] = { pcBus + pcLoad + pcCnt + marEn };
	dec[1] = { ramLoad + mdIn + busMdr + mdrOut };
	dec[2] = { mdrBus + irEn + aluOp0 };
	dec[3] = { aluOp1 + loadFlag + carryIn + aluOut };
	dec[4] = { loadShift + busOut + busOutSel };
	dec[5] = { regIn + regInSel + sourceA1 };
	dec[6] = { sourceA2 + sourceB + inSel0 };
	dec[7] = { inSel1 + outSel + halt };
	hexcont0[Index] = dec2hex(dec[1]) + dec2hex(dec[0]);
	hexcont1[Index] = dec2hex(dec[3]) + dec2hex(dec[2]);
	hexcont2[Index] = dec2hex(dec[5]) + dec2hex(dec[4]);
	hexcont3[Index] = dec2hex(dec[7]) + dec2hex(dec[6]);
	textBox3_Hex();

}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
		pcBus = 0x1;
	else
		pcBus = 0x0;
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox2->Checked)
		pcLoad = 0x2;
	else
		pcLoad = 0x0;
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox3->Checked)
		pcCnt = 0x4;
	else
		pcCnt = 0x0;
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox6->Checked)
		marEn = 0x8;
	else
		marEn = 0x0;
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox5->Checked)
		ramLoad = 0x1;
	else
		ramLoad = 0x0;
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox4->Checked)
		mdIn = 0x2;
	else
		mdIn = 0x0;
		 }
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox7->Checked)
		busMdr = 0x4;
	else
		busMdr = 0x0;
}
private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox9->Checked)
		mdrOut = 0x8;
	else
		mdrOut = 0x0;
}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox8->Checked)
		mdrBus = 0x1;
	else
		mdrBus = 0x0;
}
private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox10->Checked)
		irEn = 0x2;
	else
		irEn = 0x0;
}
private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox11->Checked)
		loadFlag = 0x2;
	else
		loadFlag = 0x0;
}
private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox12->Checked)
		carryIn = 0x4;
	else
		carryIn = 0x0;
}
private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox13->Checked)
		aluOut = 0x8;
	else
		aluOut = 0x0;
}
private: System::Void checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox16->Checked)
		loadShift = 0x1;
	else
		loadShift = 0x0;
}
private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox14->Checked)
		busOut = 0x2;
	else
		busOut = 0x0;
}
private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox15->Checked)
		regIn = 0x1;
	else
		regIn = 0x0;
}
private: System::Void checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox17->Checked)
		halt = 0x8;
	else
		halt = 0x0;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int dec[8];
	dec[0] = { pcBus + pcLoad + pcCnt + marEn };
	dec[1] = { ramLoad + mdIn + busMdr + mdrOut };
	dec[2] = { mdrBus + irEn + aluOp0 };
	dec[3] = { aluOp1 + loadFlag + carryIn + aluOut };
	dec[4] = { loadShift + busOut + busOutSel };
	dec[5] = { regIn + regInSel + sourceA1 };
	dec[6] = { sourceA2 + sourceB + inSel0 };
	dec[7] = { inSel1 + outSel + halt };

	hexcont0[contentIndex] = dec2hex(dec[1]) + dec2hex(dec[0]);
	hexcont1[contentIndex] = dec2hex(dec[3]) + dec2hex(dec[2]);
	hexcont2[contentIndex] = dec2hex(dec[5]) + dec2hex(dec[4]);
	hexcont3[contentIndex] = dec2hex(dec[7]) + dec2hex(dec[6]);
	contentIndex += 1;
	if (textBox2->Text == "")
	{
		String ^ hexIndex = Convert::ToString(contentIndex - 1,16);
		listBox1->Items->Add(hexIndex);
	}

	else
		listBox1->Items->Add(textBox2->Text);
		 }
private: System::String ^dec2hex(int input)
	{
		int i = input - 10;

		if (input > 9)
		{
			switch (i)
			{
			case 0:
				return "a"; break;
			case 1:
				return"b"; break;
			case 2:
				return "c"; break;
			case 3:
				return "d"; break;
			case 4:
				return "e"; break;
			case 5:
				return "f"; break;
			default:
				return "0";
			}
		}
		else
			return input.ToString();
	}
private: int hex2dec(char input)
{

		switch (input)
		{
		case 'a':
			return 10; break;
		case 'b':
			return 11; break;
		case 'c':
			return 12; break;
		case 'd':
			return 13; break;
		case 'e':
			return 14; break;
		case 'f':
			return 15; break;
		default:
			return input;
		}

}
private: int char2dec(char input)
{

	switch (input)
	{
	case 'a':
		return 10; break;
	case 'b':
		return 11; break;
	case 'c':
		return 12; break;
	case 'd':
		return 13; break;
	case 'e':
		return 14; break;
	case 'f':
		return 15; break;
	default:
		return input-48;
	}
}
private: System::String ^dec2hex_multi(int input)
{
	int i = input%16;
	int d = input / 16;

	switch (i)
	{
	case 10:
		return d.ToString() + "a"; break;
	case 11:
		return d.ToString() + "b"; break;
	case 12:
		return d.ToString() + "c"; break;
	case 13:
		return d.ToString() + "d"; break;
	case 14:
		return d.ToString() + "e"; break;
	case 15:
		return d.ToString() + "f"; break;
	default:
		return d.ToString() + i.ToString();
	}
}

private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}

		 array <System::IO::StreamReader ^> ^ sr = gcnew array <System::IO::StreamReader ^>(4);
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!loaded)
		loaded = true;

		hexcont0 = gcnew array <String^>(1000000);
		hexcont1 = gcnew array <String^>(1000000);
		hexcont2 = gcnew array <String^>(1000000);
		hexcont3 = gcnew array <String^>(1000000);
		listBox1->Items->Clear();

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String ^fileName;
		int size=4;
		for (int counter = 0; counter < size; counter++)
		{
			fileName = openFileDialog1->FileName;
			for (int counter2 = 0; counter2 < size; counter2++)
			{
				char trimming = counter2 + 48;
				fileName = fileName->TrimEnd(trimming);
			}
			sr[counter] = gcnew System::IO::StreamReader(fileName + counter);
			switch (counter)
			{
			case 0:
				hexcont0 = uProgramming::raw2array(sr[counter], counter);
				break;
			case 1:
				hexcont1 = uProgramming::raw2array(sr[counter], counter);
				break;
			case 2:
				hexcont2 = uProgramming::raw2array(sr[counter], counter);
				break;
			case 3:
				hexcont3 = uProgramming::raw2array(sr[counter], counter);
				break;

			}
			
		}

		
	}
}
		 bool loaded = false;
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	
}
private: array<String^> ^raw2array(System::IO::StreamReader ^ sr, int index) {
	char charstoTrim[] = { "v2.0 raw\n" };
	String ^content = sr->ReadToEnd();
	array <Char>^ partedContent;
	array <String^> ^hex;
	int openIndex = 0;
	bool second = false;
	bool starend = false;
	
	switch (index)
	{
	case 0:
		hex = hexcont0;
		break;
	case 1:
		hex = hexcont1;
		break;
	case 2:
		hex = hexcont2;
		break;
	case 3:
		hex = hexcont3;
		break;
	default:
		break;
	}

	for (int i = 0; i < sizeof(charstoTrim); i++)
		content = content->TrimStart(charstoTrim[i]);


	partedContent = content->ToCharArray();
	bool star = false;

	for (int i = 0; i < partedContent->Length; i++)
	{

		int backcounter = 0;
		int multiplier;
		int length;
		String ^ multiStr;

		switch (partedContent[i])
		{
		case 3:
			break;
		case 13:
			break;
		case '\n':
		case ' ':
			length = partedContent->Length;
			if (length>(i+2))
			{
				if (partedContent[i + 2] == ' ' || partedContent[i + 2] == 10 || partedContent[i + 2] == 3)
				{
					hex[openIndex] = "0";
					if (second)
					{
						openIndex++;
						second = false;
					}
					else
						second = true;
				}
			}
			break;
		case '*':
			star = true;
			for (int j = i-1; j < i; j--)
			{
				
				if (partedContent[j] == ' ' || partedContent[j] == '\n')
				{
					break;
				}
				backcounter++;
			}
			openIndex += -backcounter/2;

			for (int j = openIndex; j <= openIndex + backcounter; j++)
			{
				
				multiStr = multiStr + hex[j];
				multiplier = System::Convert::ToInt32(multiStr);
				if (hex[j] == "*")
					break;
			}

			for (int j = 0; j < multiplier; j++)
			{
				hex[openIndex] = partedContent[i + 1].ToString() + partedContent[i + 1].ToString();
				second = false;
				openIndex++;
				if(index == 0)
					listBox1->Items->Add(dec2hex_multi(openIndex));
				starend = true;
			}
			break;
		default :
			if (star)
			{
				star = false;
				break;
			}
			hex[openIndex] += partedContent[i].ToString();
			if (second)
			{
				if (!starend && index == 0)
					listBox1->Items->Add(dec2hex_multi(openIndex));
				else
					starend = false;
				openIndex++;
				second = false;
			}
			else
				second = true;
			break;

		}

	}
	contentIndex=openIndex;
	sr->Close();
	return hex;
}

int comboALU;
int combo1;
int combo2;
int combo3;
int combo4;
int combo5;
int combo6;

public: void printGui(array <String^> ^hex,int index)
{
	array <wchar_t> ^ charOut;
	char LSH, MSH;

	if (listBox1->SelectedIndex == -1)
		return;
	if (!String::IsNullOrEmpty(hex[listBox1->SelectedIndex]) && hex[listBox1->SelectedIndex]->Length == 2)
	{
		charOut = hex[listBox1->SelectedIndex]->ToCharArray();
		LSH = charOut[1];
		MSH = charOut[0];
	}
	else
	{
		LSH = '0';
		MSH = '0';
	}


	int MSD = char2dec(MSH);
	int LSD = char2dec(LSH);

	if (index == 0)
	{
		comboALU = 0;
		combo1 = 0;
		combo2 = 0;
		combo3 = 0;
		combo4 = 0;
		combo5 = 0;
		combo6 = 0;

		if (LSD >= 8)
		{
			checkBox6->Checked = true;
			LSD -= 8;
		}
		else
		{
			checkBox6->Checked = false;
		}
		if (LSD >= 4)
		{
			checkBox3->Checked = true;
			LSD -= 4;
		}
		else
		{
			checkBox3->Checked = false;
		}
		if (LSD >= 2)
		{
			checkBox2->Checked = true;
			LSD -= 2;
		}
		else
		{
			checkBox2->Checked = false;
		}
		if (LSD >= 1)
		{
			checkBox1->Checked = true;
		}
		else
		{
			checkBox1->Checked = false;
		}

		if (MSD >= 8)
		{
			checkBox9->Checked = true;
			MSD -= 8;
		}
		else
		{
			checkBox9->Checked = false;
		}
		if (MSD >= 4)
		{
			checkBox7->Checked = true;
			MSD -= 4;
		}
		else
		{
			checkBox7->Checked = false;
		}
		if (MSD >= 2)
		{
			checkBox4->Checked = true;
			MSD -= 2;
		}
		else
		{
			checkBox4->Checked = false;
		}
		if (MSD >= 1)
		{
			checkBox5->Checked = true;
			MSD -= 1;
		}
		else
		{
			checkBox5->Checked = false;
		}
	}

	else if (index == 1)
	{
		if (MSD >= 8)
		{
			checkBox13->Checked = true;
			MSD -= 8;
		}
		else
		{
			checkBox13->Checked = false;
		}
		if (MSD >= 4)
		{
			checkBox12->Checked = true;
			MSD -= 4;
		}
		else
		{
			checkBox12->Checked = false;
		}
		if (MSD >= 2)
		{
			checkBox11->Checked = true;
			MSD -= 2;
		}
		else
		{
			checkBox11->Checked = false;
		}

		if (LSD >= 8)
		{
			comboALU = 2;
			LSD -= 8;
		}
		if (LSD >= 4)
		{
			comboALU += 1;
			LSD -= 4;
		}
		if (MSD >= 1)
		{
			comboALU += 4;
		}
		comboBoxALU->SelectedIndex = comboALU;
		if (LSD >= 2)
		{
			checkBox10->Checked = true;
			LSD -= 2;
		}
		else
		{
			checkBox10->Checked = false;
		}
		if (LSD >= 1)
		{
			checkBox8->Checked = true;
		}
		else
		{
			checkBox8->Checked = false;
		}
	}
	else if (index == 2)
	{
		if (LSD >= 8)
		{
			combo1 += 2;
			LSD -= 8;
		}
		if (LSD >= 4)
		{
			combo1 += 1;
			LSD -= 4;
		}
		if (LSD >= 2)
		{
			checkBox14->Checked = true;
			LSD -= 2;
		}
		else
		{
			checkBox14->Checked = false;
		}
		if (LSD >= 1)
		{
			checkBox16->Checked = true;
		}
		else
		{
			checkBox16->Checked = false;
		}

		if (MSD >= 8)
		{
			combo3 += 1;
			MSD -= 8;
		}
		if (MSD >= 4)
		{
			combo2 += 2;
			MSD -= 4;
		}
		if (MSD >= 2)
		{
			combo2 += 1;
			MSD -= 2;
		}
		if (MSD >= 1)
		{
			checkBox15->Checked = true;
		}
		else
		{
			checkBox15->Checked = false;
		}
	}
	else if (index == 3)
		{
			if (LSD >= 8)
			{
				combo5 = 1;
				LSD -= 8;
			}
			if (LSD >= 4)
			{
				combo4 += 2;
				LSD -= 4;
			}
			if (LSD >= 2)
			{
				combo4 += 1;
				LSD -= 2;
			}
			if (LSD >= 1)
			{
				combo3 += 2;
			}
			if (MSD >= 8)
			{
				checkBox17->Checked = true;
				MSD -= 8;
			}
			else
				checkBox17->Checked = false;
			if (MSD >= 4)
			{
				combo6 = 2;
				MSD -= 4;
			}
			if (MSD >= 2)
			{
				combo6 = 1;
				MSD -= 2;
			}
			if (MSD >= 1)
			{
				combo5 = 2;
			}
			comboBox1->SelectedIndex = combo1;
			comboBox2->SelectedIndex = combo2;
			comboBox3->SelectedIndex = combo3;
			comboBox4->SelectedIndex = combo4;
			comboBox5->SelectedIndex = combo5;
			comboBox6->SelectedIndex = combo6;
	}

	
}
private: System::Void uProgramming_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = listBox1->SelectedIndex;

	if (index == -1)
		return;

	listBox1->Items->RemoveAt(index);
	listBox1->Items->Insert(index, textBox2->Text);
}
private: System::Void textBox3_Hex() {
	int dec[8];
	dec[0] = { pcBus + pcLoad + pcCnt + marEn };
	dec[1] = { ramLoad + mdIn + busMdr + mdrOut };
	dec[2] = { mdrBus + irEn + aluOp0 };
	dec[3] = { aluOp1 + loadFlag + carryIn + aluOut };
	dec[4] = { loadShift + busOut + busOutSel };
	dec[5] = { regIn + regInSel + sourceA1 };
	dec[6] = { sourceA2 + sourceB + inSel0 };
	dec[7] = { inSel1 + outSel + halt };
	dec[4] = { loadShift + busOut + busOutSel };
	dec[5] = { regIn + regInSel + sourceA1 };
	dec[6] = { sourceA2 + sourceB + inSel0 };
	dec[7] = { inSel1 + outSel + halt };

	if (listBox1->SelectedIndex == -1)
		textBox3->Text = "";
	else
		textBox3->Text = dec2hex(dec[7]) + dec2hex(dec[6]) + " " + dec2hex(dec[5]) + dec2hex(dec[4]) + " " + dec2hex(dec[3]) + dec2hex(dec[2]) + " " + dec2hex(dec[1]) + dec2hex(dec[0]);

}
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	hexcont0 = gcnew array <String^>(1000000);
	hexcont1 = gcnew array <String^>(1000000);
	hexcont2 = gcnew array <String^>(1000000);
	hexcont3 = gcnew array <String^>(1000000);
	listBox1->Items->Clear();

}
private: System::Void singleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->SelectionMode = SelectionMode::One;
}
private: System::Void multiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->SelectionMode = SelectionMode::MultiExtended;
}
};
}
