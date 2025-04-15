#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    for (i = 1; i <= 100; i += 2) {
        cout << i << endl;
    }
}
