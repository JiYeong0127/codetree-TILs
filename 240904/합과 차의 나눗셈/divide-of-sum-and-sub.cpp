#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout<<fixed;
    int a, b;
    cin>> a >>b;
    cout.precision(2);
    cout<< (double)(a+b)/(a-b);
    return 0;
}