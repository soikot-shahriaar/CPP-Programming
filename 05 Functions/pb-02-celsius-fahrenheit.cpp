// Write a program that uses two functions FahToCel and CelToFah to convert temperatures between Fahrenheit and Celsius

#include <iostream>
using namespace std;

float FahToCel(float fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float CelToFah(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    int choice;
    float temp;

    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Choose 1 or 2 to measure temperature: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "The temperature in Celsius is: " << FahToCel(temp) << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "The temperature in Fahrenheit is: " << CelToFah(temp) << endl;
    }
    else
    {
        cout << "Invalid choice. Please select 1 or 2." << endl;
    }

    return 0;
}