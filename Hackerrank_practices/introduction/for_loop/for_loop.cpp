#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    unordered_map<int,string> numeric_map({{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}});

    std::unordered_map<int,string>::iterator it;

for (int i = a ; i <= b ; i++ ){
    it = numeric_map.find(i);
    if (it != numeric_map.end())
        {
          cout << it->second << endl;
        }
     else if (i > 9 && i%2 ==0) {
	cout << "even" << endl;
        
        }
     else {
         cout << "odd" << endl;
}

}
    return 0;
}


