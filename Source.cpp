#include "Matrix.h"
#include <iostream>

using namespace std;

void main() {

	int a[6] = { 1,2,3,4,5,6 };
	int b[6] = { 1,2,3,4 };

	// Print Matrix 1: 2x3
	Matrix ma(a, 2, 3);
	cout << "printMatrix() outputs the first matrix = " << endl;
	ma.printMatrix();

	// Print Matrix 2: 2x2
	Matrix mb(b, 2, 2);
	cout << "The second matrix = " << endl;
	mb.printMatrix();

	// Transpose Matrix 1
	Matrix transposed_1st = ma.transpose();
	cout << "Result of transpose() the first matrix = " << endl;
	transposed_1st.printMatrix();

	// Adding Matrix 1 to Matrix 2: 2x3 + 2x2: Error
	Matrix addition = ma.add(mb);
	cout << "Result of adding 1st and 2nd = " << endl;
	addition.printMatrix();
	
	// Multiplying Matrix 1 transpose with Matrix 2
	Matrix multiply = transposed_1st.multiply(mb);
	cout << "Result of multiplying transposed 1st Matrix with 2nd matrix = " << endl;
	multiply.printMatrix();

	


	system("pause");
}