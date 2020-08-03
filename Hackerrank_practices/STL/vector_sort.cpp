#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    int n;
    vector<int> Vecn;
    for (int i = 0 ; i < N; i++){
        cin >> n;
        Vecn.push_back(n);
    }
    sort(Vecn.begin(), Vecn.end());
    for (int i =0; i < Vecn.size(); i++)
        cout << Vecn[i] << " ";


    return 0;
}
