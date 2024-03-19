#include <iostream>
using namespace std;

int main()
{
    int x;
    srand(time(0));

    x = rand() % 10;

    cout << "nilai X awal:" << x << endl;

    while (x > 4) {
        cout << "perulangan while:" << endl;
        x = rand() % 10;

        cout << "nilai X:" << x << endl;
    }
}