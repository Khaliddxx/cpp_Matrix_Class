# cpp_Matrix_Class

Implementing a matrix class and testing it in C++. The matrix class
does following:

1. Initializing the matrix with a 1D float or int array and 2 integers
indicating the shape of the matrix.
2. Printing the matrix in a 2D fashion like the following for a 3x3 matrix:
1 2 3
4 5 6
7 8 9
3. Adding through an Add() function that accepts another matrix and
returns the result of adding both matrices as a matrix.
4. Multiplying through a Multiply() function that accepts another matrix
and returns the result of multiplying both matrices as a matrix. Here
is a refresher of how we multiply matrices:
If A = [aij] is an m x n matrix and B = [Bij] is an n x p matrix, the
product AB is an m x p matrix C where C = [cij] and
cij = ai1b1j + ai2b2j + …. + ainbnj
5. Transposing through a Transpose() function that returns the result of
transposing the matrix as a matrix. Here is a refresher of the
transpose operator:
Important Note: You should think about which class members need to be
public and which need to be private. You should also think if any member
needs to be const. These choices will be graded.
Your main function should test the matrix class by doing the following:
1. Creating a 2x3 matrix and printing it
2. Creating a 2x2 matrix and printing it
3. Transposing the first matrix and printing the output.
4. Adding the two matrices and printing the output
5. Multiplying the transpose of the first matrix with the second matrix
and printing the output.