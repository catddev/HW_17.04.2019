#include"function.h"

int main() {
	setlocale(LC_ALL,"ru");
	ifstream in_file("in.txt");
	Auto a[3];
	Picture p[3];

	for (int i = 0; i < 3; i++)
		in_file >> a[i];
	
	in_file.ignore();//обязательно игнор, ведь перед гетлайнами идет цикл с простыми cin (in_file которые)
	for (int i = 0; i < 3; i++)
		in_file >> p[i];
	
	cout << "Automobiles" << endl;
	for (int i = 0; i < 3; i++)
		cout << a[i];

	cout << endl << endl << "Picture" << endl;
	for (int i = 0; i < 3; i++)
		cout << p[i];  //!!!!!!!!! не забывать при выводе русского текста в консоль setlocale!

	system("pause");
	return 0;
}