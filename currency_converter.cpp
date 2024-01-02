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
}