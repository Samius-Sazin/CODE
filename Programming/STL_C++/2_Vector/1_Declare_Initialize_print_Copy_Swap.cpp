#include <bits/stdc++.h>
using namespace std;

//Declare
//initialize
//print
//print iterator way
//print iterator way
//Declare & initialize Another way
//Copy 2 vectors (copy the vector way)
//copy 2 vectors (reference way)
//Swap 2 vectors
//string type vector
//reverse & sort a vector



//Function that print a vector with normal iterator method
void print_vector(vector<int> &v);//pass by reference
void print_string_vector(vector<string> &vs);//pass by reference

int main()
{
    //Declare
    //vector < Data_Type > var_name;
    vector<int>v;

    //initialize
    v.push_back(2); //2
    v.push_back(4); //2, 4
    v.push_back(9); //2, 4, 9

    v.pop_back(); //2, 4

    v.push_back(6); //2, 4, 6




    //print
    cout << v[0] << " " << v[1] << " " << v[2] << endl; //2,4,6

    //another way to print
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //another way to print, iterator way
    vector<int>::iterator it;
    for(it=v.begin(); it<v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;




    //Declare Another way
    vector<int>v1(5);
    print_vector(v1);
    // // // // Vector Size : 5 || 0 0 0 0 0 

    vector<int>v2(5, 2);
    print_vector(v2);
    // // // // Vector Size : 5 || 2 2 2 2 2 

    v2.push_back(9);
    print_vector(v2);
    // // // // Vector Size : 6 || 2 2 2 2 2 9 





    //Copy v1, v2 vector
    //in case of copy 2 vectors size doesn't mattter

    //copy v2->v1, O(n) time complexity
    v1 = v2;//size of v1 changed 5 to 6.
    print_vector(v1);
    // // // // Vector Size : 6 || 2 2 2 2 2 9 

    //copy v8->v9, reference way
    vector<int> v8(3, 5);//v8 size=3 || 5,5,5
    vector<int> &v9 = v8;//v8 & v9 is now pointing to the same vector 





    //Swap v3, v4 vectors
    ////in case of copy 2 vectors size doesn't mattter
    vector<int>v3(3, 2); //v3 size=3 || 2,2,2
    vector<int>v4(5, 3); //v4 size=5 || 3,3,3,3,3
    swap(v3, v4);
    print_vector(v3); //V3 Size : 5 || 3 3 3 3 3 
    print_vector(v4); //V4 Size : 3 || 2 2 2 



    //String type vector
    vector<string> vs(3, "ss");
    print_string_vector(vs);
    // // // // Vector Size : 3 || ss ss ss

    vs.push_back("xyz");
    print_string_vector(vs);
    // // // // Vector Size : 4 || ss ss ss xyz




    //reverse & sort vector
    vector<int> vx; // Vector Size : 5
    vx.push_back(-1);
    vx.push_back(7);
    vx.push_back(3);
    vx.push_back(5);
    vx.push_back(1);

    print_vector(vx);// -1 7 3 5 1 
    
    reverse(vx.begin(), vx.end());
    print_vector(vx);// 1 5 3 7 -1

    sort(vx.begin(), vx.end());
    print_vector(vx);// -1 1 3 5 7 

    return 0;
}



//Function that print a vector with normal iterator method
void print_vector(vector<int> &v){
    cout << "Vector Size : " << v.size() << " || ";
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


//Function that print a vector with normal iterator method
void print_string_vector(vector<string> &vs)
{
    cout << "Vector Size : " << vs.size() << " || ";
    for(int i=0; i<vs.size(); i++)
    {
        cout << vs[i] << " ";
    }
    cout << endl;
}



/*
2 4 6
2 4 6 
2 4 6 

V1 Size : 5 || 0 0 0 0 0 
V2 Size : 5 || 2 2 2 2 2
V2 Size : 6 || 2 2 2 2 2 9 

copy v2 to v1:
V1 Size : 6 || 2 2 2 2 2 9

swap v3, v4:
V3 Size : 5 || 3 3 3 3 3 
V4 Size : 3 || 2 2 2 

String Vs Size : 3 || ss ss ss 
String Vs Size : 4 || ss ss ss xyz

Vx Size : 5 || -1 7 3 5 1 
Reversed Vx Size : 5 || 1 5 3 7 -1 
Sorted   Vx Size : 5 || -1 1 3 5 7 
*/