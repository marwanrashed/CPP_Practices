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
vector<int> v;
for (int i =0; i<N; i++){
cin >> n;
v.push_back(n);
}
int q  , q1, q2;

cin >> q;
v.erase(v.begin()+q-1);
cin >> q1 >> q2;

v.erase (v.begin()+q1-1, v.begin()+q2-1);
cout << v.size() << endl;
for (auto i : v)
	cout << i << " ";    
cout << endl;   
 return 0;
}

