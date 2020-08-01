#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    unordered_map<int,string> numeric_map({{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}});
   
    std::unordered_map<int,string>::iterator it;
    
    it = numeric_map.find(n);

    if (it != numeric_map.end())
	{
 	  cout << it->second << endl;
	}
     else {
	cout << "Greater than 9" << endl;
	}
    

    return 0;
}

