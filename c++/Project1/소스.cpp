#include <iostream>
#include <string>
//pre processing compile ����
//Next thing I have to do is list return value.

using namespace std;

namespace kimHeeSung {
	//this code
	/*is practice c++ code for next semester*/
	string helloWord() {
		int Num = 1234;
		cout << "hello world \n";
		cout << "escape sequence is same as endl" << Num << endl;
		return "nani?";
	}

	int add(int var1, int var2) {
		int result = var1 + var2;
		return result;
	}

	int ask() {
		int var;
		int result[2];

		for (int i = 0; i < 2; i++) {
			cout << i <<"��° �Է��� �Է� �ϼ���!"<< endl;
			cin >> var;
			result[i] = var;
			// list formating �� ��, list[n��] = {1,2,3,4,5,...,n} ����
			// �ѹ� formating �ϸ� �ٸ� �ٽ� formating �� ��. list[] ���� �ڵ� ����.
			cout << result[2] << endl;
			
		};

		return result[2];
	}
}


int main() {
	std::cout << 1;
	string vari = kimHeeSung::helloWord();
	int lists = kimHeeSung::ask();
	cout << lists << endl;
	cout << vari;
}
