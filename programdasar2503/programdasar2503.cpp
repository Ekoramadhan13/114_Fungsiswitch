#include <iostream>
using namespace std;

int a, b;

void input()
{
	cout << "Bilangan pertama = ";
	cin >> a;
	 
	cout << "Bilangan kedua = ";
	cin >> b;
}

int penjumlahan(int bil_1, int bil_2)
{
	return bil_1 + bil_2;
}

	int pengurangan(int bil_1, int bil_2)
{
		return bil_1 + bil_2;
}
	int perkalian(int bil_1, int bil_2)
{
		return bil_1 + bil_2;
}
	int pembagian(int bil_1, int bil_2)
{
		return bil_1 + bil_2;
}
	int main()
	{
		int pilihan;

		do {
			system("cls");
			cout << "======= menu ========" << endl;
			cout << "1.penjumlahan" << endl;
			cout << "2.pengurangan" << endl;
			cout << "3.perkalian" << endl;
			cout << "4.pemmbagian" << endl;
			cout << "5.keluar" << endl;
			cout << "Masukan menu yang ingin dipilih (1/2/3/4/5): ";
			cin << pilihan;

	

