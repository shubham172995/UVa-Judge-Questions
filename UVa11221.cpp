#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	scanf("%d", &n);
	getc(stdin);
	int c=1;
	while(c<=n){
		getline(cin, s);
		string str="";
		//reverse(s.begin(), s.end());
		for(int i=0;i<s.length();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				str+=s[i]+32;
			}
			else if(s[i]=='.'||s[i]=='!'||s[i]=='?'||s[i]==','||s[i]==' '||s[i]=='('||s[i]==')')
				continue;
			else str+=s[i];
		}
		s=str;
		int l=s.length();
		int k=sqrt(l);
		if(k*k!=l){
			cout<<"Case #"<<c<<":\nNo magic :(\n";
			++c;
			continue;
		}
		string a, b, d, e;
		a=b=d=e="";
		for(int i=0;i<k;i++){
			a+=s[i];
			b+=s[k*i];
			d+=s[l-i-1];
			e+=s[l-1-(i*k)];
		}
		//cout<<a<<endl<<b<<endl<<d<<endl<<e<<endl;
		if(a==b&&b==d&&d==e)
			cout<<"Case #"<<c<<":\n"<<k<<endl;
		else cout<<"Case #"<<c<<":\nNo magic :(\n";
		++c;
	}
	return 0;
}