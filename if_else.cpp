#include <iostream>

using namespace std;

int main(){
  int age = 124;

  if (age > 60) {
    if (age > 100) {
      cout << "why are you still alive?" << endl;
    }
  }
  else {
    cout << "you are young, get a job" << endl;
  }
  return 0;
}