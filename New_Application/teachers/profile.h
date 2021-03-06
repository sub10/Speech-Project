#pragma once

namespace teachers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Diagnostics;
	using namespace System::Threading;
	using namespace System::IO;

	/// <summary>
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{

	// global data array declaration
	static array<String^>^ prof_profile = gcnew array<String^>(50);

	private:
		int domain;
		int teacherIndex;
	public:
		profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		profile(int dom, int index)
		{
			domain =  dom;
			teacherIndex = index;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profile()
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(35, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(35, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Designation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 127);
			this->label3->MaximumSize = System::Drawing::Size(400, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Interests";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"E-Mail";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(38, 267);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 14);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Room";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(38, 308);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Joined";
			// 
			// profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 381);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(521, 420);
			this->MinimumSize = System::Drawing::Size(521, 420);
			this->Name = L"profile";
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void profile_Load(System::Object^  sender, System::EventArgs^  e) {
			String^ path;
			if(domain == 1){
				
				path = ".\\Theory\\"+teacherIndex+".txt";		 
			}
			else if(domain == 2){
				path = ".\\System\\"+teacherIndex+".txt";
			}
			else{
				path = ".\\Ai\\"+teacherIndex+".txt";
			}

	
			StreamReader^ sr = gcnew StreamReader(path);
			 while( sr->Peek() >= 0 )
			{

				label1->Text = Convert::ToString(sr->ReadLine());
				label2->Text = Convert::ToString(sr->ReadLine());
				label3->Text = Convert::ToString(sr->ReadLine());
				label4->Text = Convert::ToString(sr->ReadLine());
				label5->Text = Convert::ToString(sr->ReadLine());
				label6->Text = Convert::ToString(sr->ReadLine());
				label7->Text = Convert::ToString(sr->ReadLine());
			}
		}
	};
}
