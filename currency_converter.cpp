/**
 * @author Alex Taylor
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double dollar;
    string currency;

    cout << "CURRENCY CONVERTER\n";
    cout << "Enter USD value you want converted:\n";
    cin >> dollar;
    double pound = dollar * 0.79;
    double euro = dollar * 0.91;
    double rupee = dollar * 83.27;

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
}