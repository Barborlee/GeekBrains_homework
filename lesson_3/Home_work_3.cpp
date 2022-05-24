#include <iostream>

using namespace std;

//task 4 

/*
Получаем переменные из файла variable.cpp
*/

extern const int a; 
extern const int b;
extern const int c;
extern const int d;


int main()
{
    setlocale(LC_ALL, "Russian");

    // task 1

    float x = (a) * (b + (static_cast<float>(c) / d));

    cout << x << endl;

    // task 2

    int z, y;

    cout << "Введите целое число";

    cin >> z; 

    y = (z <= 21) ? z - 21 : (z - 21) * 2;
  
    cout << y << endl;

    // task 3

    int array[3][3][3] =
    {
        { {1, 2, 3}, {4,5,6}, {7,8,9} },
        { {10,11,12,}, {13,14,15}, {16,17,18} },
        { {19,20,21,}, {22,23,24}, {25,26,27} }
    };

}