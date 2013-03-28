#pragma once

namespace Base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabcontrol;
	private: System::Windows::Forms::TabPage^  HomeTab;









	protected: 

	private: System::Windows::Forms::TabPage^  TimetablesTab;
	private: System::Windows::Forms::TabPage^  LecturersTab;










	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;








	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TabPage^  CoursesTab;
	private: System::Windows::Forms::TabPage^  BuildingsTab;
	private: System::Windows::Forms::TabPage^  HelpTab;
	private: System::Windows::Forms::TabPage^  AboutTab;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::ComponentModel::IContainer^  components;




















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->HomeTab = (gcnew System::Windows::Forms::TabPage());
			this->TimetablesTab = (gcnew System::Windows::Forms::TabPage());
			this->LecturersTab = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CoursesTab = (gcnew System::Windows::Forms::TabPage());
			this->BuildingsTab = (gcnew System::Windows::Forms::TabPage());
			this->HelpTab = (gcnew System::Windows::Forms::TabPage());
			this->AboutTab = (gcnew System::Windows::Forms::TabPage());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tabcontrol->SuspendLayout();
			this->LecturersTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabcontrol
			// 
			this->tabcontrol->AccessibleName = L"";
			this->tabcontrol->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabcontrol->Controls->Add(this->tabPage1);
			this->tabcontrol->Controls->Add(this->HomeTab);
			this->tabcontrol->Controls->Add(this->TimetablesTab);
			this->tabcontrol->Controls->Add(this->LecturersTab);
			this->tabcontrol->Controls->Add(this->CoursesTab);
			this->tabcontrol->Controls->Add(this->BuildingsTab);
			this->tabcontrol->Controls->Add(this->HelpTab);
			this->tabcontrol->Controls->Add(this->AboutTab);
			this->tabcontrol->ImageList = this->imageList1;
			this->tabcontrol->Location = System::Drawing::Point(0, 0);
			this->tabcontrol->Name = L"tabcontrol";
			this->tabcontrol->SelectedIndex = 0;
			this->tabcontrol->Size = System::Drawing::Size(920, 635);
			this->tabcontrol->TabIndex = 0;

			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->AutoScrollMargin = System::Drawing::Size(50, 50);
			this->tabPage1->Location = System::Drawing::Point(4, 39);
			this->tabPage1->Margin = System::Windows::Forms::Padding(30, 3, 3, 3);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(50);
			this->tabPage1->Size = System::Drawing::Size(912, 592);
			this->tabPage1->TabIndex = 8;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// HomeTab
			// 
			this->HomeTab->AutoScroll = true;
			this->HomeTab->BackColor = System::Drawing::Color::Transparent;
			this->HomeTab->ForeColor = System::Drawing::Color::Black;
			this->HomeTab->ImageIndex = 0;
			this->HomeTab->Location = System::Drawing::Point(4, 39);
			this->HomeTab->Name = L"HomeTab";
			this->HomeTab->Padding = System::Windows::Forms::Padding(3);
			this->HomeTab->Size = System::Drawing::Size(912, 592);
			this->HomeTab->TabIndex = 0;
			this->HomeTab->Text = L"Home";
			this->HomeTab->UseVisualStyleBackColor = true;
			// 
			// TimetablesTab
			// 
			this->TimetablesTab->ImageKey = L"calendar.png";
			this->TimetablesTab->Location = System::Drawing::Point(4, 39);
			this->TimetablesTab->Name = L"TimetablesTab";
			this->TimetablesTab->Padding = System::Windows::Forms::Padding(3);
			this->TimetablesTab->Size = System::Drawing::Size(912, 592);
			this->TimetablesTab->TabIndex = 1;
			this->TimetablesTab->Text = L"Timetables";
			this->TimetablesTab->UseVisualStyleBackColor = true;
			// 
			// LecturersTab
			// 
			this->LecturersTab->Controls->Add(this->splitContainer1);
			this->LecturersTab->ImageKey = L"group.png";
			this->LecturersTab->Location = System::Drawing::Point(4, 39);
			this->LecturersTab->Name = L"LecturersTab";
			this->LecturersTab->Padding = System::Windows::Forms::Padding(3);
			this->LecturersTab->Size = System::Drawing::Size(912, 592);
			this->LecturersTab->TabIndex = 2;
			this->LecturersTab->Text = L"Lecture";
			this->LecturersTab->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->panel2);
			this->splitContainer1->Panel2->Controls->Add(this->panel1);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Size = System::Drawing::Size(906, 586);
			this->splitContainer1->SplitterDistance = 180;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->textBox1);
			this->splitContainer2->Panel1->Controls->Add(this->button1);
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->listBox1);
			this->splitContainer2->Size = System::Drawing::Size(180, 586);
			this->splitContainer2->SplitterDistance = 64;
			this->splitContainer2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add New Lecturer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search";
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(180, 518);
			this->listBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(722, 68);
			this->panel2->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(481, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Initials";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(537, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 20);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(141, 38);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(219, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"E-mail";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(522, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(141, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(219, 20);
			this->textBox2->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Name";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 54);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(722, 532);
			this->panel1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(309, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(68, 52);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 9;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				11.11111F)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(97, 137);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(572, 312);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(174, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 22);
			this->button4->TabIndex = 3;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(141, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(27, 21);
			this->button3->TabIndex = 2;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(79, 34);
			this->textBox5->Name = L"textBox5";
			this->textBox5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox5->Size = System::Drawing::Size(39, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"label6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(412, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 2;
			// 
			// CoursesTab
			// 
			this->CoursesTab->ImageKey = L"bookshelf.png";
			this->CoursesTab->Location = System::Drawing::Point(4, 39);
			this->CoursesTab->Name = L"CoursesTab";
			this->CoursesTab->Padding = System::Windows::Forms::Padding(3);
			this->CoursesTab->Size = System::Drawing::Size(912, 592);
			this->CoursesTab->TabIndex = 3;
			this->CoursesTab->Text = L"Course";
			this->CoursesTab->UseVisualStyleBackColor = true;
			// 
			// BuildingsTab
			// 
			this->BuildingsTab->ImageKey = L"building.png";
			this->BuildingsTab->Location = System::Drawing::Point(4, 39);
			this->BuildingsTab->Name = L"BuildingsTab";
			this->BuildingsTab->Size = System::Drawing::Size(912, 592);
			this->BuildingsTab->TabIndex = 4;
			this->BuildingsTab->Text = L"Buildings";
			this->BuildingsTab->UseVisualStyleBackColor = true;
			// 
			// HelpTab
			// 
			this->HelpTab->ImageIndex = 5;
			this->HelpTab->Location = System::Drawing::Point(4, 39);
			this->HelpTab->Name = L"HelpTab";
			this->HelpTab->Size = System::Drawing::Size(912, 592);
			this->HelpTab->TabIndex = 5;
			this->HelpTab->Text = L"Help";
			this->HelpTab->UseVisualStyleBackColor = true;
			// 
			// AboutTab
			// 
			this->AboutTab->ImageKey = L"information.png";
			this->AboutTab->Location = System::Drawing::Point(4, 39);
			this->AboutTab->Name = L"AboutTab";
			this->AboutTab->Size = System::Drawing::Size(912, 592);
			this->AboutTab->TabIndex = 7;
			this->AboutTab->Text = L"About";
			this->AboutTab->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"house.png");
			this->imageList1->Images->SetKeyName(1, L"calendar.png");
			this->imageList1->Images->SetKeyName(2, L"bookshelf.png");
			this->imageList1->Images->SetKeyName(3, L"building.png");
			this->imageList1->Images->SetKeyName(4, L"help.png");
			this->imageList1->Images->SetKeyName(5, L"information.png");
			this->imageList1->Images->SetKeyName(6, L"group.png");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(920, 635);
			this->Controls->Add(this->tabcontrol);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Timetable Package";
			this->tabcontrol->ResumeLayout(false);
			this->LecturersTab->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}

