#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector <int> g[N];

int even_node[N];

void dfs(int vertex, int parent=0){
    
    //identify even node of current vertex
    if(vertex % 2 == 0){
        even_node[vertex] = 1;
    }

    for(int child: g[vertex]){
        if(child == parent) continue;;
        dfs(child, vertex);

        //identify even node from child nodes
        even_node[vertex] += even_node[child];
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

    dfs(1);
/* 
    cout << "Enter Query Number : ";
    int query; cin >> query;
    while(query--){
        cout << "Enter vertex Value to find number of even nodes of that vertex : ";
        int ver; cin >> ver;
        cout << "Even Node Number : " << even_node[ver] << endl;
    } */
    cout << "Number of Even nodes from each vertex towards its child : \n";
    for(int i=1; i<=n; i++){
        cout << i << " = " << even_node[i] << endl;
    }
}

/*
input
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

//output
Number of Even nodes from each vertex towards its child :
1 = 6
2 = 4
3 = 2
4 = 2
5 = 3
6 = 1
7 = 0
8 = 2
9 = 0
10 = 1
11 = 0
12 = 1
13 = 0
*/