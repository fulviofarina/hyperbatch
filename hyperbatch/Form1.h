#pragma once

#include <iostream>
#include <fstream>
#include <string>







namespace hyperbatch {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::OpenFileDialog^  openbatchdialog;
	private: System::Windows::Forms::Button^  browselog;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  convert;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Diagnostics::Process^  process1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  printme;




	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openbatchdialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->browselog = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->convert = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->process1 = (gcnew System::Diagnostics::Process());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->printme = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// openbatchdialog
			// 
			this->openbatchdialog->FileName = L"*.log";
			this->openbatchdialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openbatchdialog_FileOk);
			// 
			// browselog
			// 
			this->browselog->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->browselog->Location = System::Drawing::Point(10, 12);
			this->browselog->Name = L"browselog";
			this->browselog->Size = System::Drawing::Size(168, 23);
			this->browselog->TabIndex = 0;
			this->browselog->Text = L"Browse the Batch Log";
			this->browselog->UseVisualStyleBackColor = true;
			this->browselog->Click += gcnew System::EventHandler(this, &Form1::browselog_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(187, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(676, 20);
			this->textBox1->TabIndex = 1;
			// 
			// convert
			// 
			this->convert->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->convert->Location = System::Drawing::Point(10, 41);
			this->convert->Name = L"convert";
			this->convert->Size = System::Drawing::Size(168, 23);
			this->convert->TabIndex = 2;
			this->convert->Text = L"Summarize it!";
			this->convert->UseVisualStyleBackColor = true;
			this->convert->Click += gcnew System::EventHandler(this, &Form1::convert_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(12, 76);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(855, 343);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// process1
			// 
			this->process1->StartInfo->Domain = L"";
			this->process1->StartInfo->LoadUserProfile = false;
			this->process1->StartInfo->Password = nullptr;
			this->process1->StartInfo->StandardErrorEncoding = nullptr;
			this->process1->StartInfo->StandardOutputEncoding = nullptr;
			this->process1->StartInfo->UserName = L"";
			this->process1->SynchronizingObject = this;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(186, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(677, 21);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"A copy of the results will be stored in this file... Just in case!";
			// 
			// printme
			// 
			this->printme->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->printme->Location = System::Drawing::Point(375, 425);
			this->printme->Name = L"printme";
			this->printme->Size = System::Drawing::Size(125, 23);
			this->printme->TabIndex = 5;
			this->printme->Text = L"OPEN";
			this->printme->UseVisualStyleBackColor = true;
			this->printme->Click += gcnew System::EventHandler(this, &Form1::printme_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 461);
			this->Controls->Add(this->printme);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->convert);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->browselog);
			this->Name = L"Form1";
			this->Text = L"HYPERBES v1.1                             author: Fulvio Farina    /   email: ful" 
				L"viofarina@gmail.com";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void browselog_Click(System::Object^  sender, System::EventArgs^  e) {

				openbatchdialog->Filter = "HyperLab Batch Evaluation Log |*.log";
				 openbatchdialog->FilterIndex = 1;
				 openbatchdialog->RestoreDirectory = true; 
				 			
				 openbatchdialog->ShowDialog();




			 }
private: System::Void openbatchdialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {


			System::IO::File::Copy(openbatchdialog->FileName,"log.txt",true);

			textBox1->Text=openbatchdialog->FileName;

			System::IO::StreamReader ^sr = gcnew
				System::IO::StreamReader("log.txt");
			richTextBox1->Text= sr->ReadToEnd();

			//richTextBox1->SaveFile("log.rtf");


			sr->Close();








		 }
private: System::Void convert_Click(System::Object^  sender, System::EventArgs^  e) {

	

int region, peak;

string str="none";
string quote="none";
string meas="none";

	 string inforeg;
	

remove("evaluation.txt");


ifstream log;
ofstream eval;
eval.open("evaluation.txt",ios::out);		  
eval << "MEASUREMENT\tQUOTE\n\n";

   
log.open("log.txt",ios::in);


if (log.fail())	exit(0);


while (1)

{

	log >> str;
	if (log.fail()) break;


	if (str.compare("from")==0)
	{
		log >> meas;
	   		  	  
	}

if (str.compare("resulted")==0)
	{
		log >> str >> region;
		log >> str >> peak;
		
		if (peak <250) quote="OK";
		else quote="WARNING";
	}


if (str.compare("3.0:")==0)
{
	getline(log,str,'\n');
	while(1)
	{
		
		getline(log,str,'\n');
		int pch;

		pch= str.find('M',0);


		if ( pch<=0 && quote.compare("OK")==0) eval << meas  << '\t'<< "BAD RXSQ!" << '\t' <<  str << endl << endl;
		else if ( pch<=0 && quote.compare("WARNING")==0) eval << meas  << '\t'<< "TOO MUCH PEAKS!\t" << peak << "\tBAD RXQS!" << '\t' <<  str << endl << endl;
		//eval << meas << '\t' << region << '\t'<< peak << '\t'<< quote << '\t' << str << endl;
		 //break;
		else break;
		//else break;

		
	}
		
}


  if (str.compare("Maximum")==0)
{

	//log >> str >> str  >> str >> chi;
	if (quote.compare("OK")==0)	eval << meas << '\t'<< "ALL GOOD!" << endl <<endl;
	else if	(quote.compare("WARNING")==0) eval << meas << '\t'<< "TOO MUCH PEAKS!\t" << peak << endl <<endl;

 }






}

  

log.close();
eval.close();

//remove("log.txt");





System::IO::StreamReader^ sr = gcnew

IO::StreamReader("evaluation.txt");

richTextBox1->Text= sr->ReadToEnd();

richTextBox1->SaveFile(textBox1->Text->ToString() + ".rtf");

textBox2->Text=textBox1->Text->ToString() + ".rtf";

sr->Close();


		 }
		
private: System::Void printme_Click(System::Object^  sender, System::EventArgs^  e) {

			
			process1->StartInfo->FileName= "evaluation.txt";

process1->Start();


		 }
};
}

