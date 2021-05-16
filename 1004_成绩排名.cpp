/***********************************************
 > @Time       : 2021-5-17
 > @Author     : lpdbbbb
 > @File       : 1004.cpp
 > @Software   : vscode
 > @type       : pat practice
************************************************/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef struct s{
    string name;
    string ID;
    int grade;
}student;

int main(){
    int allNum;
    cin >> allNum;//学生总数
    vector<student> vec_student;//对象为学生类的容器
    while(allNum--){
        student stu;
        cin >> stu.name >> stu.ID >> stu.grade;
        vec_student.push_back(stu);
    }//导入学生信息
    
    //找出最大索引和最小索引
    int min_position = 0, max_position = 0;
    for(int i = 1; i < vec_student.size(); i++){
        if(vec_student[i].grade < vec_student[min_position].grade)
            min_position = i;
        if(vec_student[i].grade > vec_student[max_position].grade)
            max_position = i;
    }
    cout << vec_student[max_position].name << ' ' << vec_student[max_position].ID << endl;
    cout << vec_student[min_position].name << ' ' << vec_student[min_position].ID << endl;
    
    system("pause");
    return 0;
}


