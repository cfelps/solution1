#pragma once
#include <C:\Users\Juche\Documents\Visual Studio 2015\Projects\solution1\basketball\mainform.h>


namespace basketball {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sampson
	/// </summary>
	public ref class sampson : public System::Windows::Forms::Form
	{
	public:
		sampson(void)
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
		~sampson()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private:
	protected:


	private:

	private: System::Windows::Forms::TextBox^  textBox1;
	public protected: System::Windows::Forms::PictureBox^  pictureBox1;
	private:

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;

	private:


	private:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sampson::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 462);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"2015 - 2016 Season Statistics";
			// 
			// chart1
			// 
			this->chart1->AccessibleRole = System::Windows::Forms::AccessibleRole::Chart;
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(326, 252);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(898, 437);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			title2->Name = L"Title1";
			this->chart1->Titles->Add(title2);
			this->chart1->Click += gcnew System::EventHandler(this, &sampson::chart1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 523);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 31);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Games played: 27\r\n";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &sampson::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(5, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 152);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &sampson::pictureBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(5, 560);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 31);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Points per game: 4.0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(5, 597);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 31);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"FG Percentage: 32.1";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &sampson::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 671);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 50);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sampson::button1_Click);
			// 
			// sampson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1474, 729);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"sampson";
			this->Text = L"Sampson, Brandon";
			this->Load += gcnew System::EventHandler(this, &sampson::sampson_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sampson_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}

};
}
