#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    enum  Queries {Add = 1, Erase = 2, Print = 3};

    int n_queries;
    cin >> n_queries;
    int x;
    string a;
    int y;
    std::map<string,int> map_student;
    for (int i = 0 ; i < n_queries; i++){
        cin >> y >> a;
        map <string, int>::iterator itr = map_student.find(a);
        switch (y) {
        case Add : 
        cin >> x;
        if (itr == map_student.end())
            map_student.insert(make_pair(a,x));
        else
            itr->second += x; 
        break;
        case Erase : 
        if(itr != map_student.end())
            map_student.at(a) = 0;
        break;
        case Print :
            if (itr != map_student.end()) 
                cout << itr->second << endl;
            else 
                cout << 0 << endl;
            
        break;
        }

    }
 
    return 0;
}

