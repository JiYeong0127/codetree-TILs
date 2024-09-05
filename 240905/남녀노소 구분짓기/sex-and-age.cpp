#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int g, a;
    cin>> g>>a;
    if(g == 0 && a >=19){
        cout<<"MAN";
    }else if(g == 0 && a < 19)
        cout<<"BOY";

    if(g==1 && a>=19){
        cout<<"WOMAN";
    }else if(g==1 && a < 19)
    cout<<"GIRL";
    return 0;
}