#include<iostream>
#include<string>
using std::cout;
//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100
//这里要求的n过大，要用string来存储


int main(){
    std::string n;
    int num = 0;
    getline(std::cin, n);
    //getline函数可以读取整行，包括前导和嵌入的空格，并将其存储到字符串对象中
    //geiline(cin, inputline)   cin是正在读取的输入流，inputline是接收输入字符串的string变量的名称
    for(auto x:n){
        num += x - '0';
    }
    std::string sum_1 = std::to_string(num);
    for(auto it = sum_1.begin(); it != sum_1.end(); it++){
        switch(*it){
            case '1':cout<<"yi";break;
			case '2':cout<<"er";break;
			case '3':cout<<"san";break;
			case '4':cout<<"si";break;
			case '5':cout<<"wu";break;
			case '6':cout<<"liu";break;
			case '7':cout<<"qi";break;
			case '8':cout<<"ba";break;
			case '9':cout<<"jiu";break;
			case '0':cout<<"ling";break;
        }
        if(it != sum_1.end()-1)     cout << " ";
    }
    system("pause");
    return 0;
    
}