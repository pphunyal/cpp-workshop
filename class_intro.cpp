#include <iostream>
using namespace std;

class BuckyClass {
    public:
        void coolSaying() {
            cout << "preachin to the choir" << endl;
        }
};

int main()
{
    BuckyClass buckyObject;
    buckyObject.coolSaying();
    return 0;
}