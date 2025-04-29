#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
//Vector where Graph will be stored
vector < int > g[N];

//Visited Array
bool visitedArr[N];

bool dfs(int vertex, int parent){

    visitedArr[vertex] = true;
    bool isLoopExist = false;

    for(int child: g[vertex]){
        if(visitedArr[vertex] && child == parent) continue;

        if(visitedArr[vertex] && child != parent) return true;

        isLoopExist |= dfs(child, vertex);
    }

    return isLoopExist;
}

int main(){
    int n, e;
    cout << "Enter Number of Nodes : ";
    cin >> n;
    cout << "Enter Number of Edges : ";
    cin >> e;

    cout << "Enter Connections : \n";
    while(e--){
        int u, v; 
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // Here 1 is vertex, 0 is parent node
    bool isCycleExist = false;
    for(int i=1; i<=n; i++){
        if(visitedArr[i]) continue;
        if(dfs(i, 0)){
            isCycleExist = true;
            break;
        }
    }
    if(isCycleExist){
        cout << "Cycle Exist!!\n";
    } else{
        cout << "Cycle Not Exist\n";
    }
}