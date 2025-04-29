#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector <int> g[N];

int subtree_sum[N];

void dfs(int vertex, int parent=0){
    //set the own node value to the sum
    subtree_sum[vertex] = vertex;

    for(int child: g[vertex]){
        if(child == parent) continue;;
        dfs(child, vertex);

        //get sum of childs of a node
        subtree_sum[vertex] += subtree_sum[child];
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
        cout << "Enter vertex Value to find its subtree sum : ";
        int ver; cin >> ver;
        cout << "Subtree Sum : " << subtree_sum[ver] << endl;
    } */
    cout << "Subtree Sum of vertex : \n";
    for(int i=1; i<=n; i++){
        cout << i << " = " << subtree_sum[i] << endl;
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
Subtree Sum of vertex : 
1 = 91
2 = 40
3 = 37
4 = 34
5 = 38
6 = 6
7 = 7
8 = 20
9 = 9
10 = 21
11 = 11
12 = 12
13 = 13
*/