#pragma once
#include "candlestick.h"

#include <sstream>


using namespace candleStick_Header;

namespace $safeprojectname$ {

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
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		BindingList<candleStick^>^ candlestickList = gcnew BindingList<candleStick^>();
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	public:
		BindingList<candleStick^>^ tempList = gcnew BindingList<candleStick^>();
		MyForm(void)
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
		// Destructor for the MyForm class
		// This is used to clean up resources when the form is destroyed.
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		// Declaration of DateTimePicker controls
	private: System::Windows::Forms::DateTimePicker^ startDate;
	private: System::Windows::Forms::DateTimePicker^ endDate;
	protected:

	protected:
		//Declaration of Button Controls for Loading and Updating data
	private: System::Windows::Forms::Button^ Load;
	private: System::Windows::Forms::Button^ Update;
		//Declaration of Labels controls for displaying "Start" and "End" 
	private: System::Windows::Forms::Label^ Start;
	private: System::Windows::Forms::Label^ End;
		//Declaring Chart for candlesticks
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartCandleStick;



		 //Declaring the data grid view

	private: System::Windows::Forms::DataGridView^ dataGridViewStocks;


	private:
		/// <summary>
		/// Required designer variable.
		//System::Windows::Forms::OpenFileDialog^ openFileDialog1;
		System::ComponentModel::Container^ components; 
		/// </summary>
		//System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->startDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->endDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->Load = (gcnew System::Windows::Forms::Button());
			this->Start = (gcnew System::Windows::Forms::Label());
			this->End = (gcnew System::Windows::Forms::Label());
			this->chartCandleStick = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridViewStocks = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCandleStick))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStocks))->BeginInit();
			this->SuspendLayout();
			// 
			// startDate
			// 
			this->startDate->Location = System::Drawing::Point(21, 43);
			this->startDate->Margin = System::Windows::Forms::Padding(2);
			this->startDate->Name = L"startDate";
			this->startDate->Size = System::Drawing::Size(179, 20);
			this->startDate->TabIndex = 0;
			// 
			// endDate
			// 
			this->endDate->Location = System::Drawing::Point(21, 107);
			this->endDate->Margin = System::Windows::Forms::Padding(2);
			this->endDate->Name = L"endDate";
			this->endDate->Size = System::Drawing::Size(179, 20);
			this->endDate->TabIndex = 1;
			// 
			// Load
			// 
			this->Load->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Load->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->Load->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Load->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Load->Location = System::Drawing::Point(21, 144);
			this->Load->Margin = System::Windows::Forms::Padding(2);
			this->Load->Name = L"Load";
			this->Load->Size = System::Drawing::Size(179, 23);
			this->Load->TabIndex = 2;
			this->Load->Text = L"Load Data";
			this->Load->UseVisualStyleBackColor = false;
			this->Load->Click += gcnew System::EventHandler(this, &MyForm::Load_Click);
			// 
			// Start
			// 
			this->Start->AutoSize = true;
			this->Start->Location = System::Drawing::Point(18, 20);
			this->Start->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(32, 13);
			this->Start->TabIndex = 4;
			this->Start->Text = L"Start:";
			// 
			// End
			// 
			this->End->AutoSize = true;
			this->End->Location = System::Drawing::Point(18, 85);
			this->End->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(26, 13);
			this->End->TabIndex = 5;
			this->End->Text = L"End";
			// 
			// chartCandleStick
			// 
			chartArea7->AxisX->Title = L"Date";
			chartArea7->AxisY->Title = L"Price";
			chartArea7->Name = L"ChartOHLC";
			chartArea8->AlignWithChartArea = L"ChartOHLC";
			chartArea8->AxisX->Title = L"Date";
			chartArea8->AxisY->Title = L"Volume";
			chartArea8->Name = L"ChartVol";
			this->chartCandleStick->ChartAreas->Add(chartArea7);
			this->chartCandleStick->ChartAreas->Add(chartArea8);
			legend4->Name = L"Legend1";
			this->chartCandleStick->Legends->Add(legend4);
			this->chartCandleStick->Location = System::Drawing::Point(8, 181);
			this->chartCandleStick->Margin = System::Windows::Forms::Padding(2);
			this->chartCandleStick->Name = L"chartCandleStick";
			series7->ChartArea = L"ChartOHLC";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
			series7->CustomProperties = L"PriceDownColor=Red, PriceUpColor=Green";
			series7->Legend = L"Legend1";
			series7->Name = L"OHLC";
			series7->XValueMember = L"Date";
			series7->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
			series7->YValueMembers = L"High, Low, Open, Close";
			series7->YValuesPerPoint = 4;
			series8->ChartArea = L"ChartVol";
			series8->Legend = L"Legend1";
			series8->Name = L"Volume";
			series8->XValueMember = L"Date";
			series8->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
			series8->YValueMembers = L"Volume";
			series8->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int64;
			this->chartCandleStick->Series->Add(series7);
			this->chartCandleStick->Series->Add(series8);
			this->chartCandleStick->Size = System::Drawing::Size(1071, 294);
			this->chartCandleStick->TabIndex = 6;
			this->chartCandleStick->Text = L"chartCandleStick";
			// 
			// dataGridViewStocks
			// 
			this->dataGridViewStocks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStocks->Location = System::Drawing::Point(217, 8);
			this->dataGridViewStocks->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewStocks->Name = L"dataGridViewStocks";
			this->dataGridViewStocks->RowHeadersWidth = 62;
			this->dataGridViewStocks->RowTemplate->Height = 28;
			this->dataGridViewStocks->Size = System::Drawing::Size(862, 169);
			this->dataGridViewStocks->TabIndex = 7;
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1095, 482);
			this->Controls->Add(this->dataGridViewStocks);
			this->Controls->Add(this->chartCandleStick);
			this->Controls->Add(this->End);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->Load);
			this->Controls->Add(this->endDate);
			this->Controls->Add(this->startDate);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCandleStick))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStocks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Determine the parent folder of your solution
		String^ solutionPath = Path::GetDirectoryName(Path::GetDirectoryName(Application::ExecutablePath));

		// Set the initial directory of openFileDialog2
		openFileDialog2->InitialDirectory = solutionPath;
			
		// Show the OpenFileDialog and wait for user input
		System::Windows::Forms::DialogResult result = openFileDialog2->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			// Get the selected file name and file names
			String^ filename = openFileDialog2->FileName;
			array<String^>^ filenames = openFileDialog2->FileNames;

			// Create a StreamReader to read the selected file
			StreamReader^ reader = gcnew StreamReader(filename);

			// Create a list to hold the loaded candlesticks
			BindingList<candleStick^>^ candleStickList = gcnew BindingList<candleStick^>();

			// Read the first line of the file (assumed to be a header)
			String^ header = reader->ReadLine();

			// Check if the header matches the expected format
			if (header == candleStick::stringRefer)
			{
				// Create a temporary list to hold the loaded data
				BindingList<candleStick^>^ tempList = gcnew BindingList<candleStick^>();

				// Read the remaining lines of the file and populate tempList
				while (!reader->EndOfStream)
				{
					tempList->Add(gcnew candleStick(reader->ReadLine()));
				}

				// Iterate through tempList and filter by date range
				int i = tempList->Count - 1;
				while (i >= 0) {
					candleStick^ cs = tempList[i];
					if (cs->date >= startDate->Value && cs->date <= endDate->Value) {
					candleStickList->Add(cs);
					}
					i--;
				}
			}

			// Clear existing chart titles and set a new title based on the loaded file
			chartCandleStick->Titles->Clear();
			chartCandleStick->Titles->Add(Path::GetFileNameWithoutExtension(filename));

			// Update the DataGridView and Chart with the loaded candlestick data
			dataGridViewStocks->DataSource = candleStickList;
			chartCandleStick->DataSource = candleStickList;
			chartCandleStick->DataBind();
		}
	}
		   //Update not required

	//public: System::Void updateChart() {
	//	BindingList<candleStick^>^ updatedList = gcnew BindingList<candleStick^>();

	//	// Iterate through tempList and add items that match the selected date range
	//	for (int i = tempList->Count - 1; i >= 0; i--) {
	//		candleStick^ cs = tempList[i];
	//		if (cs->date >= startDate->Value && cs->date <= endDate->Value) {
	//			updatedList->Add(cs);
	//		}
	//	}

	//	// Clear the current candlestickList and add the filtered items from updatedList
	//	candlestickList->Clear();
	//	for each (candleStick ^ cs in updatedList) {
	//		candlestickList->Add(cs);
	//	}

	//	// Update the dataGridViewStocks and chartCandleStick with the updated data
	//	dataGridViewStocks->DataSource = candlestickList;
	//	chartCandleStick->DataSource = candlestickList;
	//	chartCandleStick->DataBind();

	//}
	//private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
	//		updateChart();
	//}


};
}
