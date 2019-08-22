#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		std::vector<int> a(3);
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		std::sort(a.begin(), a.end());
		std::cout<<"Case "<<i<<": "<<a[1]<<std::endl;
	}
	return 0;
}