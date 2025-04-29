#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector < int > ghp[N];

bool viewedList[N];

void dfs(int vertex){
    //code for, take action on Vertex after entering the vertex
    viewedList[vertex] = true;

    for(int child : ghp[vertex]){
        //code for, take action on childNode, before entering the node
        if(viewedList[child]) continue; 

        //calling dfs
        dfs(child);

        //code for, take action on childNode, after exiting the node
    }

    //code for, take action on Vertex after exiting the vertex
    
}

int main(){
    //v->vertex, e->edge
    int v, e;
    cout << "Enter Number of Vertices : ";
    cin >> v;
    cout << "Enter Number of Edge : ";
    cin >> e;

    cout << "Enter Connections : " << endl;
    for(int i=0; i<e; i++){
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;

        ghp[vertex1].push_back(vertex2);
        ghp[vertex2].push_back(vertex1);
    }

    dfs(1);
}