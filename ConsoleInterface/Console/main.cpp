#include <iostream>
using namespace std;

int get_num()
{
	int n;
	cin >> n;
	return n;
}

void menu()
{
	//maximum number is 5
	int n = get_num();	//Get a number of command. DOES NOT WORK, IF AN INPUT IS NOT A NUMBER!
	cout << n << endl;
	if (n<1 || n>5)
	{
		cout << "You have entered wrong number. Please, enter a number from 1 to 5." << endl;
		get_num();
	}
}

int main()
{
	menu();
	//You need to create a program menu
	system("pause");
	return 0;
}
