#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	vector<string> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<string> s(16);
	s[0]="Happy";
	s[1]="birthday";
	s[2]="to";
	s[3]="you";
	s[4]="Happy";
	s[5]="birthday";
	s[6]="to";
	s[7]="you";
	s[8]="Happy";
	s[9]="birthday";
	s[10]="to";
	s[11]="Rujia";
	s[12]="Happy";
	s[13]="birthday";
	s[14]="to";
	s[15]="you";
	if(n<=16){
		for(int i=0;i<16;i++){
			cout<<a[i%n]<<": "<<s[i]<<endl;
		}
	}
	else{
		int temp=n+(16-(n%16));
		for(int i=0;i<temp;i++)
			cout<<a[i%n]<<": "<<s[i%16]<<endl;
	}
	return 0;
}