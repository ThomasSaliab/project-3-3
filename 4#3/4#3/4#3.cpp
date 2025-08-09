﻿#include <iostream>  
#include <random>     
#include <time.h>     
#include <iomanip>    
using namespace std;

// دالة إرجاع رقم عشوائي بين startValue و endValue
int generateRandomNumber(int startValue, int endValue)
{
    int number = rand() % (endValue - startValue + 1) + startValue;
    return number;
}

// دالة تعبئة المصفوفة بالقيم العشوائية
void populateMatrix(int table[3][3])
{
    for (int rowIndex = 0; rowIndex < 3; rowIndex++)
    {
        for (int colIndex = 0; colIndex < 3; colIndex++)
        {
            table[rowIndex][colIndex] = generateRandomNumber(1, 100);
        }
    }
}

// دالة طباعة المصفوفة
void displayMatrix(int table[3][3])
{
    for (int rowIndex = 0; rowIndex < 3; rowIndex++)
    {
        for (int colIndex = 0; colIndex < 3; colIndex++)
        {
            cout << table[rowIndex][colIndex] << setw(5);
        }
        cout << "\n";
    }
}

// دالة لحساب مجموع صف معين
int calculateRowSum(int table[3][3], short targetRow, short totalCols)
{
    int sum = 0;
    for (int colIndex = 0; colIndex < totalCols; colIndex++)
    {
        sum += table[colIndex][targetRow];
    }
    return sum;
}

// دالة لطباعة مجموع كل صف
void displayRowSums(int table[3][3], short totalRows, short totalCols)
{
    for (int rowIndex = 0; rowIndex < totalRows; rowIndex++)
    {
        cout << "col " << rowIndex + 1
            << " Sum = " << calculateRowSum(table, rowIndex, totalCols) << "\n";
    }
}

int main()
{
    srand(time(0));
    int table[3][3];

    populateMatrix(table);
    displayMatrix(table);
    cout << "________________________\n";
    displayRowSums(table, 3, 3);

    return 0;
}
