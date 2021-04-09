#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
string a="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string d="0123456789";

int main()
{
	faster();
	string s, c="";
	int k; 
	cin >> s;
	cin >> k;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i] <= 'Z')
			c+= a[(a.find(s[i])+k) % 52];
		else
			c+= d[d.find(s[i]+ (k%10))];
	}
	cout << c;	
	return 0;
}


