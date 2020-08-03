#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    cout << hex << left <<showbase << nouppercase << (long long) A << endl;
    cout << dec << right << fixed << showpos << setw(15) << setfill('_') << setprecision(2) << B <<endl;
    cout << scientific << noshowpos << uppercase <<setprecision(9) << left << C << endl;
	}
	return 0;

}
