// Standard output stream COUT
// Output to a file
#include <iostream>
#include <fstream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Russian");
	ofstream f; // �������� �����
	f.open("MyFile.txt"); // ��������� ����� � ������
	f << "�������� ������ ��� �����";	// ����� � ����
	cout << "�������� ������ ��� ������";
	f.close(); // ��������� �����
	system("pause");
}
