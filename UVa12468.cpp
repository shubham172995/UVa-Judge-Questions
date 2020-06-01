#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int a, b;
		cin>>a>>b;
		if(a==-1&&b==-1)
			break;
		int min=INT_MAX;
		if(a>b){
			min=a-b;
			min=min<(b+100-a)?min:(b+100-a);
		}
		else{
			min=b-a;
			min=min<(a+100-b)?min:(a+100-b);
		}
		cout<<min<<endl;
	}
	return 0;
}