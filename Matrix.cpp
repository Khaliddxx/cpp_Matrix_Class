#include "Matrix.h"


Matrix::Matrix(int iRows, int iCols)
	:rows(iRows), cols(iCols) {
	initMatrix(rows, cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = 0;
		}
	}
};

Matrix::Matrix(int a[], int iRows, int iCols)
:rows(iRows), cols(iCols){
	int count = 0;
	initMatrix(rows, cols);

	for (int i=0; i<rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = a[count++];
		}
	}
};


void Matrix::printMatrix() const {
	for (int i = 0; i < rows; i++) {
		for (int j=0; j<cols; j++)
			std::cout << matrix[i][j] << ' ';

		std::cout << std::endl;
	}
	std::cout << std::endl;
};

Matrix Matrix::add(Matrix &m) const {
	Matrix x(m.rows, m.cols);

	// Summation should require same resultant size as inputs
	if (m.rows == this->rows && m.cols == this->cols) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++)
				x.matrix[i][j] = m.matrix[i][j] + this->matrix[i][j];
		}
	}
	else {
		std::cout << "Error: To add, both matrices should be of same row and column sizes" << std::endl;
	}
	return x;
};


Matrix Matrix::multiply(Matrix &m) const {
	Matrix mul(this->rows, m.cols);
	
	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < this->cols; j++) {
			for (int k = 0; k < this->cols; k++) {
				mul.matrix[i][j]+= this->matrix[i][k]* m.matrix[k][j];
			}
		}
	}
	return mul;

};


Matrix Matrix::transpose() const {
	Matrix x(this->cols, this->rows);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			x.matrix[j][i] = this->matrix[i][j];
	}
	return x;
};

void Matrix::initMatrix(int r, int c) {
	matrix = new int* [r];
	for (int z = 0; z < r; z++) {
		matrix[z] = new int[c];
	}
}