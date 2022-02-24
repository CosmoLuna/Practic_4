#include <iostream>
using namespace std;

// ����� �������
template <typename T> void showArray(T array[], int length) {
	cout << "����������� ������:\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}

// ������ 1
template <typename T> void clearArray(T array[], int length, T num) {
	cout << "�������� ������:\n[";
	for (int i = 0; i < length; i++) {		
		if (array[i] == num)
			array[i] = 0;
		cout << array[i] << ", ";
	}
	cout << "\b\b]\n\n";
}

// ������ 2
int indexSum(int array1[], int array2[], int length1, int length2, int index) {
	int n = 0, m = 0;
	if (index > length1 - 1 || index > length2 - 1 || index < 0) {
		cout << "ERROR\n";
		return 0;
	}
	else
		for (int i = 0; i < length1; i++)
			if (i == index)
				n = array1[i];
		for (int i = 0; i < length2; i++)
			if (i == index)
				m = array2[i];
		return n + m;
	
}

// ������ 3
template <typename T> int maxSum(T array[], int length) {
	int min = array[0];
	/*for (int i = 0; i < length; i++)
		if (array[i] < min)
			min = array[i];*/
	T max1 = array[0], max2 = array[0];

	for (int i = 0; i < length; i++) {
		if (array[i] > max1) {
			max2 = max1;
			max1 = array[i];
		}
		else
			if (array[i] > max2)
				max2 = array[i];
	}
	return max1 + max2;
}

// ������ 4
void primeRange(int num1, int num2) {
	
	for (int i = num1; i <= num2; i++) {
		int count = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				count++;
		if (count == 2)
			cout << i << " ";
		
	}
}


int main() {
	setlocale(LC_ALL, "Russian");


	// ������ 1
	cout << "������ 1\n";
	int z1[5] = {3, 2, 3, 4, 5};
	showArray(z1, 5);
	clearArray(z1, 5, 3);

	// ������ 2
	cout << "������ 2\n";
	int z2[5] = { 1, 2, 3, 4, 5 };
	int z2_1[6] = { 2, 3, 4, 5, 6, 1 };
	showArray(z2, 5);
	showArray(z2_1, 6);
	int a;
	cout << "������� ������: ";
	cin >> a;
	cout << "����� ��������� � �������� " << a << " = " << indexSum(z2, z2_1, 5, 6, a) << "\n\n";

	// ������ 3
	cout << "������ 3\n";
	int z3[8] = { 110, 100, 7, 4, 3, -9, 10, 11 };
	showArray(z3, 8);
	cout << maxSum(z3, 8) << "\n";

	// ������ 4
	int x, y;
	cout << "\n������ 4\n������� ������ � ����� ���������: ";
	cin >> x >> y;

	primeRange(x, y);


	return 0;
}