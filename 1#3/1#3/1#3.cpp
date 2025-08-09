#include <iostream>
#include <random>
#include <time.h>
#include <string>
using namespace std;

// دالة إرجاع رقم عشوائي بين minVal و maxVal
int getRandomNumber(int minVal, int maxVal)
{
    int i = rand() % (maxVal - minVal + 1) + minVal;
    return i;
}

// دالة تعبئة المصفوفة بالقيم العشوائية
void fillArray(int matrix[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            matrix[row][col] = getRandomNumber(1, 100);
        }
    }
}

// دالة طباعة المصفوفة
void printArray(int matrix[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << "   ";
        }
        cout << "\n";
    }
}

int main()
{
    srand(time(0));
    int matrix[3][3];
    fillArray(matrix);
    printArray(matrix);
    return 0;
}
