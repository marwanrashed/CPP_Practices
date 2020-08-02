#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x;
    vector <int> a;
    cin >> n;
    for (int i = 0; i < n; i++ ){
        cin >> x;
        a.push_back(x);
    }
    /* The main code */
    reverse(a.begin(), a.end());
    for (auto i: a)
        cout << i << " ";
    return 0;
}

