/***********************************************
 > @Time       : 2021-5-17
 > @Author     : lpdbbbb
 > @File       : 1007.cpp
 > @Software   : vscode
 > @type       : pat practice
************************************************/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int number;
    cin >> number;
    int pre=1, now, j;
    int cnt = 0;
    bool prime;
    for(now = 2; now < number; now++){
        prime = true;
        for(j = 2; j <= sqrt(now); j++){
            if(now % j == 0){
                prime = false;
                break;
            }  
        }
        if(prime == true){
            if(now-pre == 2){
               cnt++; 
            }
            pre = now;//pre为上一个质数，now为当前素数
        }
    }
    cout << cnt << endl;

    system("pause");
    return 0;
}
