#pragma once
class �������
{
private:
	int** ptr = new int* [0];
	int rows;
	int cols;
public:
	int** getPtr() const { return ptr; }
	int getRows() const { return rows; }
	int getCols() const { return cols; }

	void setPtr(int**);
	bool setRows(int);
	bool setCols(int);

	int getValueByIndex(int i, int j);
	void multiply�������ByNumber(int number);

	void Init(int rows, int cols);
	void display() const;

};

