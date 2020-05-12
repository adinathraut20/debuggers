#include<iostream>
using namespace std;
class node{
	private:
	int d;
	node* n;
	public:
	node()
	{
		d=0;
		n=NULL;
	}
	node(int data)
	{
		d=data;
		n=NULL;
	}
	int getd()
	{
		return d;
	}
	node* getn()
	{
		return n;
	}
	void setn(node* N)
	{
		n=N;
	}
};
class linklist{
	private:
	node* head;
	public:
	linklist()
	{
		head=NULL;
	}
	void insertE(int d)
	{
		node* nd=new node(d);
		if(nd==NULL)
		return;
		if(head==NULL)
		{
			head=nd;
			return;
		}
		else{
			node* t=head;
			while(t->getn()!=NULL)
			{
				t=t->getn();
			}
			t->setn(nd);
		}
	}
	void Display()
	{
		if(head==NULL)
		return;
		node* t=head;
		while(t->getn()!=NULL)
		{
			cout<<t->getd()<<"->";
			t=t->getn();
		}
		cout<<t->getd()<<endl;
		return;
	}
	void Swap()
	{
		if(head==NULL || head->getn()==NULL)
		{
			return;
		}
		node* t=head;
		node* t1,*t2,*t3;
		t1=t;
		t=t->getn();
		if(t1->getn()->getn()==NULL)
		{
		t1->setn(NULL);
		t->setn(t1);
		head=t;
		}
		else{
			t1->setn(t->getn());
			t->setn(t1);
			head=t;
			t2=t1->getn();
		}
		while(t2->getn()!=NULL)
		{
			t3=t2;
			t2=t2->getn();
			t1->setn(t2);
			t=t2;
			t1=t3;
			if(t1->getn()->getn()==NULL)
			{
				t1->setn(NULL);
				t->setn(t1);
				return;
			}
			else{
				t1->setn(t->getn());
				t->setn(t1);
				t2=t1->getn();
			}
		}
	}
			
};
int main()
{
	linklist l;
	int n;
	cout<<"Enter no of nodes to insert: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		l.insertE(a);
	}
	l.Display();
	l.Swap();
	l.Display();
	return 0;
}
		

