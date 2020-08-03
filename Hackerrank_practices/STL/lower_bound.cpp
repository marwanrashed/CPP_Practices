#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,n;
    vector<int> sorted_v;
    int n_queries , val;
    cin >>  N;
    for (int i=0; i< N ; i++){
        cin >> n;
        sorted_v.push_back(n);
    }
    cin >> n_queries;
    for (int i=0 ; i< n_queries; i++){
        cin >> val;

        auto low = lower_bound(sorted_v.begin(),sorted_v.end(), val);

        if (sorted_v[(low - sorted_v.begin()) ] == val )
            cout << "Yes" << " " << (low - sorted_v.begin()) +1 << endl;
        else    
            cout << "No" << " " << (low - sorted_v.begin()) +1 << endl;




    }

    return 0;
}

