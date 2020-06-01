#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		printf("Case %d: ", j);
		int n;
		cin>>n;
		int mile, juice;
		mile=juice=0;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			mile+=((temp/30)+1)*10;
			juice+=((temp/60)+1)*15;
		}
		if(mile<juice)
			cout<<"Mile "<<mile<<endl;
		else if(juice<mile)
			cout<<"Juice "<<juice<<endl;
		else cout<<"Mile Juice "<<mile<<endl;
	}
	return 0;
}