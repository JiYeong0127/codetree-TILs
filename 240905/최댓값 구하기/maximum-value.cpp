#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin>> a>>b>>c;
    if(a>b && a>c){
        cout<<a;
    }else if(b>a && b>c){
        cout<< b;
    }else{
        cout<<c;
    }
    return 0;
}