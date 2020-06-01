#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int n=s.length();
		if(s=="1"||s=="78"||s=="4")
			cout<<"+\n";
		else if(s[n-1]=='5'&&s[n-2]=='3')
			cout<<"-\n";
		else if(s[0]=='9'&&s[n-1]=='4')
			cout<<"*\n";
		else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
			cout<<"?\n";
		else cout<<"+\n";
	}
	return 0;
}