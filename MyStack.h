#pragma once
#include "BaseArray.h"

class MyStack :public BaseArray { //BaseArray 클래스 상속, 파생클래스
private:
	int top; //스택의 가장최근(맨 위)
public:
	MyStack(int capacity) : BaseArray(capacity) { top = 0; } //스택의 초기 top=0 
	void push(int n) {
		put(top, n); //스택에 푸시 할 때마다
		top++; //top 1씩 증가
	}
	int capacity() { return getCapacity(); }  //BaseArray의 getCapacity 함수 리턴 (capacity)
	int length() { return top; } //push 함수에서 top++ 한 것 리턴 (스택 크기)
	int pop() {
		--top; //스택에서 팝 할 때마다 top 1씩 감소
		return get(top); //BaseArray 클래스의 get함수 호출 (mem[top])
	}
};