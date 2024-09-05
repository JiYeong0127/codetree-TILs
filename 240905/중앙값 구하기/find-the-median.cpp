#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
  int a, b, c;
cin >> a >> b >> c;

if ((b > a && a > c) || (c > a && a > b)) {
    cout << a;
}
if ((a > b && b > c) || (c > b && b > a)) {
    cout << b;
}
if ((a > c && c > b) || (b > c && c > a)) {
    cout << c;
}

    
    return 0;
}