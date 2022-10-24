#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int x)
{
	bool flag=false;//变量的作用域，本次函数内有效
	int j=2;
	//根据质数定义判断质数
	while(j<=sqrt(x))
	{
		if(x%j==0)
		{
			flag=true;
			break;
		}
		j++;
	}
	return flag;
}

int main()
{
	int n;	
	cin>>n;	
	for(int i=2;i<=n;i++)
	{

		if(!isprime(i))
		printf("%d ",i);
		//cout<<i<<'\n';
	}


	return 0;
}
