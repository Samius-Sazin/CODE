#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

//Vector where Graph will be stored
vector <int> g[N];

//Visited Array
bool visitedArr[N];

//Vecctor where Connected Components(CC) will be stored
vector < vector<int> > cc;
vector < int > current_cc;

//DFS Part
void dfs(int vertex){
    if(visitedArr[vertex]) return;
    visitedArr[vertex] = true;

    //inserting visited nodes to current connected component 
    current_cc.push_back(vertex);

    for(int child: g[vertex]){
        dfs(child);
    }
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

    //pass all nodes to DFS function
    for(int i=1; i<=n; i++){
        if(visitedArr[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
    }

    cout << "Number of Connected Components : " << cc.size() << endl;
    for(auto i: cc){
        cout << "Connected Component : ";
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }

}