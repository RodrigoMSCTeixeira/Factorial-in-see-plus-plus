#include <iostream>

using namespace std;

int main()
{

    int n, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 1)
    {
        cout << "Return n: " << n << endl;
        factorial *= n;
        n--;

        cout << "Return Factorial: " << factorial << endl;
    }

    cout << "The Factorial is: " << factorial << endl;

    return 0;
}