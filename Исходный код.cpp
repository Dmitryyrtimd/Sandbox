#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Voenkom
{
private:
	string name, surname;
	unsigned int age, height;
public:
	void vvod()
	{
		cout << "Enter:" << endl << "Name: ";
		cin >> name;
		cout << "Surname: ";
		cin >> surname;
		cout  << "Age: ";
		cin >> age;
		cout  << "Height: ";
		cin >> height;
		cout << endl;
	}
	void vuv()
	{
		cout << endl << "Your:" << endl << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Height: " << height << endl;
	}
};

int main()
{
	Voenkom alex, vika;
	alex.vvod();
	vika.vvod();
	alex.vuv();
	vika.vuv();
	system("pause");
	return 0;
}