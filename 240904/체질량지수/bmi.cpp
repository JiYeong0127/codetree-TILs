#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout<<fixed;
    int h, w;
    cin>> h>>w;
    int b= (10000*w)/(h*h);
    cout.precision(1);
    if(b>=25){
        cout<< b<<endl;
        cout<<"Obesity";
    }else{
        cout<<b;
    }

    return 0;
}