//Lizogub Matvey П13121
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*Series7. Дано целое число N и набор из N вещественных чисел. Вывести в
    том же порядке округленные значения всех чисел из данного набора (как
    целые числа), а также сумму всех округленных значений.
	const int n = 15;
	double arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = (rand() % 110 - 50)/10.0;
	}
	for (int i = 0; i < n; i++) {
		cout << round(arr[i]) << ' ';
		*/
	/*Series8. Дано целое число N и набор из N целых чисел. Вывести в том же
    порядке все четные числа из данного набора и количество K таких чисел
	const int n = 12;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			k++;
			cout << arr[i] << ' ';
		}
	}
	cout << endl << k << endl;
	*/
	/*Series9. Дано целое число N и набор из N целых чисел. Вывести в том же
    порядке номера всех нечетных чисел из данного набора и количество K
    таких чисел
	const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 16;
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			cout << i << ' ';
			k++;
		}
	}
	cout << endl << k << endl;
	*/
	/*Series10. Дано целое число N и набор из N целых чисел. Если в наборе
    имеются положительные числа, то вывести TRUE; в противном случае
    вывести FALSE.    
	const int n = 5;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 11 - 5;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int i = 0;
	bool res = false;

	while (arr[i] <= 0 && i < n) {
		i++;
	}
	if (i < n) res = true;
	cout << boolalpha << res << endl;
	*/ 
	return 0;
}