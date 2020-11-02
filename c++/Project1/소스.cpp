#include <iostream>
#include <string>
//pre processing compile 전에
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
			cout << i <<"번째 입력을 입력 하세요!"<< endl;
			cin >> var;
			result[i] = var;
			// list formating 할 때, list[n개] = {1,2,3,4,5,...,n} 가능
			// 한번 formating 하면 다른 다신 formating 못 함. list[] 길이 자동 설정.
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
