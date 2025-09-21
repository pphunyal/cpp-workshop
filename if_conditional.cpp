#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter age!" << endl;
    cin >> age;

    if (age >= 18) {
        cout << "Adult" << endl;
    }
    else {
        cout << "Not Adult" << endl;
    }

    return 0;
}