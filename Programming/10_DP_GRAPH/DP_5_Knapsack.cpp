//Master Plan, DIU UTA Spring-23 on TOPH

#include<bits/stdc++.h>
using namespace std;

int ks[110][40];

void knapsack(vector <pair<int, int>> &v, int max_weight){
    for(int r=0; r<=v.size(); r++){
        int cc = 0;
        for(int c=0; c<=max_weight; c++){
            if(r==0) ks[r][c] = 0;
            else if(c == 0) ks[r][c] = 0;
            else if(v[r-1].second > c) ks[r][c] = ks[r-1][c];
            else ks[r][c] = max(ks[r-1][c], v[r-1].first + ks[r-1][cc++]);
        }
    }
}

int main(){
    //test case
    int t; cin >> t;

    while(t--){
        //Vector for store weight & profit
        int n; cin >> n;
        vector <pair<int, int>> v;
        for(int i=0; i<n; i++){
            int v1, v2; cin >> v1 >> v2;
            v.push_back({v1, v2});
        }

        //Multiple KS size
        int m; cin >> m;
        vector <int> vm;
        int max_Weight = -1;
        for(int i=0; i<m; i++){
            int val; cin >> val;
            max_Weight = max(max_Weight, val);
            vm.push_back(val);
        }

        //Knapsack
        knapsack(v, max_Weight);

        //Calculaing maximum profit
        int max_profit = 0;
        for(int i=0; i<vm.size(); i++){
            max_profit += ks[v.size()][vm[i]];
        }

        cout << max_profit << endl;
    }
}