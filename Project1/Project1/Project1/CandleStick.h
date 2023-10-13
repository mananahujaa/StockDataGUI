ref class CandleStick
{
public:
	static array<System::String^>^ customDelimiters = { ",", " ", "\"" };
	static System::String^ customDateFormat = "MMM DD, YYYY";

public:
    // Properties to store information about the candlestick data

    // Ticker symbol for the financial instrument (e.g., stock or currency)
    property System::String^ ticker;

    // Period or timeframe (e.g., daily, hourly, etc.)
    property System::String^ period;

    // Date and time of the data point
    property System::DateTime date;

    // Open price of the candlestick
    property float open;

    // High price during the candlestick's timeframe
    property float high;

    // Low price during the candlestick's timeframe
    property float low;

    // Close price of the candlestick
    property float close;

    // Volume (optional, if applicable to your data)
    property float volume;

    // Constructor that parses a line of data
    CandleStick(System::String^ line) {
        // Split the input string
        array<System::String^>^ parts = line->Split(customDelimiters, System::StringSplitOptions::RemoveEmptyEntries);

        // Extract and convert relevant parts
        ticker = parts[0];
        period = parts[1];

        // Convert the date part to a DateTime object
        System::String^ dateString = parts[2] + " " + parts[3] + ", " + parts[4];
        date = System::DateTime::Parse(dateString);

        open = float::Parse(parts[5]);
        high = float::Parse(parts[6]);
        low = float::Parse(parts[7]);
        close = float::Parse(parts[8]);
        volume = float::Parse(parts[9]);
    }

    // Copy constructor
    CandleStick(CandleStick^ cs) {
        open = cs->open;
        high = cs->high;
        low = cs->low;
        close = cs->close;
        volume = cs->volume;
        ticker = cs->ticker;
        period = cs->period;
        date = cs->date;
    }

};



