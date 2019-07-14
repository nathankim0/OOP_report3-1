#pragma once
#include <iostream>
using namespace std;

class BaseArray { //기본클래스
private:
	int capacity;//배열의 크기
	int *mem; //정수 배열을 만들기 위한 메모리의 포인터
protected:
	BaseArray(int capacity = 100) { //생성자
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; } //소멸자
	void put(int index, int val) { mem[index] = val; } //배열에 입력할 함수
	int get(int index) { return mem[index]; } //배열 리턴
	int getCapacity() { return capacity; } //용량 리턴
};