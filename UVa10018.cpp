#include<bits/stdc++.h>
using namespace std;

long long int rev(long long int a){
	long long int temp=0;
	while(a){
		int t=a%10;
		temp=(temp*10)+t;
		a/=10;
	}
	return temp;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		long long int p;
		cin>>p;
		long long int r=rev(p);
		int it=0;
		while(r!=p){
			++it;
			p+=r;
			r=rev(p);
		}
		cout<<it<<" "<<p<<endl;
	}
	return 0;
}