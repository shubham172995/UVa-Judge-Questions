#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int farmers;
		scanf("%d", &farmers);
		long int total=0;
		for(int i=0;i<farmers;i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			total+=a*c;
		}
		printf("%ld\n", total);
	}
	return 0;
}