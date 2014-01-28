#include <iostream>
using namespace std;

int get_num()
{
	char n;
	cin >> n;
	return n;
}

void menu()
{
	char n = get_num();


	//Read number of command
	if (n<'1' || n>'5')
	{
		cout << "You have entered wrong number. Please, enter a number from 1 to 5." << endl;
		menu();
	}
}

int main()
{
	menu();
	//You need to create a program menu
	system("pause");
	return 0;
}
