#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	char s[50001];
	cin>>t;
	cin>>s;
	//gets(s);
	
	int k=0;
	for(int i=0;i<t;i++)
	{
		if(s[i]=='(') k++;
		if(s[i]==')') k--;
	}
	
	if(k!=0) cout<<"No";
	else cout<<"Yes";
	
	return 0;
}
