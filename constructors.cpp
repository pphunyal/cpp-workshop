#include <iostream>
#include <string>

using namespace std;

class BuckyClass {
    public:
        BuckyClass(string z) {
            setName(z);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name; 
};

int main(){
    BuckyClass bo("Lucky Bucky roberts");
    cout << bo.getName();
    return 0;
}