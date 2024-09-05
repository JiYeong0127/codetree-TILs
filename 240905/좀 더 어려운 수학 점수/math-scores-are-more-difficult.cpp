#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aE, aM, bE, bM;
    cin>> aM>>aE>>bM>>bE;
    
     if (aM == bM) {
     if (aE > bE) {
         cout << 'A';
     }
     else
         cout << 'B';
 }

 if (aM > bM) {
     cout << 'A';
 }
 else
 {
     cout << 'B';
 }

    return 0;
}