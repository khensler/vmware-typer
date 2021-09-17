#pragma once

namespace vmwaretyper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"VMWARE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(132, 59);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->TopMost = true;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Switch To Previous App
		SendKeys::SendWait("%{TAB}");
		Thread::Sleep(500);
		//Random 0 or 1 for upper/lower
		Random^ rand = gcnew Random();
		if (rand->Next(0, 2) == 0) {
			SendKeys::Send("V");
		}
		else {
			SendKeys::Send("v");
		}
		if (rand->Next(0, 2) == 0) {
			SendKeys::Send("M");
		}
		else {
			SendKeys::Send("m");
		}		if (rand->Next(0, 2) == 0) {
			SendKeys::Send("W");
		}
		else {
			SendKeys::Send("w");
		}		if (rand->Next(0, 2) == 0) {
			SendKeys::Send("A");
		}
		else {
			SendKeys::Send("a");
		}		if (rand->Next(0, 2) == 0) {
			SendKeys::Send("R");
		}
		else {
			SendKeys::Send("r");
		}		if (rand->Next(0, 2) == 0) {
			SendKeys::Send("E");
		}
		else {
			SendKeys::Send("e");
		}
		
	}
	};
}
