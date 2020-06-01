#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		std::vector<int> a(n);
		int max=0, min=INT_MAX;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			max=max>a[i]?max:a[i];
			min=min<a[i]?min:a[i];
		}
		int ans=(max-min)*2;
		std::cout<<ans<<std::endl;
	}
	return 0;
}