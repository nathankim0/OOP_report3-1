#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);//스택에 푸시
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기: " << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';//스택에서 팝
	}
	cout << endl << "스택의 현재 크기: " << mStack.length() << endl;
	/* 
     stack empty 인 경우의 사례를 만들어 출력할 것
     stack full 인 경우의 사례를 만들어 출력할 것
   */
	cout << "-----------------------------\n";
	cout << "stack full 인 경우\n";
	for (int i = 0; i < mStack.capacity(); i++) {
		mStack.push(i);//스택에 푸시
		cout << "스택의 현재크기: " << mStack.length() << endl;
		if (mStack.length() == mStack.capacity()) {
			cout << "스택용량:" << mStack.capacity() << ", 스택크기: " << mStack.length() << endl;
			cout << "stack full\n";
		}
	}
	cout << "-----------------------------\n";
	cout << "stack empty 인 경우\n";
	while (mStack.length() != 0) {
		mStack.pop();//스택에서 팝
		cout << endl << "스택의 현재 크기: " << mStack.length() << endl;
		if (mStack.length() == 0) {
			cout << "스택용량:" << mStack.capacity() << ", 스택크기: " << mStack.length() << endl;
			cout << "stack empty\n";
		}
	}

}