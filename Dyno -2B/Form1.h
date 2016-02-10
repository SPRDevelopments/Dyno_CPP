#pragma once
#include "stdAfx.h"
#include "Vehicle.h"
#include <time.h>
#include "Form2.h"

//void Recieve()
//{
//	while(serialPort1->IsOpen)
//	{
//		f2->textBox2->Text=this->serialPort1->ReadLine();
//		rest(10);
//
//
//
//
//	}
//
//}

namespace Dyno {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			findPorts();
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

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	//private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(76, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 2000;
			this->serialPort1->WriteTimeout = 500;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"9600", L"19200", L"28800", L"57600", L"115200", 
				L"", L"", L""});
			this->comboBox2->Location = System::Drawing::Point(76, 62);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"COM Ports";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Baud Rate";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(176, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Open Port";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Enabled = false;
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(-1, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Receive";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(76, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Read";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(138, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Port Status";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::Red;
			this->progressBar1->ForeColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(-1, 238);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(351, 23);
			this->progressBar1->TabIndex = 13;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(246, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"COM Scan";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(176, 180);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 262);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
			 // find available ports
	private: void findPorts(void)
			 {
				 // get port names
				 array<Object^>^ objectArray = SerialPort::GetPortNames();
				 // add string array to combobox
				 this->comboBox1->Items->AddRange( objectArray );
			 }

			

 //Open Port Button

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->textBox1->Text=String::Empty;

				 //Check port settings have been selectd. If not, Tell us
				 if(this->comboBox1->Text==String::Empty)
				 {
					 this->textBox1->Text="Please selct Port settings";
				 }
				 else 
				 {
					 try
					 {
						 //Make sure port isn't open
						 if(!this->serialPort1->IsOpen){
							 this->serialPort1->PortName= this->comboBox1->Text;

							 this->serialPort1->BaudRate= Int32::Parse(this->comboBox2->Text);
							 //this->textBox1->Text=Int32::Parse(this->comboBox2->Text);
							 //this->textBox2->Text="Enter Message Here";
							 //Open Serial Port
							 this->serialPort1->Open();
							 if(!this->serialPort1->IsOpen){
								 this->textBox1->Text="Port is not opening";
								 this->progressBar1->Value=0;
							 }

							 this->progressBar1->Value=100;
							 this->textBox1->Text="Port is Open";
							 this->button2->Enabled = true;
							 
							 this->button4->Enabled = true;
						 }
						 else 
						 {
							 this->textBox1->Text="Port isn't opening";
							 this->progressBar1->Value=0;
						 }
					 }
					 catch(UnauthorizedAccessException^)
					 {
						  this->textBox1->Text="UnauthorizedAccess";
					 }
				 }
			}
 //Close Port Button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Close Serial Port
			  this->serialPort1->Close();
			  this->textBox1->Text="Port is Closed";
			  //update progress bar
			   this->progressBar1->Value=0;
			   //Enable read button
			    this->button4->Enabled = false;
				this->button1->Enabled = true;
				this->button2->Enabled = false;
				//Enable Init Button
				 
		 
		 }
		 

//Send Button


		 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }

// Read Button
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Check if port is ready for reading
			 if(this->serialPort1->IsOpen){
				 this->textBox1->Text=String::Empty;

				 //This will read manually
				 try{
					  this->textBox1->Text=this->serialPort1->ReadLine();
				 }
				 catch(TimeoutException^){
					 this->textBox1->Text=" Timout Exception";
					 this->textBox1->Text="Port Not Open Timed out";
				 }
				 // Dissable the open Button
				 // The asynhronous Operation is done
				 this->button1->Enabled = false;
				 //this->button4->Enabled = false;
				 
			 }
			 else
				 //Give Error Warning
				 this->textBox1->Text="Port Not Open";

		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

// Reset Button
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //array<Object^>^ objectArray();

			  this->comboBox1->Items->Clear();
			  this->progressBar1->Value=0;

			 findPorts();
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


// Close Form Button

private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->button1->Enabled = true;
			//Form2^ f2 = gcnew Form2();	  
			//if(this->progressBar1->Value== int(100))
			//	 {
			//		 f2->textBox1->Text="Connection Status ---------- Connected";
			//	     f2->textBox1->BackColor = System::Drawing::Color::Lime;
			//	 }

			// f2->ShowDialog();
			this->Close();
			 /*Vehicle^ f3 = gcnew Vehicle();
				 f3-> Show();*/
			//Application :: Exit();
			// while(serialPort1->IsOpen)
			//		{
			//		f2->textBox2->Text=this->serialPort1->ReadLine();
			//		 f2->textBox1->Text="Connection Status ---------- Connected";
			//	     f2->textBox1->BackColor = System::Drawing::Color::Lime;
			//		//Sleep(1000)
			//		}
			//
			 
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
