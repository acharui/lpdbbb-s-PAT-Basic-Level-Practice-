/***********************************************
 > @Time       : 2021-5-17
 > @Author     : lpdbbbb
 > @File       : 1008.cpp
 > @Software   : vscode
 > @type       : pat practice
************************************************/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int allnum, position, snum;
    cin >> allnum >> position;
    vector<int> vec_num;
    position %= allnum;//位置数大于总数的情况
    for(int i = 0; i < allnum; i++){
        cin >> snum;
        vec_num.push_back(snum);
    }

    int run_num;
    while(position--){
        run_num = vec_num[allnum-1];
        for(int run_position = allnum-1; run_position >= 0; run_position--){
            vec_num[run_position+1] = vec_num[run_position];
        }
        vec_num[0] = run_num;
    }
    
    for(int i = 0; i < allnum; i++){
        cout << vec_num[i];
        if(i < allnum-1)
           cout << ' ';
    }
    cout << endl;

    system("pause");
    return 0;
        
}