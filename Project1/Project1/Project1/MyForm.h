//#pragma once
//#include "CandleStick.h";
//
//namespace $safeprojectname$ {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//	using namespace System::Windows::Forms::DataVisualization::Charting;
//	using namespace System::IO;
//
//
//	/// <summary>
//	/// Summary for MyForm
//	/// </summary>
//	public ref class MyForm : public System::Windows::Forms::Form
//	{
//		//Creating Binding List
//	public:
//		BindingList<CandleStick^>^ candlestickList = gcnew BindingList<CandleStick^>();
//	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
//	public:
//		//Creating temp list to hold Candlestick List
//		//BindingList<CandleStick^>^ templist = gcnew BindingList<CandleStick^>();
//
//	public:
//		MyForm(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: Add the constructor code here
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~MyForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::DateTimePicker^ startDate;
//	private: System::Windows::Forms::DateTimePicker^ endDate;
//	private: System::Windows::Forms::Label^ Start;
//	private: System::Windows::Forms::Label^ End;
//	private: System::Windows::Forms::Button^ buttonLoad;
//	private: System::Windows::Forms::DataGridView^ dataGridView1;
//	private: System::Windows::Forms::DataVisualization::Charting::Chart^ candleStickChart;
//	
//
//	protected:
//
//	protected:
//
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//		System::ComponentModel::Container^ components;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
//			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
//
//			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
//			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
//			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
//			this->startDate = (gcnew System::Windows::Forms::DateTimePicker());
//			this->endDate = (gcnew System::Windows::Forms::DateTimePicker());
//			this->Start = (gcnew System::Windows::Forms::Label());
//			this->End = (gcnew System::Windows::Forms::Label());
//			this->buttonLoad = (gcnew System::Windows::Forms::Button());
//			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
//			this->candleStickChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
//			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
//			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
//			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->candleStickChart))->BeginInit();
//			this->SuspendLayout();
//			// 
//			// startDate
//			// 
//			this->startDate->Location = System::Drawing::Point(49, 63);
//			this->startDate->Name = L"startDate";
//			this->startDate->Size = System::Drawing::Size(198, 26);
//			this->startDate->TabIndex = 0;
//			// 
//			// endDate
//			// 
//			this->endDate->Location = System::Drawing::Point(49, 148);
//			this->endDate->Name = L"endDate";
//			this->endDate->Size = System::Drawing::Size(198, 26);
//			this->endDate->TabIndex = 1;
//			// 
//			// Start
//			// 
//			this->Start->AutoSize = true;
//			this->Start->Location = System::Drawing::Point(45, 27);
//			this->Start->Name = L"Start";
//			this->Start->Size = System::Drawing::Size(83, 20);
//			this->Start->TabIndex = 2;
//			this->Start->Text = L"Start Date";
//			this->Start->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
//			// 
//			// End
//			// 
//			this->End->AutoSize = true;
//			this->End->Location = System::Drawing::Point(45, 109);
//			this->End->Name = L"End";
//			this->End->Size = System::Drawing::Size(77, 20);
//			this->End->TabIndex = 3;
//			this->End->Text = L"End Date";
//			// 
//			// buttonLoad
//			// 
//			this->buttonLoad->Location = System::Drawing::Point(297, 95);
//			this->buttonLoad->Name = L"buttonLoad";
//			this->buttonLoad->Size = System::Drawing::Size(115, 49);
//			this->buttonLoad->TabIndex = 4;
//			this->buttonLoad->Text = L"Load Data";
//			this->buttonLoad->UseVisualStyleBackColor = true;
//			this->buttonLoad->Click += gcnew System::EventHandler(this, &MyForm::buttonLoad_Click);
//			// 
//			// dataGridView1
//			// 
//			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
//			this->dataGridView1->Location = System::Drawing::Point(489, 1);
//			this->dataGridView1->Name = L"dataGridView1";
//			
//			this->dataGridView1->Size = System::Drawing::Size(1099, 273);
//			this->dataGridView1->TabIndex = 1;
//			// 
//			// candleStickChart
//			// 
//
//			chartArea1->AxisX->Title = L"Date";
//			chartArea1->AxisY->Title = L"Price";
//			chartArea1->Name = L"chartOHLC";
//			chartArea2->Name = L"chartVolume";
//
//			this->candleStickChart->ChartAreas->Add(chartArea1);
//			this->candleStickChart->ChartAreas->Add(chartArea2);
//
//			chartArea1->Name = L"chartOHLC";
//			chartArea2->Name = L"chartVolumes";
//
//			legend1->Name = L"Legend1";
//
//
//			this->candleStickChart->Legends->Add(legend1);
//			
//
//			this->candleStickChart->Location = System::Drawing::Point(12, 275);
//			this->candleStickChart->Name = L"candleStickChart";
//			series1->ChartArea = L"chartOHLC";
//			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
//			series1->Legend = L"Legend1";
//			series1->Name = L"OHLC";
//			series1->XValueMember = L"Data";
//			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
//			series1->YValueMembers = L"Open, High, Low, Close";
//			series1->YValuesPerPoint = 4;
//
//
//
//
//			series2->ChartArea = L"chartVolumes";
//			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
//			series2->Legend = L"Legend1";
//			series2->Name = L"Volume";
//			series2->YValuesPerPoint = 4;
//			this->candleStickChart->Series->Add(series1);
//			this->candleStickChart->Series->Add(series2);
//			this->candleStickChart->Size = System::Drawing::Size(1566, 571);
//			this->candleStickChart->TabIndex = 6;
//			this->candleStickChart->Text = L"Chart";
//			// 
//			// openFileDialog1
//			// 
//			this->openFileDialog1->FileName = L"openFileDialog";
//			this->openFileDialog1->Filter = L"All Files | *.csv";
//			this->openFileDialog1->InitialDirectory = L"C:\\Users\\rfein\\Desktop\\Stock Data";
//			// 
//			// MyForm
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(1590, 858);
//			this->Controls->Add(this->candleStickChart);
//			this->Controls->Add(this->dataGridView1);
//			this->Controls->Add(this->buttonLoad);
//			this->Controls->Add(this->End);
//			this->Controls->Add(this->Start);
//			this->Controls->Add(this->endDate);
//			this->Controls->Add(this->startDate);
//			this->Name = L"MyForm";
//			this->Text = L"MyForm";
//			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
//			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->candleStickChart))->EndInit();
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//#pragma endregion
//	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
//	}
//	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
//	}
//	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
//	}
//

