#pragma once
#include <iostream>
using namespace std;

class Matrix {
	// think about the private data members... // the matrix should store real numbers 
	int val1;
	int val2;
	float val3;
	int arr[3][3];
	public:
	//include all the necessary checks before performing the operations in the functions
	Matrix();// a default constructor
	Matrix(int, int);// a parametrized constructor
	Matrix(const Matrix&);// copy constructor
	void set(int i, int j, float val);//set value at (i,j)
	float get(int i, int j)const;//get value at (i,j)
	Matrix& assign(const Matrix&);//assigns (copies) a Matrix. Returns the same
	Matrix add(const Matrix&);//adds two Matrices and returns the result
	Matrix subtract(const Matrix&);//subtracts two Matrices and returns the result
	Matrix multiply(const Matrix&);//multiplies two Matrices and returns the result
	Matrix multiplyElement(const Matrix&);//Elementwise multiplies two Matrices and returns the result
	Matrix add(float);//assigns a constant to every element
	Matrix multiply(float);//multiplies every element with a constant
	void input(); // takes input in every element of matrix
	void display(); // prints every element
	~Matrix();
};

Matrix::Matrix()
{
	val1 = 0;
	val2 = 0;
	val3 = 0.0;
}

Matrix::Matrix(int a, int b)
{
	val1 = a;
	val2 = b;
}

Matrix::Matrix(const Matrix& c)
{
	val1 = c.val1;
	val2 = c.val2;
	val3 = c.val3;
}

void Matrix::set(int i, int j, float val)
{
	val1 = i;
	val2 = j;
	val3 = val;
}

float Matrix::get(int i, int j)const
{
	//val1 = i;
	//val2 = j;
	return val3;
}

Matrix& Matrix::assign(const Matrix &M)
{
	Matrix h;
	h.val1 = val1;
	return h;
}

/*
Matrix Matrix::add(const Matrix&M)
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			M.arr[x][y] + arr[x][y];
		}
	}
}

Matrix Matrix::subtract(const Matrix&S)
{
	Matrix sub;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			S.arr[x][y] - arr[x][y];
		}
	}
}

Matrix Matrix::multiply(const Matrix&Mu)
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			arr[x][y] = 0;    //apply first row with first column logic
			for (int z = 0; z < 3; z++)
			{
				arr[x][y]+= Mu.arr[x][z] * arr[z][x];
			}
		}
	}
}

Matrix Matrix::multiplyElement(const Matrix&Mul)
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			Mul.arr[x][y] * arr[x][y];
		}
	}
}

Matrix Matrix::add(float F)
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			arr[x][y] + F;
		}
	}
}

Matrix Matrix::multiply(float Fm)
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			arr[x][y] * Fm;
		}
	}
}

*/
void Matrix::input()
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cin >> arr[x][y];
		}
	}
}

void Matrix::display()
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << arr[x][y];
		}
	}
}

Matrix::~Matrix()
{
	cout << "Destructor Called" << endl;
}
