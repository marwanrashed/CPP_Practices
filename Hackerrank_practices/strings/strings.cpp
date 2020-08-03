#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    cout << a+b << endl;

    string a_new, b_new;
    char a_temp, b_temp;
    
    a_temp = a[0];
    b_temp = b[0];

    a[0] = b_temp;
    b[0] = a_temp;

    cout << a << " " << b;
    return 0;
}
