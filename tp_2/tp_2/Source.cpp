#include <iostream>

using namespace std;

int main() {
	float tab2[8] = {1,2,5,10,20,50,100,200};
	int tab[8];
	float res=0;
	for (int i = 0; i < 8; i++) {
		cout << tab2[i] << "c: ";
		cin >> tab[i];
	}
	for (int i2 = 0; i2 < 8; i2++) {
		res = res + tab[i2] * tab2[i2];
	}
	cout << res/100 << endl;
}