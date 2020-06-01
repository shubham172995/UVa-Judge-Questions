#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		if(s=="DONE")
			break;
		string str="";
		//reverse(s.begin(), s.end());
		for(int i=0;i<s.length();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				str+=s[i]+32;
			}
			else if(s[i]=='.'||s[i]=='!'||s[i]=='?'||s[i]==','||s[i]==' ')
				continue;
			else str+=s[i];
		}
		s=str;
		reverse(s.begin(), s.end());
		if(s==str)
			cout<<"You won't be eaten!\n";
		else
			cout<<"Uh oh..\n";
	}
	return 0;
}