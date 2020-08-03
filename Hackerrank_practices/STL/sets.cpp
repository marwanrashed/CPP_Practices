#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    enum  Queries {Add = 1, Delete = 2, Find = 3};

    int n_queries;
    cin >> n_queries;
    int x;
    int y;
    set<int> set_n;
    for (int i = 0 ; i < n_queries; i++){
        cin >> y >> x;
        switch (y) {
        case Add : set_n.insert(x);
        break;
        case Delete : set_n.erase(x);
        break;
        case Find : 
        set<int>::iterator itr= set_n.find(x);
        if (itr != set_n.end())
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
        break;        
        }

    }

    return 0;
}




