#pragma once
#include "stdAfx.h"
#include <Windows.h>
#include <string>

void findPorts(void);
void verify(void);
void setup(void);
void log(void);
 

//#include "Dyno.cpp"

namespace Dyno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			findPorts();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button2;

	public: System::Windows::Forms::TextBox^  textBox1;
	private: 


	public: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	public: 
	private: System::Windows::Forms::Label^  label1;


	private: System::IO::Ports::SerialPort^  serialPort1;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  Tuning;
	private: System::Windows::Forms::RadioButton^  radioButton2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->Tuning = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(1097, 513);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::Red;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1, 536);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1171, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Connection Status ------------------ Disconnected";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->WordWrap = false;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(527, 12);
			this->textBox2->MaximumSize = System::Drawing::Size(634, 234);
			this->textBox2->MaxLength = 6;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(634, 234);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"BHP";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->WordWrap = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(794, 311);
			this->textBox3->MaximumSize = System::Drawing::Size(100, 200);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(78, 31);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"RPM";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->WordWrap = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(800, 280);
			this->label1->Margin = System::Windows::Forms::Padding(3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"RPM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 2000;
			this->serialPort1->WriteTimeout = 500;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1, 64);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 23;
			this->button5->Text = L"COM Scan";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(80, 64);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 30);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Open Port";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SeaShell;
			this->label2->Location = System::Drawing::Point(83, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 16);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Baud Rate :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SeaShell;
			this->label3->Location = System::Drawing::Point(3, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"COM Ports :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"115200", L"", L""});
			this->comboBox2->Location = System::Drawing::Point(80, 24);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(75, 21);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SeaShell;
			this->label4->Location = System::Drawing::Point(325, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Max Power";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SeaShell;
			this->label5->Location = System::Drawing::Point(245, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 16);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Grar Ratio:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SeaShell;
			this->label6->Location = System::Drawing::Point(161, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 16);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Max Speed";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 25);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(75, 20);
			this->textBox4->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(243, 24);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(75, 20);
			this->textBox5->TabIndex = 31;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(324, 24);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(75, 20);
			this->textBox6->TabIndex = 32;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::SeaShell;
			this->radioButton1->Location = System::Drawing::Point(417, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 24);
			this->radioButton1->TabIndex = 33;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Power Run";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// Tuning
			// 
			this->Tuning->AutoSize = true;
			this->Tuning->BackColor = System::Drawing::Color::Transparent;
			this->Tuning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tuning->ForeColor = System::Drawing::Color::SeaShell;
			this->Tuning->Location = System::Drawing::Point(417, 64);
			this->Tuning->Name = L"Tuning";
			this->Tuning->Size = System::Drawing::Size(107, 24);
			this->Tuning->TabIndex = 34;
			this->Tuning->TabStop = true;
			this->Tuning->Text = L"Tune Mode";
			this->Tuning->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::SeaShell;
			this->radioButton2->Location = System::Drawing::Point(417, 107);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 24);
			this->radioButton2->TabIndex = 35;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Test Mode";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1173, 562);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->Tuning);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {				
			
			 
			 }


	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			Application :: Exit();
		 }

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->comboBox1->Items->Clear();
			 this->textBox1->BackColor = System::Drawing::Color::Red;
			 findPorts();
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
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
								 this->textBox1->BackColor = System::Drawing::Color::Red;
							 }

							 this->textBox1->BackColor = System::Drawing::Color::SpringGreen;
							 this->textBox1->Text="Port is Open";
							Sleep(1);
							 this->button2->Enabled = true;
							 
							
//////////////////// Serial code after here ////////////////////////////////////////////////// 
							 
							 verify();
							 
							 Sleep(2000);
							 setup();
							// Sleep(1);
							log();

						 }
						 else 
						 {
							 this->textBox1->Text="Port isn't opening";
							 this->textBox1->BackColor = System::Drawing::Color::Red;
						 }
					 }
					 catch(UnauthorizedAccessException^)
					 {
						  this->textBox1->Text="UnauthorizedAccess";
					 }
				 }
		 }
			 //Open Port Button

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				
			}
		 

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
		 ///////Functions
private: void findPorts(void)
			 {
				 // get port names
				 array<Object^>^ objectArray = SerialPort::GetPortNames();
				 // add string array to combobox
				 this->comboBox1->Items->AddRange( objectArray );
			 }
		 
private: void verify(void)
		 {
			 String^ str ;
			 this->serialPort1-> WriteLine("ff");
			 this->textBox1->Text="Written ff";
			 //this->serialPort1->DiscardInBuffer();
			 this->serialPort1->DiscardOutBuffer();
			 //str = this->serialPort1-> ReadLine();
			 this->textBox1->Text= "str = " + str;
		}
		 

		 // We assume Arduino has received "ff" and send it the setup string. Arduino receives the string and returns it to us
		 // where we will compare it with what we sent. If it replies with "ff", we know it has not received our "ff". We resend "ff"
		 // and then setup string until the received string matches the sent. We the send "ss" to Arduino to let it know it is ok to
		 // start logging.
private: void setup(void)
		 {
			 this->textBox1->Text="Made it to setup function";
			 String^ setup = "7200";
			 
			  this->serialPort1-> WriteLine(setup);
			/* rec = this->serialPort1-> ReadLine();*/
			 /*while(rec != setup)
			 {
				 
				 if(rec == "ff")
				 {
					 this->serialPort1-> WriteLine("ff");
					 Sleep(1);

				 }
				 this->textBox1->Text="setup not made";
				 
				 rec = "";
				 rec = this->serialPort1-> ReadLine();
				 Sleep(1);

			 }*/
			 this->textBox1->Text="setup  made";
			 //this->serialPort1-> WriteLine("ss");


		 }
private: void log(void)
		 {
			  this->textBox1->Text="Made it to log function";
			  String^ log;
			 for(;;)
			 {
			 
			
			 log = this->serialPort1-> ReadLine();
			 this->textBox3->Text = log;
			 }

		 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
