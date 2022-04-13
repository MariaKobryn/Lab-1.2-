#include "�������.h"
#include<iostream>

using namespace std;

void �������::setPtr(int** value) {
	ptr = value;
}

bool �������::setRows(int value) {
	if (value > 0) {
		rows = value;
		return true;
	}
	else {
		rows = 0;
		return false;
	}
}

bool �������::setCols(int value) {
	if (value > 0) {
		cols = value;
		return true;
	}
	else {
		cols = 0;
		return false;
	}
}

void �������::Init(int rowsValue, int colsValue) {
	setRows(rowsValue);
	setCols(colsValue);

	ptr = new int* [rowsValue];
	for (int i = 0; i < rowsValue; i++)
		ptr[i] = new int[colsValue];
	for (int i = 0; i < rowsValue; i++) {
		for (int j = 0; j < colsValue; j++)
			ptr[i][j] = i + j;
	}
}

int �������::getValueByIndex(int i, int j) {
	for (int a = 0; a < rows; a++) {
		for (int b = 0; b < cols; b++) {
			if (i == a && j == b)
				return ptr[a][b];
		}
	}
}

void �������::multiply�������ByNumber(int number) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			ptr[i][j] *= number;
		}
	}
}

void �������::display() const {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
}
