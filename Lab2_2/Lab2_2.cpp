#include <iostream>
#include<locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "\n Введите трёхзначное число";
	cin >> a;
	int sot = a / 100;
	int des = a / 10 % 10;
	int ed = a % 10;
	int b = sot;
	sot = des;
	des = b;
	sot = sot * 100;
	des = des * 10;
	b = sot + des + ed;
	cout << b;
}