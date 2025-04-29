/*
Find maximum product prossible of sum of weights of nodes
in the two subtrees formed by deleting an edge.
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int MODULO = 1e9 + 7;
//Vector to store graph
vector <int> g[N];
//array to storeweight of each node of graph
int weight[N];
//array to store the subtree sum from each node
int subtree_sum[N];

//dfs fumction for subtree sum
void dfs(int vertex, int parent=0){
    subtree_sum[vertex] = weight[vertex];
    
    for(int child: g[vertex]){
        if(child == parent) continue;

        dfs(child, vertex);

        subtree_sum[vertex] += subtree_sum[child];
    }
}

int main(){
    int n;
    cout << "Enter Number of Node of Tree : ";
    cin >> n;


    //taking weight input
    cout << "Enter Weight of each Node : ";
    for(int i=1; i<=n; i++){
        cin >> weight[i];
    }

    // Input Vertices/ edge
    cout << "Enter Vertices : \n";
    for(int i=1; i<n; i++){
        int u , v; cin >> u >> v;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    
    // calling dfs function for subtree sum
    dfs(1);

    // finding maximum product of sum of weights of nodes
    // in the two subtrees formed by deleting an edge
    long long maximum_product = 0;
    for(int i=2; i<=n; i++){
        int part1_sum = subtree_sum[i];
        int part2_sum = subtree_sum[1] - part1_sum;
        maximum_product = max(maximum_product, (part1_sum * part2_sum * 1ll) % MODULO);
    }

    cout << "Maximum Product of sum of 2 subtree : " << maximum_product << endl;
}

/*
// Input
Enter Number of Node of Tree : 4
Enter Weight of each Node : 10 5 12 6
Enter Vertices : 
1 2
1 4
4 3

//Output
Maximum Product of sum of 2 subtree : 270
*/