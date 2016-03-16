# include <vector>
# include <iostream>

using namespace std;


int main() {

	vector<int> col {1, 2, 3, 4, 5, 6, 7, 8, 9};

	size_t c;
	int sum = 0;
	c = count_if(col.begin(), col.end(), [=](int x) mutable { sum += x;});
	cout << "integers that are even " << c << endl;
}