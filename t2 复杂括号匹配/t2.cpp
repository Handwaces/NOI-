//{=1 [=2 (=3
#include<iostream>
#include<cstdio>
using namespace std;

int stack[50001],ptr=0;

void push(int t)
{
	stack[ptr]=t;
	ptr++;
}

int pop()
{
	ptr--;
	return stack[ptr+1];//不能漏了+1 一定先--然后return 
}

int main()
{
	char s[50001];
	int t;
	cin>>t;
	cin>>s;
	
	for(int i=0;i<t;i++)
	{
		switch(s[i])
		{
			case '(':
				push(3);
				break;
			case '[':
				push(2);
				break;
			case '{':
				push(1);
				break;
			case '}':
				if(pop()!=1)
				{
					cout<<"No";
					return 0;
				}
				break;
			case ']':
				if(pop()!=2)
				{
					cout<<"No";
					return 0;
				}
				break;
			case ')':
				if(pop()!=3)
				{
					cout<<"No";
					return 0;
				}
				break;
		}
	}
	cout<<"Yes";
	return 0;
}
