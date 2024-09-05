#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin>> a>>b>>c;

    if((a<b && a>c)|| (a<c && a>b)){
        cout<<a;
    }else if((a>b && b>c) || (c>b && b<a)){
        cout<<b;
    }else if((a>c && c>b) || (b>c && a<c)){
        cout<<c;
    }
    
    return 0;
}