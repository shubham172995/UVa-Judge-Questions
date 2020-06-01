#include<iostream>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long int a, b;
		scanf("%ld %ld", &a, &b);
		if(a<b)
			printf("<\n");
		else if(a>b)
			printf(">\n");
		else
			printf("=\n");
	}
	return 0;
}