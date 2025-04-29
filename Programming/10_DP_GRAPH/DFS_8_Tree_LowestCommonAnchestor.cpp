#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
//Vector to store the tree
vector <int> g[N];

//arraay to store parents of all nodes
int PARENT[N];

// DFS function to nd out the parents of each nodes
void dfs(int vertex, int parent=-1){
    // seting parents
    PARENT[vertex] = parent;

    for(int child: g[vertex]){
        if(child == parent) continue;
        dfs(child, vertex);
    }

}

//Function to find, all the parents nodes of a node.
vector <int> path_of_ancehstor(int vertex){
    vector <int> path;

    while(vertex != -1){
        path.push_back(PARENT[vertex]);
        vertex = PARENT[vertex];
    }
    reverse(path.begin(), path.end());
    return path;
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

    //Calling dfs to set parents to PARENT array
    dfs(1);

    //Taking input of 2 nodes, to find their Lowest Common Parent/Anchestor
    cout << "Enter 2 Nodes to Find Their LCA : ";
    int x, y;
    cin >> x >> y;

    //Calling Path_of_anchestor to find out all parent nodes of a node.
    vector <int> path_of_x = path_of_ancehstor(x);
    vector <int> path_of_y = path_of_ancehstor(y);

    //Find minimum length of bot path
    int min_length = min(path_of_x.size(), path_of_y.size());

    //Finding LCA
    int LCA = -1;
    for(int i=0; i<min_length; i++){
        if(path_of_x[i] == path_of_y[i]){
            LCA = path_of_x[i];
        }
        else{
            break;
        }
    }

    cout << "\nLowest Common Ancestor of " << x << " & " << y << " is : " << LCA << endl;
}

/*
//input 
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

Enter 2 Nodes to Find Their LCA : 8 11

//Output
Lowest Common Ancestor of 8 & 11 is : 1
*/