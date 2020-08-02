#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n_rows, queries, k_size,k_value,i_row, j_column;
    cin >> n_rows >> queries;
    vector<vector<int>> total_vector;
    for (int i = 0; i < n_rows; i++) {
	cin >> k_size;
	vector<int> inner_vector;
	for (int j  =0; j < k_size; j++){
	cin >> k_value; 
	inner_vector.push_back(k_value);
}
	total_vector.push_back(inner_vector);
}
	for (int k = 0; k < queries; k++) {
	cin >> i_row >> j_column;
	cout << total_vector[i_row][j_column] << endl;
}   
    return 0;
}
