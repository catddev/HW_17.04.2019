#include"function.h"

int main() {

	ifstream in_file("in.txt");
	Auto a[];
	Picture p[];

	for (int i = 0; i < 6; i++)
		in_file >> a[i];

	for (int i = 0; i < 6; i++)
		cout << a[i] << endl;
	cout << endl;

	system("pause");
	return 0;
}