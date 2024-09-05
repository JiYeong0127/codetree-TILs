#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int min, fin;
    cin>> min>>fin;

    if(min>=90 && fin>= 95){
            cout<<100000;
    }else if(min>=90 && fin>=90){
            cout<<50000;
    }else
    cout<<0;

    return 0;
}