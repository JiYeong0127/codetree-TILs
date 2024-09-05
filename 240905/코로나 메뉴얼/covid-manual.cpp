#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char s;
    int t;
    int h =0;
    cin>> s>> t;
    if(s =='Y'){
        if(t >= 37){
            h += 1;   
        }
    }else{
        h += 0;
    }
    char Ss;
    int St;
    cin>> Ss>> St;
    if(Ss =='Y'){
        if(St >= 37){
            h += 1;   
        }
    }else{
        h += 0;
    }

    char Ts;
    int Tt;
    cin>> Ts>> Tt;
    if(Ts =='Y'){
        if(Tt >= 37){
            h += 1;   
        }
    }else{
        h += 0;
    }

    if(h>=2)
    cout<<'E';
    else
    cout<<'N';

    return 0;
}