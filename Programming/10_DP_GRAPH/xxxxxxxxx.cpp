#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
const ll N = 1e5 + 10;
vector <ll> graph[N];
ll parent[N];
bool visited[N];

void clear_graph_parent_visited(){
    for(ll i=0; i<N; i++){
        graph[i].push_back(0);
        parent[i] = 0;
        visited[i] = 0;
    }
}

void bfs(ll source){
    queue<ll> q;
    q.push(source);
    visited[source] = true;

    while(!q.empty()){
        ll front_vertex = q.front();
        
        q.pop();

        for(ll child: graph[front_vertex]){
            if(!visited[child]){
                visited[child] = true;
                q.push(child);
                parent[child] = front_vertex;
            }
        }
    }
}

int main(){
    ll t; cin >> t; 
    while(t--){
        clear_graph_parent_visited();

        ll start, end;
        cin >> n >> start >> end;
        ll arr[n+1][n+1];
        for(ll r=1; r<=n; r++){
            for(ll c=1; c<=n; c++){
                cin >> arr[r][c];
                if(arr[r][c]){
                    graph[r].push_back(c);
                    graph[c].push_back(r);
                }
            }
        }
        bfs(start);

        vector<ll> ans;
        for(ll i=end; i>0; i=parent[i]){
            ans.push_back(i);
        }

        reverse(ans.begin(), ans.end());

        ll i = 1;
        cout << "Case " << i++ << ":\n";
        cout << ans.size() - 2 << endl;
        // cout << "Shortest Path : ";
        for(ll i: ans){
            cout << i << " ";
        } cout << endl;
    }
}