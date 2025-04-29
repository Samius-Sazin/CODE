#include<bits/stdc++.h>
using namespace std;

int n;
const int N = 100 + 10;
vector <int> graph[N];
int parent[N];
int visited[N];

void clear_graph_parent_visited(){
    for(int i=0; i<110; i++){
        graph[i].push_back(0);
        parent[i] = 0;
        visited[i] = 0;
    }
}

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = true;

    while(!q.empty()){
        int front_vertex = q.front();
        
        q.pop();

        for(int child: graph[front_vertex]){
            if(!visited[child]){
                visited[child] = true;
                q.push(child);
                parent[child] = front_vertex;
            }
        }
    }
}

int main(){
    int t; cin >> t; 
    while(t--){
        clear_graph_parent_visited();

        int start, end;
        cin >> n >> start >> end;
        int arr[n+1][n+1];
        for(int r=1; r<=n; r++){
            for(int c=1; c<=n; c++){
                cin >> arr[r][c];
                if(arr[r][c]){
                    graph[r].push_back(c);
                    graph[c].push_back(r);
                }
            }
        }
        bfs(start);
        vector<int> ans;
        for(int i=end; i>0; i=parent[i]){
            ans.push_back(i);
        }

        reverse(ans.begin(), ans.end());

        int i = 1;
        cout << "Case " << i++ << ":\n";
        cout << ans.size() - 2 << endl;
        // cout << "Shortest Path : ";
        for(int i: ans){
            cout << i << " ";
        } cout << endl;
    }
}

/*
1
5 1 5
0 1 0 1 0
1 0 0 1 0
0 0 0 0 0
1 1 0 0 1
0 0 0 1 0
*/