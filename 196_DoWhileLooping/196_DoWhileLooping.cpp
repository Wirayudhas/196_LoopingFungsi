#include <iostream>
using namespace std;

int main()
{
    int x;
    srand(time(0));

    x = rand() % 10;

    cout << "nilai awal : "  << x << endl;

    do
    {
        cout << "perulangan Do..wihle" << endl;
        x = rand() % 10;

        cout << "Nilai x : " << x << endl;

    } while (x > 4);
}

