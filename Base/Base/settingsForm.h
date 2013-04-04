#pragma once

namespace Base {
	


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class settingsForm : public System::Windows::Forms::Form
	{
	public:
		settingsForm(void)
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
		~settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  cancelButton;
	protected: 
	private: System::Windows::Forms::Button^  saveButton;

	private: System::Windows::Forms::TabControl^  settingsControlTab;

	private: System::Windows::Forms::TabPage^  institutionSettings;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  addressLabel1;
	private: System::Windows::Forms::Label^  addressLabel2;
	private: System::Windows::Forms::Label^  addressLabel3;



	private: System::Windows::Forms::Label^  InstitutionNameLabel;
	private: System::Windows::Forms::TextBox^  telephoneTextbox;
	private: System::Windows::Forms::TextBox^  websiteTextbox;
	private: System::Windows::Forms::TextBox^  addressLine3TextBox;
	private: System::Windows::Forms::TextBox^  addressLine2TextBox;
	private: System::Windows::Forms::TextBox^  addressLine1Textbox;
	private: System::Windows::Forms::TextBox^  institutionNameTextbox;
	private: System::Windows::Forms::Label^  websiteLabel;
	private: System::Windows::Forms::Label^  telephoneLabel;
	private: System::Windows::Forms::Button^  logoBrowseButton;
	private: System::Windows::Forms::PictureBox^  settingsLogoPictureBox;
	private: System::Windows::Forms::Label^  institutionLogoLabel;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


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
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->settingsControlTab = (gcnew System::Windows::Forms::TabControl());
			this->institutionSettings = (gcnew System::Windows::Forms::TabPage());
			this->logoBrowseButton = (gcnew System::Windows::Forms::Button());
			this->settingsLogoPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->institutionLogoLabel = (gcnew System::Windows::Forms::Label());
			this->telephoneTextbox = (gcnew System::Windows::Forms::TextBox());
			this->websiteTextbox = (gcnew System::Windows::Forms::TextBox());
			this->addressLine3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->addressLine2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->addressLine1Textbox = (gcnew System::Windows::Forms::TextBox());
			this->institutionNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->websiteLabel = (gcnew System::Windows::Forms::Label());
			this->telephoneLabel = (gcnew System::Windows::Forms::Label());
			this->addressLabel1 = (gcnew System::Windows::Forms::Label());
			this->addressLabel2 = (gcnew System::Windows::Forms::Label());
			this->addressLabel3 = (gcnew System::Windows::Forms::Label());
			this->InstitutionNameLabel = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->settingsControlTab->SuspendLayout();
			this->institutionSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->settingsLogoPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// cancelButton
			// 
			this->cancelButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelButton->Location = System::Drawing::Point(631, 384);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 0;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			// 
			// saveButton
			// 
			this->saveButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->saveButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->saveButton->Location = System::Drawing::Point(550, 384);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 1;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &settingsForm::saveButton_Click);
			// 
			// settingsControlTab
			// 
			this->settingsControlTab->Controls->Add(this->institutionSettings);
			this->settingsControlTab->Controls->Add(this->tabPage2);
			this->settingsControlTab->Location = System::Drawing::Point(12, 12);
			this->settingsControlTab->Name = L"settingsControlTab";
			this->settingsControlTab->SelectedIndex = 0;
			this->settingsControlTab->Size = System::Drawing::Size(694, 366);
			this->settingsControlTab->TabIndex = 2;
			// 
			// institutionSettings
			// 
			this->institutionSettings->Controls->Add(this->logoBrowseButton);
			this->institutionSettings->Controls->Add(this->settingsLogoPictureBox);
			this->institutionSettings->Controls->Add(this->institutionLogoLabel);
			this->institutionSettings->Controls->Add(this->telephoneTextbox);
			this->institutionSettings->Controls->Add(this->websiteTextbox);
			this->institutionSettings->Controls->Add(this->addressLine3TextBox);
			this->institutionSettings->Controls->Add(this->addressLine2TextBox);
			this->institutionSettings->Controls->Add(this->addressLine1Textbox);
			this->institutionSettings->Controls->Add(this->institutionNameTextbox);
			this->institutionSettings->Controls->Add(this->websiteLabel);
			this->institutionSettings->Controls->Add(this->telephoneLabel);
			this->institutionSettings->Controls->Add(this->addressLabel1);
			this->institutionSettings->Controls->Add(this->addressLabel2);
			this->institutionSettings->Controls->Add(this->addressLabel3);
			this->institutionSettings->Controls->Add(this->InstitutionNameLabel);
			this->institutionSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->institutionSettings->Location = System::Drawing::Point(4, 22);
			this->institutionSettings->Name = L"institutionSettings";
			this->institutionSettings->Padding = System::Windows::Forms::Padding(3);
			this->institutionSettings->Size = System::Drawing::Size(686, 340);
			this->institutionSettings->TabIndex = 0;
			this->institutionSettings->Text = L"Institution Details";
			this->institutionSettings->UseVisualStyleBackColor = true;
			// 
			// logoBrowseButton
			// 
			this->logoBrowseButton->Location = System::Drawing::Point(510, 274);
			this->logoBrowseButton->Name = L"logoBrowseButton";
			this->logoBrowseButton->Size = System::Drawing::Size(75, 23);
			this->logoBrowseButton->TabIndex = 14;
			this->logoBrowseButton->Text = L"Browse...";
			this->logoBrowseButton->UseVisualStyleBackColor = true;
			this->logoBrowseButton->Click += gcnew System::EventHandler(this, &settingsForm::logoBrowseButton_Click);
			// 
			// settingsLogoPictureBox
			// 
			this->settingsLogoPictureBox->Location = System::Drawing::Point(295, 219);
			this->settingsLogoPictureBox->Name = L"settingsLogoPictureBox";
			this->settingsLogoPictureBox->Size = System::Drawing::Size(209, 78);
			this->settingsLogoPictureBox->TabIndex = 13;
			this->settingsLogoPictureBox->TabStop = false;
			// 
			// institutionLogoLabel
			// 
			this->institutionLogoLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->institutionLogoLabel->AutoSize = true;
			this->institutionLogoLabel->Location = System::Drawing::Point(155, 219);
			this->institutionLogoLabel->Name = L"institutionLogoLabel";
			this->institutionLogoLabel->Size = System::Drawing::Size(108, 17);
			this->institutionLogoLabel->TabIndex = 12;
			this->institutionLogoLabel->Text = L"Institution Logo:";
			// 
			// telephoneTextbox
			// 
			this->telephoneTextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->telephoneTextbox->Location = System::Drawing::Point(295, 178);
			this->telephoneTextbox->Name = L"telephoneTextbox";
			this->telephoneTextbox->Size = System::Drawing::Size(209, 23);
			this->telephoneTextbox->TabIndex = 11;
			// 
			// websiteTextbox
			// 
			this->websiteTextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->websiteTextbox->Location = System::Drawing::Point(295, 149);
			this->websiteTextbox->Name = L"websiteTextbox";
			this->websiteTextbox->Size = System::Drawing::Size(209, 23);
			this->websiteTextbox->TabIndex = 10;
			// 
			// addressLine3TextBox
			// 
			this->addressLine3TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->addressLine3TextBox->Location = System::Drawing::Point(295, 120);
			this->addressLine3TextBox->Name = L"addressLine3TextBox";
			this->addressLine3TextBox->Size = System::Drawing::Size(209, 23);
			this->addressLine3TextBox->TabIndex = 9;
			// 
			// addressLine2TextBox
			// 
			this->addressLine2TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->addressLine2TextBox->Location = System::Drawing::Point(295, 91);
			this->addressLine2TextBox->Name = L"addressLine2TextBox";
			this->addressLine2TextBox->Size = System::Drawing::Size(209, 23);
			this->addressLine2TextBox->TabIndex = 8;
			// 
			// addressLine1Textbox
			// 
			this->addressLine1Textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->addressLine1Textbox->Location = System::Drawing::Point(295, 62);
			this->addressLine1Textbox->Name = L"addressLine1Textbox";
			this->addressLine1Textbox->Size = System::Drawing::Size(209, 23);
			this->addressLine1Textbox->TabIndex = 7;
			// 
			// institutionNameTextbox
			// 
			this->institutionNameTextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->institutionNameTextbox->Location = System::Drawing::Point(295, 33);
			this->institutionNameTextbox->Name = L"institutionNameTextbox";
			this->institutionNameTextbox->Size = System::Drawing::Size(209, 23);
			this->institutionNameTextbox->TabIndex = 6;
			// 
			// websiteLabel
			// 
			this->websiteLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->websiteLabel->AutoSize = true;
			this->websiteLabel->Location = System::Drawing::Point(155, 155);
			this->websiteLabel->Name = L"websiteLabel";
			this->websiteLabel->Size = System::Drawing::Size(63, 17);
			this->websiteLabel->TabIndex = 5;
			this->websiteLabel->Text = L"Website:";
			// 
			// telephoneLabel
			// 
			this->telephoneLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->telephoneLabel->AutoSize = true;
			this->telephoneLabel->Location = System::Drawing::Point(155, 184);
			this->telephoneLabel->Name = L"telephoneLabel";
			this->telephoneLabel->Size = System::Drawing::Size(134, 17);
			this->telephoneLabel->TabIndex = 4;
			this->telephoneLabel->Text = L"Telephone Number:";
			// 
			// addressLabel1
			// 
			this->addressLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->addressLabel1->AutoSize = true;
			this->addressLabel1->Location = System::Drawing::Point(155, 68);
			this->addressLabel1->Name = L"addressLabel1";
			this->addressLabel1->Size = System::Drawing::Size(107, 17);
			this->addressLabel1->TabIndex = 3;
			this->addressLabel1->Text = L"Address Line 1:";
			// 
			// addressLabel2
			// 
			this->addressLabel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->addressLabel2->AutoSize = true;
			this->addressLabel2->Location = System::Drawing::Point(155, 97);
			this->addressLabel2->Name = L"addressLabel2";
			this->addressLabel2->Size = System::Drawing::Size(107, 17);
			this->addressLabel2->TabIndex = 2;
			this->addressLabel2->Text = L"Address Line 2:";
			// 
			// addressLabel3
			// 
			this->addressLabel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->addressLabel3->AutoSize = true;
			this->addressLabel3->Location = System::Drawing::Point(155, 126);
			this->addressLabel3->Name = L"addressLabel3";
			this->addressLabel3->Size = System::Drawing::Size(107, 17);
			this->addressLabel3->TabIndex = 1;
			this->addressLabel3->Text = L"Address Line 3:";
			this->addressLabel3->Click += gcnew System::EventHandler(this, &settingsForm::label2_Click);
			// 
			// InstitutionNameLabel
			// 
			this->InstitutionNameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->InstitutionNameLabel->AutoSize = true;
			this->InstitutionNameLabel->Location = System::Drawing::Point(155, 39);
			this->InstitutionNameLabel->Name = L"InstitutionNameLabel";
			this->InstitutionNameLabel->Size = System::Drawing::Size(129, 17);
			this->InstitutionNameLabel->TabIndex = 0;
			this->InstitutionNameLabel->Text = L"Name of Institution:";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(686, 340);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cancelButton;
			this->ClientSize = System::Drawing::Size(718, 419);
			this->Controls->Add(this->settingsControlTab);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->cancelButton);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"settingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Settings";
			this->settingsControlTab->ResumeLayout(false);
			this->institutionSettings->ResumeLayout(false);
			this->institutionSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->settingsLogoPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void logoBrowseButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  // Displays an OpenFileDialog so the user can select a Cursor.
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "PNG file |*.png";
		openFileDialog1->Title = "Select a PNG Picture";

		// Show the Dialog.
		// If the user clicked OK in the dialog and
		// a .CUR file was selected, open it.
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
				// Assign the cursor in the Stream to
				// the Form's Cursor property.
		//	settingsLogoPictureBox->Image = gcnew
			//	System::Windows::Forms::PictureBox(
				//openFileDialog1->OpenFile());

			settingsLogoPictureBox->ImageLocation = openFileDialog1->FileName;

		}
			
		 }
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //btnSave Purpose: Open memberFile.dat and put in some data from text boxes

			//save record to file
			StreamWriter^ pwriter = gcnew StreamWriter("InstitutionSettings.txt");

			pwriter->WriteLine(institutionNameTextbox->Text);
			pwriter->WriteLine(addressLine1Textbox->Text);
			pwriter->WriteLine(addressLine2TextBox->Text);
			pwriter->WriteLine(addressLine3TextBox->Text);
			pwriter->WriteLine(websiteTextbox->Text);
			pwriter->WriteLine(telephoneTextbox->Text);
			pwriter->Close();

			//lblError->Text = "Record Saved.";
		}
};
}
