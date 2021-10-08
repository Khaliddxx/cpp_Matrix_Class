
#include <array>
#include <iostream>

#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{

private:
	int rows;
	int cols;
	//std::array<std::array<int, cols>, rows> matrix;
	int** matrix;


public:

	Matrix(int iRows, int iCols);
	Matrix(int a[], int iRows, int iCols);
	Matrix(float a[], int iRows, int iCols);

	void printMatrix() const;
	Matrix add(Matrix &m) const;
	Matrix multiply(Matrix& m) const;
	Matrix transpose() const;
	void initMatrix(int r, int c);


	~Matrix() {};

};

#endif