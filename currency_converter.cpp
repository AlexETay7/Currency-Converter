/**
 * @author Alex Taylor
 * Main file for currency conversions.
 */

#include <iostream>
#include <string>
#include <cctype> // for toupper()

using namespace std;

// Function to convert currency
double convertCurrency(double amount, double conversionRate)
{
    return amount * conversionRate;
}

// Function to check if the input currency is valid
bool isValidCurrency(const string &currency)
{
    // Update the list of valid currencies
    return (currency == "INR" || currency == "EUR" || currency == "GBP" ||
            currency == "USD" || currency == "JPY" || currency == "AUD");
}

// Function to prompt the user for a valid currency
string getValidCurrencyInput(const string &prompt)
{
    string currency;
    do
    {
        cout << prompt;
        cin >> currency;

        // Convert the currency input to uppercase
        for (char &c : currency)
        {
            c = toupper(c);
        }

        if (!isValidCurrency(currency))
        {
            cout << "Invalid input. Please enter a valid currency code.\n";
        }
    } while (!isValidCurrency(currency));

    return currency;
}

int main()
{
    // Declare variables
    double amount;
    string fromCurrency, toCurrency;

    // Inform user and prompt
    cout << "CURRENCY CONVERTER\n";

    // Prompt user for source currency
    fromCurrency = getValidCurrencyInput("Enter the source currency code for conversion (e.g., GBP, INR, EUR, USD, JPY, AUD): ");

    // Prompt user for target currency
    toCurrency = getValidCurrencyInput("Enter the target currency code for conversion (e.g., GBP, INR, EUR, USD, JPY, AUD): ");

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
