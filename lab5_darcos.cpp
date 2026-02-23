/**
 * @file lab5_darcos.cpp
 * @author Daisy Arcos
 * @date 2026-02-22
 * @brief a program to generate a multiplication table with valid user input and refactorized 
 */
#include<iostream>
#include "lab5_darcos.h"
using namespace std;

int main()
{
    return main();
}
/**
 * @brief Beginning of the program. 
 * @param None
 * @return 0 to indicate success. 
 */
int main()
{
    int maxDigit;

    cout << "Please enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10." << endl;
    cout << "Max Digit: ";
    getMaxDigitInput(maxDigit);

    printMultiplicationTable(maxDigit);

    return 0;
}
/**
 * @brief creates, calcultaes, and formats the multiplication table. 
 * @param maxDigit - the highest digit from user input. 
 * @return None (void). 
 */
void printMultiplicationTable(int maxDigit)
{
    for (int i = 1; i <= maxDigit; i++)
    {
        for (int j = 1; j <= maxDigit; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
/**
 * @brief Ask for user input and checks validity. 
 * @param None
 * @return A valid interger for max digit. 
 */
int getMaxDigitInput()
{
    cin >> maxDigit;

    // input validation loop
    // still need to add condition for non integer values
    isMaxDigitValid(maxDigit);
}
/**
 * @brief Checks the users input to validate the interger between the 4 and 10 range. 
 * @param maxDigit - User provided interger
 * @return true if the input is inbetween 4 and 10, false otherwise. 
 */
bool isMaxDigitValid(int maxDigit)
{
    while (maxDigit <= 4 || maxDigit >= 10)
    {
        printInputValidationError();
        cout << "Max Digit: ";
        cin >> maxDigit;
    }
}
/**
 * @brief Error message regarding users input. 
 * @param None
 * @return None (void)
 */
void printInputValidationError()
{
    cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
}