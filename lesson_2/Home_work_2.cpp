#include <iostream>

using namespace std;

struct Player 
{
	string playerName_1;
	string playerName_2;
	bool playerFirstWin;
	bool playerSecondWin;

};

enum tikTacToy 
{
	empty, zero, cross 
};


int main()
{
	setlocale(LC_ALL, "Russian");

	// 1 task

	short s = 100;
	int i = -500;
	float f = 5.100f;
	long long l = 56'345'677'345'453;
	char c = 'C';
	double d = 4.2;
	bool color = false;

	// 2 & 3 task

	tikTacToy symbol[3] = { zero };
	
 
	cout << " " << endl;

	// 4 task

	string playerName_1;
	string playerName_2;

	cout << "Введите имя первого игрока" << endl;
	cin >> playerName_1;

	cout << " Введите имя второго игрока" << endl;
	cin >> playerName_2;

	/*
	
	 В общем ничего не понятно, но оооооочень интересно. 3 задание не совсем понимаю как правильно сделать, ну и немного пытался сделать 4.

	*/

	return 0;

}
