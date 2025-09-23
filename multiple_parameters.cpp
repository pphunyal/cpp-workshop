#include <iostream>
using namespace std;

int addNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    cout << addNumbers(6, 7) << endl;
    return 0;
}