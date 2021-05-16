/***********************************************
 > @Time       : 2021-5-17
 > @Author     : lpdbbbb
 > @File       : 1006.cpp
 > @Software   : vscode
 > @type       : pat practice
************************************************/
#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    uint16_t bai = num / 100;
    uint16_t shi = num / 10 % 10;
    uint16_t ge = num % 10;

    while(bai--)
        cout << 'B';
    while(shi--)
        cout << 'S';
    for(int i = 1; ge > 0; ge--){
        cout << i;
        i++;
    } 

    cout << endl;
    system("pause");
    return 0;
}
