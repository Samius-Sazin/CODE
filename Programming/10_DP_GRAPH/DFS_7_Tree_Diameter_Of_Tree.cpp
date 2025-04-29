/*
complexity : O(n)
Find Diameter of a tree:
Approach:
    -Select any node and calculate depth of all nodes
    -Select the node that has maximum depth
     and again find out maximum depth
     this maximum depth is the diameter
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
//Vector for store graph
vector <int> g[N];
//array for store depth of each node
int depth[N];

//DFS function, calculate depth of each node of a tree
void dfs(int vertex, int parent=0){

    for(int child: g[vertex]){
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1;

        dfs(child, vertex);
    }
}

int main(){
    int n;
    cout << "Enter Number of Node of Tree : ";
    cin >> n;

    cout << "Enter Vertices : \n";
    for(int i=1; i<n; i++){
        int u , v; cin >> u >> v;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    //call dfs from any node(we choose 1)to calculate the depth of all node
    dfs(1);

    //find out maximum depth & node that has maximum depth
    int max_depth = -1;
    int max_depth_node;
    for(int i=1; i<=n; i++){
        if(max_depth < depth[i]){
            max_depth = depth[i];
            max_depth_node = i;
        }
    }

    //reset all value of depth array to zero
    memset(depth, 0, sizeof(depth));

    //call dfs from node that has max depth
    dfs(max_depth_node);

    //Now this time, the depth of max_depth_node has maximum depth
    //And this the longest path of that tree
    //And Diameter is max Depth + 1
    int diameter = 0;
    for(int i=1; i<=n; i++){
        diameter = max(diameter, depth[i]);
    }
    cout << "\nLongest Path : " << diameter << endl;
    cout << "Diameter : " << diameter + 1 << endl;
}

/*
//Input :
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

//Output
Longest Path : 8
Diameter : 9
*/