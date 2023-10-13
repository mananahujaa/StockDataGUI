

#pragma once
#include "CandleStick.h"

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::IO;
	
	
	// <summary>
	// Summary for MyForm
	// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	//Creating Binding List
	public:
	BindingList<CandleStick^>^ candlestickList = gcnew BindingList<CandleStick^>();
	
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

			protected:
				/// <summary>
				/// Clean up any resources being used.
				/// </summary>
				/*~MyForm()
				{
					if (components)
					{
						delete components;
					}
				}*/

	private:
		System::Windows::Forms::DateTimePicker^ startDate;
		System::Windows::Forms::DateTimePicker^ endDate;
		System::Windows::Forms::Label^ Start;
		System::Windows::Forms::Label^ End;
		System::Windows::Forms::Button^ buttonLoad;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::DataVisualization::Charting::Chart^ candleStickChart;
		System::Windows::Forms::OpenFileDialog^ openFileDialog1;

		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->startDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->endDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->Start = (gcnew System::Windows::Forms::Label());
			this->End = (gcnew System::Windows::Forms::Label());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->candleStickChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->candleStickChart))->BeginInit();
			this->SuspendLayout();
			// 
			// startDate
			// 
			this->startDate->Location = System::Drawing::Point(49, 63);
			this->startDate->Name = L"startDate";
			this->startDate->Size = System::Drawing::Size(198, 26);
			this->startDate->TabIndex = 0;
			// 
			// endDate
			// 
			this->endDate->Location = System::Drawing::Point(49, 148);
			this->endDate->Name = L"endDate";
			this->endDate->Size = System::Drawing::Size(198, 26);
			this->endDate->TabIndex = 1;
			// 
			// Start
			// 
			this->Start->AutoSize = true;
			this->Start->Location = System::Drawing::Point(45, 27);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(83, 20);
			this->Start->TabIndex = 2;
			this->Start->Text = L"Start Date";
			// 
			// End
			// 
			this->End->AutoSize = true;
			this->End->Location = System::Drawing::Point(45, 109);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(77, 20);
			this->End->TabIndex = 3;
			this->End->Text = L"End Date";
			// 
			// buttonLoad
			// 
			this->buttonLoad->Location = System::Drawing::Point(297, 95);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(115, 49);
			this->buttonLoad->TabIndex = 4;
			this->buttonLoad->Text = L"Load Data";
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &MyForm::buttonLoad_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(489, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1099, 273);
			this->dataGridView1->TabIndex = 1;
			// 
			// candleStickChart
			// 
			chartArea1->AxisX->Title = L"Date";
			chartArea1->AxisY->Title = L"Price";
			chartArea1->Name = L"chartOHLC";
			chartArea2->Name = L"chartVolumes";
			this->candleStickChart->ChartAreas->Add(chartArea1);
			this->candleStickChart->ChartAreas->Add(chartArea2);
			legend1->Name = L"Legend1";
			this->candleStickChart->Legends->Add(legend1);
			this->candleStickChart->Location = System::Drawing::Point(12, 289);
			this->candleStickChart->Name = L"candleStickChart";
			series1->ChartArea = L"chartOHLC";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
			series1->Legend = L"Legend1";
			series1->Name = L"OHLC";
			series1->XValueMember = L"Date";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
			series1->YValueMembers = L"Open, High, Low, Close";
			series1->YValuesPerPoint = 4;
			series2->ChartArea = L"chartVolumes";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
			series2->Legend = L"Legend1";
			series2->Name = L"Volume";
			series2->XValueMember = L"date";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
			series2->YValueMembers = L"volume";
			series2->YValuesPerPoint = 4;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int64;
			this->candleStickChart->Series->Add(series1);
			this->candleStickChart->Series->Add(series2);
			this->candleStickChart->Size = System::Drawing::Size(1496, 575);
			this->candleStickChart->TabIndex = 6;
			this->candleStickChart->Click += gcnew System::EventHandler(this, &MyForm::candleStickChart_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1541, 862);
			this->Controls->Add(this->candleStickChart);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonLoad);
			this->Controls->Add(this->End);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->endDate);
			this->Controls->Add(this->startDate);
			this->Name = L"MyForm";
			this->Text = L"Candlestick Chart";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->candleStickChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			candlestickList->Clear();

			// Get the selected file's path
			String^ filePath = openFileDialog1->FileName;

			// Open the CSV file for reading
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);

			// Skip the header line
			reader->ReadLine();

			// Read the data lines and construct candlesticks
			while (!reader->EndOfStream)
			{
				String^ line = reader->ReadLine();
				CandleStick^ p = gcnew CandleStick(line);
				candlestickList->Add(p);
			}

			// Update the DataGridView to show filtered data
			dataGridView1->DataSource = candlestickList;

			// Bind the chart to the candlestickList
			candleStickChart->DataSource = candlestickList;
			candleStickChart->DataBind();

			// Set the chart title
			candleStickChart->Titles->Clear();
			candleStickChart->Titles->Add(Path::GetFileNameWithoutExtension(filePath));
		}
	}

	private: System::Void candleStickChart_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

	