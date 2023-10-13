#pragma once
public ref class candlestick
{
public:
	static array<System::String^>^ delimiters = { ",", " ", "\"" };
	static System::String^ dateFormat = "MMM DD, YYYY";



public:
	property System::String^ ticker;
	property System::String^ period;
	property System::DateTime^ date;
	property float open;
	property float high;
	property float low;
	property float close;
	property float volume;

	candlestick() { // constructor
		open = -1;
		high = -1;
		low = -1;
		close = -1;
		volume = -1;
		ticker = "";
		period = "";
		date = System::DateTime::Parse("");
	}

	candlestick(System::String^ line) { 
		// Split string
		array<System::String^>^ part = line->Split(delimiters, System::StringSplitOptions::RemoveEmptyEntries);

		ticker = part[0]; 
		period = part[1];

		// convert date part to DateTime type
		System::String^ dateParts = part[2] + " " + part[3] + ", " + part[4];
		date = System::DateTime::Parse(dateParts);
	

		open = float::Parse(part[5]);
		high = float::Parse(part[6]);
		low = float::Parse(part[7]);
		close = float::Parse(part[8]);
		volume = float::Parse(part[9]);
	

	}
	candlestick(candlestick ^c) { // copy constructor
		open = c->open;
		high = c->high;
		low = c->low;
		close = c->close;
		volume = c->volume;
		ticker = c->ticker;
		period = c->period;
		date = c->date;

	}
};

