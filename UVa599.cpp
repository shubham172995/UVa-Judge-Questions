#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
#define pool(i, a, b) for(int i=a;i>b;i--)
#define pooll(i, a, b) for(ll i=a;i>b;i--)
#define pb push_back
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef pair<ll, ll> llll;
typedef vector<llll> vll;
typedef vector<pair<int, ii> > EdgeList; //Edgelist representation of graphs to store an edge and weights for both directions, i.e., in an undirected graph.x

vector<vi> ugraph, dgraph;
vi color, depth, parent, d, f;
int n, tim;

void undirectedGraph(){
    loop(i, 0, n){
        int a, b;
        cin>>a>>b;
        ugraph[a].pb(b);
        ugraph[b].pb(a);
    }
}

void directedGraph(){
    loop(i, 0, n){
        int a, b;
        cin>>a>>b;
        ugraph[a].pb(b);
    }
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    color[s]=1;
    depth[s]=0;
    parent[s]=0;
    while(q.size()){
        int u=q.front();
        q.pop();
        loop(i, 0, ugraph[u].size()){
            if(color[ugraph[u][i]]==0){
                color[ugraph[u][i]]=1;
                depth[ugraph[u][i]]=depth[u]+1;
                parent[ugraph[u][i]]=u;
                q.push(ugraph[u][i]);
            }
        }
        color[u]=2;
    }
}

void dfsvisit(int u){
    color[u]=1;
    d[u]=++tim;
    loop(i, 0, ugraph[u].size()){
        if(color[ugraph[u][i]]==0){
            parent[ugraph[u][i]]=u;
            dfsvisit(ugraph[u][i]);
        }
        color[u]=2;
        f[u]=++tim;
    }
}

void dfs(){
    tim=0;
    loop(i, 0, n){
        if(color[i]==0)
            dfsvisit(i);
    }
}


int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string str;
        vector<string> s;
        while(1){
            cin>>str;
            if(str[0]=='*')
                break;
            s.pb(str);
        }
        cin>>str;
        color.resize(26);
        ugraph.resize(26);
        parent.resize(26);
        depth.resize(26);
        loop(i, 0, 26){
            color[i]=-1;
        }
        n=1;
        loop(i, 0, str.length()){
            if(str[i]==',')
                ++n;
            else{
                color[str[i]-'A']=0;
            }
        }
        loop(i, 0, s.size()){
            str=s[i];
            int a, b;
            a=str[1]-'A';
            b=str[3]-'A';
            ugraph[a].pb(b);
            ugraph[b].pb(a);
            color[a]=color[b]=0;
        }
        int acorn=0, tree=0;
        loop(i, 0, 26){
            if(color[i]!=0)
                continue;
            else if(color[i]==0&&ugraph[i].size()==0){
                ++acorn;
            }
            else if(color[i]==0&&ugraph[i].size()!=0){
                bfs(i);
                ++tree;
            }
        }
        printf("There are %d tree(s) and %d acorn(s).\n", tree, acorn);
        loop(i, 0, 26){
            ugraph[i].clear();
        }
    }
}