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
                break;//��������������ѭ��
            }  
		}
		if(prime == true)//���ǵ�i�Ǻ��������(j<sqrt(i))��ֻ��i������ʱ(j>sqrt(i))���ܽ��������
		{
			if(i-pre == 2) cnt++;
			pre=i;
		}
	}
	cout<<cnt<<endl;
	return 0;
 } 