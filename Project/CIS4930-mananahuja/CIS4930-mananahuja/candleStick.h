#pragma once
// candlestick.h - This is the header file for candlestick

#include <sstream>
using namespace System;

namespace candleStick_Header
{
    // Define the candleStick class within the candleStick_Header namespace.
    ref class candleStick
    {
    public:
        // Static delimiters used for string parsing.
        static array<String^>^ delimiters = { ",", " ", "\"" };

        //// Format used to parse dates.
        static String^ dateformat = "MMM dd, yyyy";

        //// Reference string layout for a candleStick data entry.
        static String^ stringRefer = "\"Ticker\",\"Period\",\"Date\",\"Open\",\"High\",\"Low\",\"Close\",\"Volume\"";

    public:
        // Public member properties to hold the candleStick data.
        property DateTime date; // Date
        property float open;   // Open
        property float high;   // High
        property float low;    // Low
        property float close;  // Close
        property unsigned long volume;  // Volume

        // Default constructor that initializes the candleStick properties.
        candleStick()
        {
            open = 0;
            high = 0;
            low = 0;
            close = 0;
            volume = 0;
        }

        // Copy constructor to create a new instance from an existing candleStick.
        candleStick(candleStick^ cs) {
            open = cs->open;
            high = cs->high;
            low = cs->low;
            close = cs->close;
            volume = cs->volume;
            date = cs->date;
        }

        //// Constructor to initialize a candleStick object from a string representation.
        candleStick(System::String^ candleStickString)
        {
           // Split the input string based on delimiters.
            array<String^>^ parts = candleStickString->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);

            // Construct the date string and parse it.
            String^ dateString = parts[2] + " " + parts[3] + ", " + parts[4];
            date = DateTime::Parse(dateString);

            // Parse and assign the other candleStick properties.
            open = float::Parse(parts[5]);
            high = float::Parse(parts[6]);
            low = float::Parse(parts[7]);
            close = float::Parse(parts[8]);
            volume = Int64::Parse(parts[9]);
        }
    };
}