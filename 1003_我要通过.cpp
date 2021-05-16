/***********************************************
 > @Time       : 2021-5-17
 > @Author     : lpdbbbb
 > @File       : 1003.cpp
 > @Software   : vscode
 > @type       : pat practice
************************************************/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string keyStr;
    int dataNum;
    cin >> dataNum;
    bool returnWord;
    while(dataNum--){
        cin >> keyStr;
        returnWord = true;
        auto length = keyStr.size();
        int placeP = -1, placeT = -1;
        for(string::size_type i = 0; i < length; i++){
            if(keyStr[i] != 'P' && keyStr[i] != 'A' && keyStr[i] != 'T'){
                returnWord = false;
                break;
            }
            if(keyStr[i] == 'P')
                placeP = i;
            if(keyStr[i] == 'T')
                placeT = i;
        }
        if((placeP >= 0) && (placeT >= 0) && (placeT-placeP) > 1 && (returnWord == true)){
            if(placeP * ((placeT-placeP)-1) != (length - placeT - 1))
                returnWord = false;
        }
        else
            returnWord = false;
        if(returnWord == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}
