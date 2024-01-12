/**
 * @author Alex Taylor
 * Main file for currency conversions.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <vector>

using namespace std;

// Function to fetch dynamic currency conversion rates (simulated with static values here)
vector<pair<string, double>> getDynamicRates()
{
    // Simulated dynamic rates, replace with actual API call
    return {{"INR", 85.0}, {"EUR", 0.88}, {"GBP", 0.75}, {"USD", 1.0}, {"JPY", 110.0}, {"AUD", 1.42}};
}

// Function to convert currency
double convertCurrency(double amount, double conversionRate)
{
    return amount * conversionRate;
}

// Function to check if the input currency is valid
bool isValidCurrency(const string &currency)
{
    // Check against the list of valid currencies
    vector<string> validCurrencies = {"INR", "EUR", "GBP", "USD", "JPY", "AUD"};
    return find(validCurrencies.begin(), validCurrencies.end(), currency) != validCurrencies.end();
}

// Function to display supported currencies and their conversion rates
void displaySupportedCurrencies(const vector<pair<string, double>> &rates)
{
    cout << "Supported Currencies:\n";
    cout << setw(5) << "Code" << setw(15) << "Conversion Rate\n";
    cout << "------------------------\n";
    for (const auto &rate : rates)
    {
        cout << setw(5) << rate.first << setw(15) << rate.second << endl;
    }
    cout << "------------------------\n";
}

// Function to prompt the user for a valid currency
string getValidCurrencyInput(const string &prompt, const vector<pair<string, double>> &rates)
{
    string currency;
    do
    {
        cout << prompt;
        cin >> currency;

        // Convert the currency input to uppercase
        transform(currency.begin(), currency.end(), currency.begin(), ::toupper);

        if (!isValidCurrency(currency))
        {
            cout << "Invalid input. Please enter a valid currency code.\n";
            displaySupportedCurrencies(rates);
        }
    } while (!isValidCurrency(currency));

    return currency;
}

int main()
{
    // Declare variables
    double amount;
    string fromCurrency, toCurrency;

    // Get dynamic currency conversion rates
    vector<pair<string, double>> conversionRates = getDynamicRates();

    // Inform user and display supported currencies
    cout << "CURRENCY CONVERTER\n";
    displaySupportedCurrencies(conversionRates);

    // Prompt user for source currency
    fromCurrency = getValidCurrencyInput("Enter the source currency code for conversion: ", conversionRates);

    // Prompt user for target currency
    toCurrency = getValidCurrencyInput("Enter the target currency code for conversion: ", conversionRates);

    // Inform user and prompt
    cout << "Enter the amount in " << fromCurrency << " you want to convert:\n";
    cin >> amount;

    // Fetch conversion rates
    double conversionRateFrom, conversionRateTo;

    for (const auto &rate : conversionRates)
    {
        if (rate.first == fromCurrency)
        {
            conversionRateFrom = rate.second;
        }
        if (rate.first == toCurrency)
        {
            conversionRateTo = rate.second;
        }
    }

    // Perform the conversion
    double convertedAmount = convertCurrency(amount, conversionRateTo / conversionRateFrom);

    // Display the result
    cout << amount << " " << fromCurrency << " in " << toCurrency << " = " << convertedAmount << endl;

    return 0;
}
