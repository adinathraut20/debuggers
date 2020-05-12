#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int j=0,c=0;
	for(int i=0;i<6;i++)
	{
		for(j=0;j<(2*i+1);j++)
		{
			if(i%2==0)
			{
				cout<<abs(c--);
			}
			else{
				cout<<abs(c++);
			
			}
		}
		cout<<endl;
	}
	c=c-1;
	for(int i=4;i>=0;i--)
	{
		for(j=0;j<(2*i+1);j++)
		{
			if(i%2==0)
			{
				cout<<abs(--c);
			}
			else{
				cout<<abs(++c);
			}
		}
		cout<<endl;
	}
return 0;
}

