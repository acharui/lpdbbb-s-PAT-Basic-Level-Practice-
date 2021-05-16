#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec_num, vec_initialNum, vec_nowNum;
    unsigned int all_num;
    try{
        cin >> all_num;
        if(all_num < 0)
            throw "nonnegative";
        while(all_num--){
            unsigned int num;
            cin >> num;
            if(num <= 0)
                throw "positive";
            vec_initialNum.push_back(num);
            while(num != 1){
                if(num % 2 == 0){
                    num /= 2;
                    vec_num.push_back(num);
                }
                else{
                    num = (3*num+1)/2;
                    vec_num.push_back(num);
                }
            }
        }
        bool flag;
        for(auto x : vec_initialNum){
            flag = true;
            for(auto y : vec_num){
                if(x == y && flag == true){
                    flag = false;
                } 
            }
            if(flag == true)
                vec_nowNum.push_back(x);
        }
    }
    catch(string s){
        cout << "num error:input a "  << s <<  " number." << endl;
    }

    sort(vec_nowNum.begin(), vec_nowNum.end());
    for(auto i = vec_nowNum.size(); i > 0; i--){
        cout << vec_nowNum[i-1];
    }

    system("pause");
    return 0;
}