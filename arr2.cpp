#include<iostream>
using namespace std;
int main()
{
	int i,j,a[3][3],b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\tEnter a[i][j]:"<<i,j;
			cin>>a[i][j];
			cout<<"\tEnter b[i][j]:"<<i,j;
			cin>>b[i][j];
			
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\n\n";
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j];
		}
			cout<<"\t";
			for(j=0;j<3;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\t";
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j]+b[i][j];
		}
		
		
	}
	
	
}