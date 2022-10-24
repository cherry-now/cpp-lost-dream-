#include<iostream>
using namespace std;

int cnt = 0; 
bool isn_prime[100000005]; 

int main()
{

	int num;
	cin >>num;
	cnt = num-1;
	for(int i =2;i*i<=num;i++)  
	{
		if(isn_prime[i] == 0)
		{
			int temp = i+i;
			for(;temp <= num;temp+=i)
			{
				if(isn_prime[temp] == 0)
				{
					isn_prime[temp] = 1;
					cnt--;	
				}
			}
		} 

	}

	cout<<cnt;
	return 0;
}

