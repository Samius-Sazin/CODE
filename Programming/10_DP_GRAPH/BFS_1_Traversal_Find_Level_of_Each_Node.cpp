#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector <int> g[N];

bool visited[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);

    visited[source] = true;

    while(!q.empty()){
        int front_vertex = q.front();

        // //Print the order
        // cout << front_vertex << " ";
        
        q.pop();
        for(int child: g[front_vertex]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[front_vertex] + 1;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter Number of Node of Tree : ";
    cin >> n;

    // Input Vertices/ edge
    cout << "Enter Vertices : \n";
    for(int i=1; i<n; i++){
        int u , v; cin >> u >> v;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    bfs(1);

/* 
    //Printing the Level of each Node
    for(int i=1; i<=n; i++){
        cout << "Node " << i << " :: Level " << level[i] << endl;
    }*/
}

/*
// Input
Enter Number of Node of Tree : 7
Enter Vertices : 
1 2 
1 3
2 4
3 7
4 5
4 6

// Output
// Print the order
1 2 3 4 7 5 6 

// Level
Node 1 :: Level 0
Node 2 :: Level 1
Node 3 :: Level 1
Node 4 :: Level 2
Node 5 :: Level 3
Node 6 :: Level 3
Node 7 :: Level 2
*/