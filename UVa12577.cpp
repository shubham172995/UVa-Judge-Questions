#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=1;
	while(1){
		string s;
		cin>>s;
		if(s=="*")
			break;
		if(s=="Hajj")
			printf("Case %d: Hajj-e-Akbar\n", i);
		else printf("Case %d: Hajj-e-Asghar\n", i);
		++i;
		cin.ignore();
	}
	return 0;
}