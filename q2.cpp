#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	char c[n][20];
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>s;
		strcpy(c[i],s.c_str());
		arr[i]=s.length();
	}
	char g[20];
	//cout<<g;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				
		strcpy(g,c[j]);
		strcpy(c[j],c[j+1]);
		strcpy(c[j+1],g);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<endl;
	}
return 0;
} 
