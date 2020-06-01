#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<"Lumberjacks:\n";
	while(n--){
		vector<int> l(10);
		for(int i=0;i<10;i++){
			cin>>l[i];
		}
		int less, g;less=g=0;
		for(int i=0;i<9;i++){
			if(l[i]<=l[i+1])
				++less;
			else ++g;
		}
		if(less==0||g==0)
			cout<<"Ordered\n";
		else cout<<"Unordered\n";
	}
	return 0;
}