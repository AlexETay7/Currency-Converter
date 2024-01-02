/**
 * @author Alex Taylor
 */

#include <iostream>
#include <string>
using namespace std;

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
    double pound = dollar * 0.79;
    double euro = dollar * 0.91;
    double rupee = dollar * 83.27;

    // Prompt user for input and output proper currency
    cout << "Enter GBP for converting USD to GBP, INR for converting USD to INR, or EUR for converting USD to EUR:\n";
    cin >> currency;

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
    else
    {
        cout << "That's an invalid input. Please try again.";
    }
}