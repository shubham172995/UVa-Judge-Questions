#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long int acc=0;
	while(t--){
		cin.ignore();
		string s;
		cin>>s;
		if(s=="donate"){
			int temp;
			cin>>temp;
			acc+=temp;
		}
		else if(s=="report"){
			cout<<acc<<endl;
		}
	}
	return 0;
}