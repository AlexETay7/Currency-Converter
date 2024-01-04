/**
 * @author Alex Taylor
 */

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
    string currency;

    // Inform user and prompt
    cout << "CURRENCY CONVERTER\n";
    cout << "Enter USD value you want converted:\n";
    cin >> dollar;

    // Conversion factors for currencies
    double pound = convertCurrency(dollar, 0.79);
    double euro = convertCurrency(dollar, 0.91);
    double rupee = convertCurrency(dollar, 83.27);
    double yen = convertCurrency(dollar, 113.50);
    double aussieDollar = convertCurrency(dollar, 1.35);

    // Prompt user for input and convert it to uppercase
    do
    {
        cout << "Enter the currency code for conversion (e.g., GBP, INR, EUR, USD, JPY, AUD):\n";
        cin >> currency;

        // Convert the currency input to uppercase
        for (char &c : currency)
        {
            c = toupper(c);
        }

        if (!isValidCurrency(currency))
        {
            cout << "Invalid input. Please try again.\n";
        }
    } while (!isValidCurrency(currency));

    // Continue with the conversion logic
    if (currency == "INR")
    {
        cout << dollar << " Dollars in Rupees = " << rupee;
    }
    else if (currency == "EUR")
    {
        cout << dollar << " Dollars in Euro = " << euro;
    }
    else if (currency == "GBP")
    {
        cout << dollar << " Dollars in Pound = " << pound;
    }
    else if (currency == "USD")
    {
        cout << dollar << " Dollars in USD = " << dollar;
    }
    else if (currency == "JPY")
    {
        cout << dollar << " Dollars in Yen = " << yen;
    }
    else if (currency == "AUD")
    {
        cout << dollar << " Dollars in AUD = " << aussieDollar;
    }

    return 0;
}
