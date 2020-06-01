#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=1;
	while(1){
		string s;
		cin>>s;
		if(s[0]=='#')
			break;
		if(s=="HELLO")
			cout<<"Case "<<i<<": ENGLISH\n";
		else if(s=="HOLA")
			cout<<"Case "<<i<<": SPANISH\n";
		else if(s=="HALLO")
			cout<<"Case "<<i<<": GERMAN\n";
		else if(s=="BONJOUR")
			cout<<"Case "<<i<<": FRENCH\n";
		else if(s=="CIAO")
			cout<<"Case "<<i<<": ITALIAN\n";
		else if(s=="ZDRAVSTVUJTE")
			cout<<"Case "<<i<<": RUSSIAN\n";
		else cout<<"Case "<<i<<": UNKNOWN\n";
		++i;
	}
	return 0;
}