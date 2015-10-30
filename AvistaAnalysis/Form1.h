#pragma once
#define NOMINMAX
#include <math.h>
#include <algorithm> 
#include <vector>
#include <cliext/vector>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include "exprtk.hpp"

using namespace std;

namespace AvistaAnalysis {

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
	private: System::Windows::Forms::TextBox^  inputFileBox;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  fileLoadBox;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  calculate;
	private: System::Windows::Forms::TextBox^  socHighBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  socLowBox;
	private: System::Windows::Forms::DataGridView^  EnergyBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cycle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;









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
			this->inputFileBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fileLoadBox = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->socHighBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->socLowBox = (gcnew System::Windows::Forms::TextBox());
			this->EnergyBox = (gcnew System::Windows::Forms::DataGridView());
			this->Cycle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EnergyBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// inputFileBox
			// 
			this->inputFileBox->Location = System::Drawing::Point(60, 12);
			this->inputFileBox->Name = L"inputFileBox";
			this->inputFileBox->Size = System::Drawing::Size(148, 20);
			this->inputFileBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filename:";
			// 
			// fileLoadBox
			// 
			this->fileLoadBox->Location = System::Drawing::Point(8, 38);
			this->fileLoadBox->Name = L"fileLoadBox";
			this->fileLoadBox->Size = System::Drawing::Size(114, 19);
			this->fileLoadBox->TabIndex = 2;
			this->fileLoadBox->Text = L"Load File";
			this->fileLoadBox->UseVisualStyleBackColor = true;
			this->fileLoadBox->Click += gcnew System::EventHandler(this, &Form1::fileLoadBox_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// calculate
			// 
			this->calculate->Location = System::Drawing::Point(9, 63);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(113, 22);
			this->calculate->TabIndex = 3;
			this->calculate->Text = L"Calculate";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &Form1::calculate_Click);
			// 
			// socHighBox
			// 
			this->socHighBox->Location = System::Drawing::Point(57, 127);
			this->socHighBox->Name = L"socHighBox";
			this->socHighBox->Size = System::Drawing::Size(46, 20);
			this->socHighBox->TabIndex = 4;
			this->socHighBox->Text = L"99.8";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"SOC High";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"SOC Low";
			// 
			// socLowBox
			// 
			this->socLowBox->Location = System::Drawing::Point(57, 153);
			this->socLowBox->Name = L"socLowBox";
			this->socLowBox->Size = System::Drawing::Size(46, 20);
			this->socLowBox->TabIndex = 6;
			this->socLowBox->Text = L"20";
			// 
			// EnergyBox
			// 
			this->EnergyBox->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EnergyBox->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->Cycle, this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5});
			this->EnergyBox->Location = System::Drawing::Point(240, 12);
			this->EnergyBox->Name = L"EnergyBox";
			this->EnergyBox->Size = System::Drawing::Size(620, 135);
			this->EnergyBox->TabIndex = 8;
			// 
			// Cycle
			// 
			this->Cycle->HeaderText = L"Cycle";
			this->Cycle->Name = L"Cycle";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Charge(kWh)";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Discharge (kWh)";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Round Trip Efficiency";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"SOC High";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"SOC Low";
			this->Column5->Name = L"Column5";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Column6, 
				this->Column7});
			this->dataGridView1->Location = System::Drawing::Point(555, 161);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(295, 106);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"SOC";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Discharge Power";
			this->Column7->Name = L"Column7";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 273);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->EnergyBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->socLowBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->socHighBox);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->fileLoadBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inputFileBox);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EnergyBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: std::vector<vector<double > > fileRead(string file)
{//reads CSV file
	ifstream datafile;
	datafile.open(file);
	string line;
	vector<vector<double > > datamatrix;
	int i = 0;
	int j = 0;
	datamatrix.resize(1);
	while(datafile.good())
	{
	getline(datafile,line,',');
	if(line=="n")
	{
		j=0;
		i++;
		datamatrix.resize(datamatrix.size()+1);
		
		getline(datafile,line);
	
		getline(datafile,line,',');
	}
	
	datamatrix[i].push_back(atof(line.c_str()));
	
	j++;
	}
	datamatrix.resize(datamatrix.size()-1);
	datafile.close();
	return datamatrix;
}
					public: void MarshalString ( String ^ s, string& os ) {
						//used to convert between managed and unmanaged strings
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}		
	public: void MarshalString ( String ^ s, wstring& os ) {
					//used to convert between managed and unmanaged strings
   using namespace Runtime::InteropServices;
   const wchar_t* chars = 
      (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}
	public: double sgn(double x)
			{
				if(x>0)
				{
					return 1;
				}
				if(x<0)
				{
					return -1;
				}
					return 0;
			}
	private: System::Void fileLoadBox_Click(System::Object^  sender, System::EventArgs^  e) {
				  if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{	
					inputFileBox->Text=(openFileDialog1->FileName);
				}
			else
				{
					return;
				}
			 }
	private: System::Void calculate_Click(System::Object^  sender, System::EventArgs^  e) {
				 EnergyBox->Rows->Clear();
				string file;
				String^ filename;
				filename=inputFileBox->Text;
				MarshalString(filename,file);
				vector<vector<double> > dataMatrix=fileRead(file);
				dataMatrix.erase(dataMatrix.begin());
				int C_SOC=2;
				int C_x=1;
				double SOCHigh = Convert::ToDouble(socHighBox->Text);
				double SOCLow = Convert::ToDouble(socLowBox->Text);
				int i=1;
				int n=dataMatrix.size()-1;
				vector<double> energy;
				double en=0;
				double dismax=0;
				energy.push_back(0);
				while(i<n)
				{
					if(dataMatrix.at(i).at(C_x)>dismax)
					{
						dismax=dataMatrix.at(i).at(C_x);
					}
						if((sgn(dataMatrix.at(i).at(C_x)) == sgn(dataMatrix.at(i-1).at(C_x))) && dataMatrix.at(i).at(C_x) != 0 && dataMatrix.at(i).at(C_SOC)>SOCLow && dataMatrix.at(i).at(C_SOC)<SOCHigh)
						{
							en+=dataMatrix.at(i).at(C_x);
							
							energy.push_back(en);
						}
						else
						{
							en=0;
						}
					i++;
				}
				vector<double> powertaper;
				vector<double> SOCtaper;
				double cutoff=0.1;
				double taper=0.95;
				i=1;
				n=dataMatrix.size();
				while(i<n)
				{
					if(dataMatrix.at(i).at(C_x)>dismax*cutoff && dataMatrix.at(i).at(C_x)<dismax*taper)
					{
						SOCtaper.push_back(dataMatrix.at(i).at(C_SOC));
						powertaper.push_back(dataMatrix.at(i).at(C_x)/1000);
						dataGridView1->Rows->Add(dataMatrix.at(i).at(C_SOC),dataMatrix.at(i).at(C_x)/1000);
					}
					i++;
				}
				vector<double> energycycle;
				i=1;
				n=energy.size()-1;
				double max=0;
				while(i<n)
				{
					if(abs(energy.at(i)) > abs(energy.at(i-1)) && (abs(energy.at(i)) > abs(energy.at(i+1))))
					{
						if(abs(energy.at(i)) > max)
						{max=abs(energy.at(i));}
						energycycle.push_back(energy.at(i));
						
					}
					i++;
				}
				energycycle.push_back(energy.at(energy.size()-1));
				double threshold=.05;
				max*=threshold;
				i=0;
				n=energycycle.size();
				vector<double> energycycles;
				double dt=10; //s
				while(i<n)
				{
					if(abs(energycycle.at(i))>max)
					{
						energycycles.push_back(energycycle.at(i)*dt/60/60/1000);
					}
					i++;
				}
				i=0;
				n=energycycles.size();
				int cycles=1;
				if(energycycles.at(0)>0)
				{
					EnergyBox->Rows->Add(cycles,energycycles.at(0),0,"N/A",SOCHigh,SOCLow);
					cycles++;
					i=1;
				}
				while(i<n-1)
				{
					EnergyBox->Rows->Add(cycles,-energycycles.at(i),energycycles.at(i+1),-energycycles.at(i+1)/energycycles.at(i),SOCHigh,SOCLow);
					cycles++;
					i+=2;
				}


			 }
};
}

