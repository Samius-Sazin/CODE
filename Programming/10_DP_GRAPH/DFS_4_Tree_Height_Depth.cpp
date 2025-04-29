#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector <int> g[N];

int height[N];
int depth[N];

void dfs(int vertex, int parent=0) {

    for(int child: g[vertex]){
        if(child == parent) continue;
        //set depth of child
        depth[child] = depth[vertex] + 1;
        //calling dfs again
        dfs(child, vertex);
        //set height of veretx, 
        height[vertex] = max(height[vertex], height[child]+1);
    }
}

int main(){
    int n;
    cout << "Enter Number of Node of Tree : ";
    cin >> n;

    cout << "Enter Vertices : \n";
    for(int i=1; i<=n-1; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);

    //Depth & Height
    cout << "Depth & Height of Vertex : \n";
    for(int i=1; i<=n; i++){
        cout << i << " d-> " << depth[i] << " h-> " << height[i] << endl;
    }
}
/*
// input
Enter Number of Node of Tree : 13
Enter Vertices : 
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11

//answer
Depth & Height of Vertex :
1 d-> 0 h-> 4
2 d-> 1 h-> 3
3 d-> 1 h-> 3
4 d-> 2 h-> 2
5 d-> 2 h-> 2
6 d-> 3 h-> 0
7 d-> 3 h-> 0
8 d-> 3 h-> 1
9 d-> 3 h-> 0
10 d-> 3 h-> 1
11 d-> 4 h-> 0
12 d-> 4 h-> 0
13 d-> 1 h-> 0
*/