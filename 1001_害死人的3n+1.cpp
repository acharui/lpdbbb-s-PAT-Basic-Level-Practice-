/***********************************************
 > @Time       : 2021-5-16
 > @Author     : lpdbbbb
 > @File       : 1001.cpp
 > @Software   : vscode
 > @type       : pat practice
************************************************/
#include<iostream>

int main(){
    int data, time;
    std::cin >> data;
    for(time = 0; data != 1; time++){
        if(data % 2 == 0){
            data /= 2;
        }
        else{
            data = (3*data+1)/2;
        }
    }
    std::cout << time;

    system("pause");
    return 0;
}
