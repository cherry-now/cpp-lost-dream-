#include<iostream>
using namespace std;
int mul(int x)
{
	if(x==0) 
	return 1;
	else
	return x*mul(x-1);
	
}
int main()
{
	int n;
	cin>>n;
    cout<<mul(n);
	return 0;
}
