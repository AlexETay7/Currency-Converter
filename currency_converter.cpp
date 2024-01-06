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
    double dollar;
    string fromCurrency, toCurrency;

    // Inform user and prompt
    cout << "CURRENCY CONVERTER\n";
    cout << "Enter USD value you want converted:\n";
    cin >> dollar;

    // Prompt user for input and convert it to uppercase
    do
    {
        cout << "Enter the source currency code (e.g., USD):\n";
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

    // Conversion factor for currencies
    double conversionRate;
    // Assign conversion rate based on target currency
    if (toCurrency == "INR")
    {
        conversionRate = 83.27;
    }
    else if (toCurrency == "EUR")
    {
        conversionRate = 0.91;
    }
    else if (toCurrency == "GBP")
    {
        conversionRate = 0.79;
    }
    else if (toCurrency == "USD")
    {
        conversionRate = 1.0;
    }
    else if (toCurrency == "JPY")
    {
        conversionRate = 113.50;
    }
    else if (toCurrency == "AUD")
    {
        conversionRate = 1.35;
    }

    // Perform the conversion
    double convertedAmount = convertCurrency(dollar, conversionRate);

    // Display the result
    cout << dollar << " " << fromCurrency << " in " << toCurrency << " = " << convertedAmount << endl;

    return 0;
}
