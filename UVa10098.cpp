#include <bits/stdc++.h>
using namespace std;

int t;
int i;
string sb;
int main()
{
	scanf("%d", &t);
	cin.ignore();
	while (t --)
	{
		cin>>sb;
		sort(sb.begin(), sb.end());
		cout<<sb<<endl;
		while(next_permutation(sb.begin(), sb.end()))
		{
			cout<<sb<<endl;
		}
		printf("\n");
	}
	return 0;
}