//}

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
    public ref class MyForm : public System::Windows::Forms::Form {
        //Creating Binding List
    public: BindingList < CandleStick^ >^ candlestickList = gcnew BindingList < CandleStick^ >();
    private: System::Windows::Forms::Button^ buttonUpdate;
    public:

    public:

        //Creating temp list to hold Candlestick List
        BindingList < CandleStick^ >^ templist = gcnew BindingList < CandleStick^ >();

    public: MyForm(void) {
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

    private: System::Windows::Forms::DateTimePicker^ startDate;
           System::Windows::Forms::DateTimePicker^ endDate;
           System::Windows::Forms::Label^ Start;
           System::Windows::Forms::Label^ End;
           System::Windows::Forms::Button^ buttonLoad;
           System::Windows::Forms::DataGridView^ dataGridView1;
           System::Windows::Forms::DataVisualization::Charting::Chart^ candleStickChart;
           System::Windows::Forms::OpenFileDialog^ openFileDialog1;

           void InitializeComponent(void) {
               System::Windows::Forms::DateTimePicker^ startDate;
               System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
               System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
               System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
               System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
               System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
               this->endDate = (gcnew System::Windows::Forms::DateTimePicker());
               this->Start = (gcnew System::Windows::Forms::Label());
               this->End = (gcnew System::Windows::Forms::Label());
               this->buttonLoad = (gcnew System::Windows::Forms::Button());
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               this->candleStickChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
               this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
               this->buttonUpdate = (gcnew System::Windows::Forms::Button());
               startDate = (gcnew System::Windows::Forms::DateTimePicker());
               (cli::safe_cast <System::ComponentModel::ISupportInitialize^> (this->dataGridView1))->BeginInit();
               (cli::safe_cast <System::ComponentModel::ISupportInitialize^> (this->candleStickChart))->BeginInit();
               this->SuspendLayout();
               // 
               // startDate
               // 
               startDate->Location = System::Drawing::Point(49, 77);
               startDate->Name = L"startDate";
               startDate->Size = System::Drawing::Size(269, 26);
               startDate->TabIndex = 0;
               // 
               // endDate
               // 
               this->endDate->Location = System::Drawing::Point(49, 165);
               this->endDate->Name = L"endDate";
               this->endDate->Size = System::Drawing::Size(269, 26);
               this->endDate->TabIndex = 1;
               this->endDate->ValueChanged += gcnew System::EventHandler(this, &MyForm::endDate_ValueChanged);
               // 
               // Start
               // 
               this->Start->AutoSize = true;
               this->Start->Location = System::Drawing::Point(24, 40);
               this->Start->Name = L"Start";
               this->Start->Size = System::Drawing::Size(83, 20);
               this->Start->TabIndex = 0;
               this->Start->Text = L"Start Date";
               // 
               // End
               // 
               this->End->AutoSize = true;
               this->End->Location = System::Drawing::Point(24, 131);
               this->End->Name = L"End";
               this->End->Size = System::Drawing::Size(77, 20);
               this->End->TabIndex = 1;
               this->End->Text = L"End Date";
               // 
               // buttonLoad
               // 
               this->buttonLoad->Location = System::Drawing::Point(49, 210);
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
               //this->dataGridView1->AutoGenerateColumns = false;
               // 
               // candleStickChart
               // 
               chartArea3->AxisX->Title = L"Date";
               chartArea3->AxisY->Title = L"Price";
               chartArea3->Name = L"chartOHLC";
               chartArea4->Name = L"chartVolumes";
               this->candleStickChart->ChartAreas->Add(chartArea3);
               this->candleStickChart->ChartAreas->Add(chartArea4);
               legend2->Name = L"Legend1";
               this->candleStickChart->Legends->Add(legend2);
               this->candleStickChart->Location = System::Drawing::Point(12, 289);
               this->candleStickChart->Name = L"candleStickChart";
               series3->ChartArea = L"chartOHLC";
               series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
               series3->CustomProperties = L"PriceDownColor=Red, PriceUpColor=0\\, 192\\, 0";
               series3->Legend = L"Legend1";
               series3->Name = L"OHLC";
               series3->XValueMember = L"Date";
               series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
               series3->YValueMembers = L"Open, High, Low, Close";
               series3->YValuesPerPoint = 4;
               series4->ChartArea = L"chartVolumes";
               series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
               series4->Legend = L"Legend1";
               series4->Name = L"Volume";
               series4->XValueMember = L"date";
               series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
               series4->YValueMembers = L"volume";
               series4->YValuesPerPoint = 4;
               series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int64;
               this->candleStickChart->Series->Add(series3);
               this->candleStickChart->Series->Add(series4);
               this->candleStickChart->Size = System::Drawing::Size(1496, 575);
               this->candleStickChart->TabIndex = 6;
               this->candleStickChart->Click += gcnew System::EventHandler(this, &MyForm::candleStickChart_Click);
               // 
               // openFileDialog1
               // 
               this->openFileDialog1->FileName = L"openFileDialog1";
               // 
               // buttonUpdate
               // 
               this->buttonUpdate->Location = System::Drawing::Point(195, 210);
               this->buttonUpdate->Name = L"buttonUpdate";
               this->buttonUpdate->Size = System::Drawing::Size(123, 49);
               this->buttonUpdate->TabIndex = 9;
               this->buttonUpdate->Text = L"Update";
               this->buttonUpdate->UseVisualStyleBackColor = true;
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(1541, 862);
               this->Controls->Add(this->buttonUpdate);
               this->Controls->Add(this->candleStickChart);
               this->Controls->Add(this->dataGridView1);
               this->Controls->Add(this->buttonLoad);
               this->Controls->Add(this->End);
               this->Controls->Add(this->Start);
               this->Controls->Add(this->endDate);
               this->Controls->Add(startDate);
               this->Name = L"MyForm";
               this->Text = L"Candlestick Chart";
               (cli::safe_cast <System::ComponentModel::ISupportInitialize^> (this->dataGridView1))->EndInit();
               (cli::safe_cast <System::ComponentModel::ISupportInitialize^> (this->candleStickChart))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }

    private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e)
    {
        candlestickList->Clear();

        System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();
        if (result == System::Windows::Forms::DialogResult::OK)
        {
            String^ filename = openFileDialog1->FileName;
            array<String^>^ filenames = openFileDialog1->FileNames;

            // Clear the chart's titles so that we can display the ticker name
            candleStickChart->Titles->Clear();
            // Set the name of the ticker in the title
            candleStickChart->Titles->Add(Path::GetFileNameWithoutExtension(filename));

            StreamReader^ reader = gcnew StreamReader(filename);

            String^ header = reader->ReadLine();
            // Debug: Output the header to check if it matches referenceString
            Console::WriteLine("Header: " + header);

            if (header == CandleStick::referenceString)
            {
                while (!reader->EndOfStream)
                {
                    String^ line = reader->ReadLine();
                    // Debug: Output the line to check the format
                    Console::WriteLine("Line: " + line);

                    CandleStick^ p = gcnew CandleStick(line);
                    templist->Add(p);
                }
                updateChart();
            }
            dataGridView1->DataSource = candlestickList;
            candleStickChart->DataSource = candlestickList;
            candleStickChart->DataBind();
        }
    }


    public: System::Void updateChart() {
        candlestickList->Clear();
        DateTime startRange = startDate->Value;
        DateTime endRange = endDate->Value;

        for (int i = 0; i < templist->Count; i++) {
            CandleStick^ cs = templist[i];
            Console::WriteLine("Date: " + cs->date + ", Open: " + cs->open);
            if (cs->date >= startRange && cs->date <= endRange) {
                candlestickList->Add(cs);
            }
        }

        dataGridView1->DataSource = candlestickList;
        candleStickChart->DataSource = candlestickList;
        candleStickChart->DataBind();
    }




          


    //private:  System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e)
    //{
    //    candlestickList->Clear();

    //    System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();
    //    if (result == System::Windows::Forms::DialogResult::OK)
    //    {
    //        // Get the filename (or the array of filenames)
    //        String^ filename = openFileDialog1->FileName;
    //        array<String^>^ filenames = openFileDialog1->FileNames;

    //        // Clear the chart's titles so that we can display the ticker name
    //        candleStickChart->Titles->Clear();
    //        // Set the name of the ticker in the title
    //        candleStickChart->Titles->Add(Path::GetFileNameWithoutExtension(filename));
    //        // Open the CSV file for reading
    //        StreamReader^ reader = gcnew StreamReader(filename);

    //        String^ header = reader->ReadLine();
    //        // If the header string is correct (matches the reference string)
    //        if (header == CandleStick::referenceString)
    //        {
    //            // Go read one line at a time until we reach the end of the file
    //            while (!reader->EndOfStream)
    //            {
    //                if (false)
    //                {
    //                    // Read the next line
    //                    String^ line = reader->ReadLine();
    //                    // Construct a Candlestick from that line
    //                    CandleStick^ p = gcnew CandleStick(line);
    //                    templist->Add(p);
    //                }
//                    else // Could also do, in a more compact, but less readable form
//                    {
//                        // Add the new Candlestick to the list of Candlesticks
//                        templist->Add(gcnew CandleStick(reader->ReadLine()));
//                    }
//                }
//                /*
//                for (int i = templist->Count - 1; i >= 0; --i) {
//                    Candlestick^ cs = templist[i];
//                    if (cs->date >= dateTimePicker1->Value && cs->date <= dateTimePicker2->Value) {
//                        CandlestickList->Add(templist[i]);
//                    }
//                }
//                */
//                updateChart();
//            }
//            dataGridView1->DataSource = candlestickList;
//            // Now for the stock chart.
//            // 1) We set the CandlestickList to be the datasource
//            candleStickChart->DataSource = candlestickList;
//            // 2) We then bind to it to display the new data
//            candleStickChart->DataBind();
//        }
//    }
//public: System::Void updateChart() {
//    candlestickList->Clear();
//    for (int i = templist->Count - 1; i >= 0; --i) {
//        CandleStick^ cs = templist[i];
//        if (cs->date >= startDate->Value && cs->date <= endDate->Value) {
//            candlestickList->Add(cs);
//        }
//    }
//    dataGridView1->DataSource = candlestickList;
//    candleStickChart->DataSource = candlestickList;
//    candleStickChart->DataBind();
//}

      

    //private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {

    //    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
    //        candlestickList->Clear();

    //        // Get the selected file's path
    //        String^ filePath = openFileDialog1->FileName;

    //        // Open the CSV file for reading
    //        System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);

    //        // Skip the header line
    //        reader->ReadLine();

    //        // Read the data lines and construct candlesticks
    //        while (!reader->EndOfStream) {
    //            String^ line = reader->ReadLine();
    //            CandleStick^ p = gcnew CandleStick(line);
    //            candlestickList->Add(p);
    //        }

    //        // Update the DataGridView to show filtered data
    //        dataGridView1->DataSource = candlestickList;

    //        // Bind the chart to the candlestickList
    //        candleStickChart->DataSource = candlestickList;
    //        candleStickChart->DataBind();

    //        // Set the chart title
    //        candleStickChart->Titles->Clear();
    //        candleStickChart->Titles->Add(Path::GetFileNameWithoutExtension(filePath));

    //        for (int i = templist->Count - 1; i >= 0; --i) {
    //            CandleStick^ cs = templist[i];
    //            if (cs->date >= startDate->Value && cs->date <= endDate->Value) {
    //                candlestickList->Add(cs);
    //            }
    //        }

    //    }
    //}

    private: System::Void candleStickChart_Click(System::Object^ sender, System::EventArgs^ e) {}
    private: System::Void endDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}

    };
}