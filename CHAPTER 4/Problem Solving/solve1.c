// ! If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
// ! If n>9, print Greater than 9.

#include <iostream>
using namespace std;

int main()
{

    int i, n;

    string arr[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "Enter The Number : ";

    cin >> n;

    if (n >= 1 && n <= 9)
    {
        n -= 1;

        cout << arr[n];
    }
    else if (n <= 0)
    {
        cout << "Less than One";
    }
    else
    {
        cout << "Greater than Nine";
    }
}