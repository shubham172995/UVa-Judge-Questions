#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, char> m;
	m['A']='A'; m['B']=' ';
	m['C']=' '; m['D']=' ';
	m['E']='3'; m['F']=' ';
	m['G']=' '; m['H']='H';
	m['I']='I'; m['J']='L';
	m['K']=' '; m['L']='J';
	m['M']='M'; m['N']=' ';
	m['O']='O'; m['P']=' ';
	m['Q']=' '; m['R']=' ';
	m['S']='2'; m['T']='T';
	m['U']='U'; m['V']='V';
	m['W']='W'; m['X']='X';
	m['Y']='Y'; m['Z']='5';
	m['1']='1'; m['2']='S';
	m['3']='E'; m['4']=' ';
	m['5']='Z'; m['6']=' ';
	m['7']=' '; m['8']='8';
	m['9']=' ';
	string s;
	while(cin>>s){
		int l=s.length();
		string str=s;
		reverse(s.begin(), s.end());
		bool flag=true;
		int counter=0;
		for(int i=0;i<l;i++){
			if(s[i]==m[str[i]]&&s[i]==str[i]){
				++counter;
			}
			/*if(s[i]==str[i])
				++c;*/
		}
		if(counter==l){
			cout<<str<<" -- is a mirrored palindrome.\n\n";
			continue;
		}
		for(int i=0;i<l;i++){
			if(s[i]!=str[i]){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<str<<" -- is a regular palindrome.\n\n";
			continue;
		}
		flag=true;
		for(int i=0;i<l;i++){
			if(s[i]!=m[str[i]]){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<str<<" -- is a mirrored string.\n\n";
			continue;
		}
		cout<<str<<" -- is not a palindrome.\n\n";
	}
	return 0;
}