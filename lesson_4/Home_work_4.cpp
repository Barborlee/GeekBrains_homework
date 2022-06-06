/*
Сначала все делал сам, после уже смотрел ваше решение. Еще раз извиняюсь за такую задержку, ГОСы успешно сданы, возвращаюсь к спокойной учебе на курсе :)
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // task 1
   
    int num_1, num_2;
    
    cout << "Введите первое число" << endl;
    cin >> num_1;

    cout << "Введите второе число" << endl;
    cin >> num_2;
    
    if ((num_1 + num_2 >= 10) && (num_1 + num_2 <= 20))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    };
    cout << endl;


    // task 2

    int first_num, second_num; 

    cout << "Введите первое число" << endl;
    cin >> first_num;

    cout << "Введите второе число" << endl;
    cin >> second_num;

    if ((first_num == 10) && (second_num == 10) || (first_num + second_num == 10))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    };
    cout << endl;


    // task 3

    cout << "Нечетные числа до 50: ";
    for (int a = 1; a <= 50; a += 2)
    {
        cout << a << " ";
    };
    cout << endl;

    return 0;
}
