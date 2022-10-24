#include<iostream>

using namespace std;
int n;
int a[55][55];
int main()
{   
 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i][1]=1;
		a[i][i]=1;
			for(int j=1;j<=i;j++)
			{
		       
		        {
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				}
				cout<<a[i][j]<<" ";
			}
		cout<<"\n";
	}

    
	return 0;
}
