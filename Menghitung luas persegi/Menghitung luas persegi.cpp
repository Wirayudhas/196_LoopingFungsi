#include <iostream>
using namespace std;

int sisi;

void inputdata() {
    cout << "masukan nilai sisi : ";
    cin >> sisi;
}

int hitungluas() {
    return sisi * sisi;
}

int display() {
    cout << "luas persegi : " << hitungluas() << endl;
}

int main()
{
    inputdata();
        display();
}

