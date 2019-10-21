#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		int l=s.length();
		set<string> a;
		int ans=0;
		for(int i=0;i<l;i++){
			a.insert(s.substr(i, 1));
		}
		for(int j=2;j<=l;j++){
			for(int i=0;i<=l-j;i++){
				string temp=s.substr(i, j);
				string temp1=temp;
				reverse(temp.begin(), temp.end());
				if(temp==temp1)
					a.insert(temp);
			}
		}
		cout<<"The string '"<<s<<"' contains "<<a.size()<<" palindromes."<<endl;
	}
	return 0;
}