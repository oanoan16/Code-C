#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int a=0,b=0,c,d=3600,e=3600;
	cin>>s1;
	cin>>s2;
	for (int i=0; i< s1.length(); i++)
	{
		if (s1[i]!=':')
		{
			string s="";
			stringstream ss;
			int j=0;
			while (s1[i]!=':' && s1[i]!='\0')
			{
				s.push_back(s1[i++]);
			}
			ss << s;
			ss >> c;
			a=a+d*c;
			d/=60;
		}
	}
	for (int i=0; i< s2.length(); i++)
	{
		if (s1[i]!=':')
		{
			string s="";
			stringstream ss;
			int j=0;
			while (s2[i]!=':' && s2[i]!='\0')
			{
				s.push_back(s2[i++]);
			}
			ss << s;
			ss >> c;
			b=b+e*c;
			e/=60;
		}
	}
  	if (a>=b)
  	{
	  	cout<<s1;
 	}
  	else cout<<s2;
}

