using System;
using System.Data;
using System.IO;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace StockAnalysisApp
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            // Load the stock data into DataGridView and Chart
            LoadStockData();
        }

        private void LoadStockData()
        {
            // Specify the folder path for stock data files
            string dataFolderPath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Stock Data");

            // Load CSV file based on user input (symbol, period)
            string symbol = "BDX"; // Example symbol
            string period = "Daily"; // Example period
            string filePath = Path.Combine(dataFolderPath, $"{symbol}-{period}.csv");

            if (!File.Exists(filePath))
            {
                MessageBox.Show("Data file not found.");
                return;
            }

            // Load CSV data into a DataTable
            DataTable stockData = new DataTable();
            using (StreamReader reader = new StreamReader(filePath))
            {
                string[] headers = reader.ReadLine().Split(',');
                foreach (string header in headers)
                {
                    stockData.Columns.Add(header);
                }

                while (!reader.EndOfStream)
                {
                    string[] row = reader.ReadLine().Split(',');
                    stockData.Rows.Add(row);
                }
            }

            // Bind DataTable to DataGridView
            dataGridView1.DataSource = stockData;

            // Create and configure a Candlestick chart
            chart1.Series.Clear();
            Series series = new Series("Candlestick");
            series.ChartType = SeriesChartType.Candlestick;

            foreach (DataRow row in stockData.Rows)
            {
                DateTime date = DateTime.Parse(row["Date"].ToString());
                double open = Convert.ToDouble(row["Open"]);
                double high = Convert.ToDouble(row["High"]);
                double low = Convert.ToDouble(row["Low"]);
                double close = Convert.ToDouble(row["Close"]);

                series.Points.Add(new DataPoint(date.ToOADate(), high, low, open, close));
            }

            chart1.Series.Add(series);
        }

        private void btnLoadData_Click(object sender, EventArgs e)
        {
            LoadStockData();
        }
    }
}
