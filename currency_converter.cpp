#include <iostream>
#include <string>
#include <cctype> // for toupper()

using namespace std;

double convertCurrency(double amount, double conversionRate)
{
    return amount * conversionRate;
}

bool isValidCurrency(const string &currency)
{
    // Update the list of valid currencies
    return (currency == "INR" || currency == "EUR" || currency == "GBP" ||
            currency == "USD" || currency == "JPY" || currency == "AUD");
}

int main()
{
    // Declare variables
    double amount;
    string fromCurrency, toCurrency;

    // Inform user and prompt
    cout << "CURRENCY CONVERTER\n";

    // Prompt user for input and convert it to uppercase
    do
    {
        cout << "Enter the source currency code for conversion (e.g., GBP, INR, EUR, USD, JPY, AUD):\n";
        cin >> fromCurrency;

        // Convert the currency input to uppercase
        for (char &c : fromCurrency)
        {
            c = toupper(c);
        }

        if (!isValidCurrency(fromCurrency))
        {
            cout << "Invalid input. Please try again.\n";
        }
    } while (!isValidCurrency(fromCurrency));

    // Prompt user for target currency and convert it to uppercase
    do
    {
        cout << "Enter the target currency code for conversion (e.g., GBP, INR, EUR, USD, JPY, AUD):\n";
        cin >> toCurrency;

        // Convert the currency input to uppercase
        for (char &c : toCurrency)
        {
            c = toupper(c);
        }

        if (!isValidCurrency(toCurrency))
        {
            cout << "Invalid input. Please try again.\n";
        }
    } while (!isValidCurrency(toCurrency));

    // Inform user and prompt
    cout << "Enter the amount in " << fromCurrency << " you want to convert:\n";
    cin >> amount;

    // Conversion factor for source and target currencies
    double conversionRateFrom, conversionRateTo;

    // Assign conversion rates based on source and target currencies
    if (fromCurrency == "INR")
    {
        conversionRateFrom = 83.27;
    }
    else if (fromCurrency == "EUR")
    {
        conversionRateFrom = 0.91;
    }
    else if (fromCurrency == "GBP")
    {
        conversionRateFrom = 0.79;
    }
    else if (fromCurrency == "USD")
    {
        conversionRateFrom = 1.0;
    }
    else if (fromCurrency == "JPY")
    {
        conversionRateFrom = 113.50;
    }
    else if (fromCurrency == "AUD")
    {
        conversionRateFrom = 1.35;
    }

    if (toCurrency == "INR")
    {
        conversionRateTo = 83.27;
    }
    else if (toCurrency == "EUR")
    {
        conversionRateTo = 0.91;
    }
    else if (toCurrency == "GBP")
    {
        conversionRateTo = 0.79;
    }
    else if (toCurrency == "USD")
    {
        conversionRateTo = 1.0;
    }
    else if (toCurrency == "JPY")
    {
        conversionRateTo = 113.50;
    }
    else if (toCurrency == "AUD")
    {
        conversionRateTo = 1.35;
    }

    // Perform the conversion
    double convertedAmount = convertCurrency(amount, conversionRateTo / conversionRateFrom);

    // Display the result
    cout << amount << " " << fromCurrency << " in " << toCurrency << " = " << convertedAmount << endl;

    return 0;
}
