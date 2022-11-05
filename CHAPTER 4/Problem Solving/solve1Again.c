// ! If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
// ! If n>9, print Greater than 9.
//
#include <iostream>
#include <string> // ? Not necessary ;
using namespace std;

int main()
{

    int i, n;

    string result;

    // string arr[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter The Number : ";

    cin >> n;

    // result = (n >= 1 && n <= 9) ? arr[n] : ((n <= 0) ? "Less than One" : "Greater than Nine");

    result = (n >= 1 && n <= 9) ? arr[n - 1] : ((n < 0) ? "Negative value" : ((n == 0) ? "It is Zero" : "Greater than Nine"));

    cout << result;
}