#include <iostream>
using namespace std;


#define mkstr(s1,s2) #s1 << " " << #s2
#define concat(s1,s2,s3) s1 ## s2 ## s3
int main() {
	setlocale(LC_ALL, "ru");
	
	int n = 15;
	cout << mkstr(������ , 1) << " = " << n << endl; // ������������ � ����� ��, ��� � �������

	int abc = 10;
	cout << concat(a, b, c) << endl;
	concat(a, b, c) = 15;
	cout << concat(a, b, c) << endl;



	return 0;
}