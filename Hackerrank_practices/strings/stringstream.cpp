#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    char ch;
    int a; 
    vector <int> vec_int;
    stringstream s (str);
    while(s) {
        s >> a >> ch;
         vec_int. push_back(a);
    } 
    return vec_int;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
