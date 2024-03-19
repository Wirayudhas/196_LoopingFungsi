#include <iostream>
using namespace std;

int panjang,lebar;

void inputdata() {
	cout << "masukan nilai sisi : ";
	cin >> panjang;
	cout << "masukan nilai lebar : ";
	cin >> lebar;
}

int hitungluas() {
	return panjang * lebar;
}

void bebas() {
	cout << "luasnya adalah :" << hitungluas() << endl;

}

int main()
{
	inputdata();
	hitungluas();
		bebas();
}
