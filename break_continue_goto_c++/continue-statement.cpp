#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		// condition to continue
		if (i == 3) {
            continue;//skip the iteration when i==3
        }
		cout << i << endl;
	}
	system("pause");
}