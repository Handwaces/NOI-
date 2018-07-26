#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

void gendata(int size)
{
	for(int i=0;i<size;i++)
	{
		
		bool a=rand()%3;
		if(a==false)
		{
			if(a==1) putchar('(');
			else putchar(')');
		}
		else putchar((char)rand()%10+48);
	}
}

int main()
{
	srand(time(NULL));
	int t=10;
	char infn[100]="\0",outfn[100]="\0",cmd[100]="\0";
	for(int i=11;i<=20;i++)
	{
		sprintf(infn,"in%d.txt",i);
		freopen(infn,"w",stdout);
		//gendata(i*5000);
		freopen("CON","w",stdout);
		cout<<"Finish gen:#"<<i<<endl;
	} 
}
