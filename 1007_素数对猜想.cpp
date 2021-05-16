#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int pre=2,cnt=0;
	int j;
	for(int i=2;i<=n;i++)
	{
        bool prime = true;
        int b = sqrt(i);
		for(j=2;j<=b;j++)
		{
			if(i%j==0){
                prime = false;
                break;//不是素数就跳出循环
            }  
		}
		if(prime == true)//考虑到i是合数的情况(j<sqrt(i))。只有i是素数时(j>sqrt(i))才能进这个括号
		{
			if(i-pre == 2) cnt++;
			pre=i;
		}
	}
	cout<<cnt<<endl;
	return 0;
 } 