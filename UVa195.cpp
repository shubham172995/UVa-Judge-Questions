#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

bool comparator(char a, char b){
	if(tolower(a)==tolower(b))
		return a<b;
	return tolower(a)<tolower(b);
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		string s;
		cin>>s;
		string temp=s;
		sort(temp.begin(), temp.end(), comparator);
		bool flag=true;
		while(flag){
			cout<<temp<<endl;
			flag=next_permutation(temp.begin(), temp.end(), comparator);
		}
	}
	return 0;
}