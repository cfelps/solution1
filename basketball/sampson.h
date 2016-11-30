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


	public protected: System::Windows::Forms::PictureBox^  pictureBox1;
	private:



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::CustomLabel^  customLabel5 = (gcnew System::Windows::Forms::DataVisualization::Charting::CustomLabel());
			System::Windows::Forms::DataVisualization::Charting::CustomLabel^  customLabel6 = (gcnew System::Windows::Forms::DataVisualization::Charting::CustomLabel());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint9 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				27));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint10 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(2,
				4));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint11 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(3,
				32.1));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint12 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(4,
				26.9));
			System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sampson::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 230);
			this->label1->Margin = System::Windows::Forms::Padding(3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"2015 - 2016 Season Statistics";
			this->label1->Click += gcnew System::EventHandler(this, &sampson::label1_Click);
			// 
			// chart1
			// 
			this->chart1->AccessibleRole = System::Windows::Forms::AccessibleRole::Chart;
			this->chart1->BackColor = System::Drawing::Color::MediumPurple;
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			customLabel5->Text = L"GP";
			chartArea3->AxisX->CustomLabels->Add(customLabel5);
			chartArea3->AxisX->CustomLabels->Add(customLabel6);
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Right;
			this->chart1->Location = System::Drawing::Point(809, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Padding = System::Windows::Forms::Padding(3);
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series3->ChartArea = L"ChartArea1";
			series3->Name = L"2015-2016 Stats";
			dataPoint9->Label = L"Games Played";
			dataPoint9->ToolTip = L"27#AXISLABEL";
			dataPoint10->Label = L"PPG";
			dataPoint10->LabelFormat = L"";
			dataPoint10->ToolTip = L"4#AXISLABEL";
			dataPoint11->Label = L"FG %";
			dataPoint11->ToolTip = L"32.1#AXISLABEL";
			dataPoint12->Label = L"3FG%";
			dataPoint12->LegendToolTip = L"";
			dataPoint12->ToolTip = L"26.9#AXISLABEL";
			series3->Points->Add(dataPoint9);
			series3->Points->Add(dataPoint10);
			series3->Points->Add(dataPoint11);
			series3->Points->Add(dataPoint12);
			series3->XValueMember = L"1";
			series3->YValueMembers = L"27";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(890, 890);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			title3->Name = L"Title1";
			this->chart1->Titles->Add(title3);
			this->chart1->Click += gcnew System::EventHandler(this, &sampson::chart1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(110, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(114, 122);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &sampson::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
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
			this->BackColor = System::Drawing::Color::MediumPurple;
			this->CancelButton = this->button1;
			this->ClientSize = System::Drawing::Size(1699, 890);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"sampson";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sampson, Brandon";
			this->Load += gcnew System::EventHandler(this, &sampson::sampson_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sampson_Load(System::Object^  sender, System::EventArgs^  e) {};
	


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
private: System::Void sampson_FormClosing(Object^ sender, FormClosingEventArgs^ e) {
}


private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
