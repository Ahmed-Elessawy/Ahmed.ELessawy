

#include "Matrix.hpp"
#include <iostream>



Matrix::Matrix(int i , int j):numOfRows(i),numOfCols(j)/*Initializer list*/
{
	    matrix=new int *[numOfRows];
	    for(int i=0;i<numOfCols;i++)
	    {
	    	matrix[i]=new int[numOfCols];
	    }

}



Matrix::Matrix(const Matrix& other) : Matrix{other.numOfRows,other.numOfCols}
{
	for (int i = 0; i < numOfRows; ++i) {
	        for (int j = 0; j < numOfCols; ++j) {
	            matrix[i][j] = other.matrix[i][j];
	        }
	    }
}


void Matrix::setElement(int i , int j , int value){
    matrix[i][j] = value ;
}

int Matrix::getElement(int i ,int j)const{

	return matrix[i][j];
}

void Matrix::print()const{

	for(int i=0;i<numOfRows;i++)
	{
		for(int j=0;j<numOfCols;j++)
		{
			std::cout<<matrix[i][j];
		}

	}
}

Matrix::~Matrix(){
	/*
	Search for how to delete a 2D array using delete !
	*/
	std::cout<<"dtor";
	for(int i = 0; i< 3; ++i)
	{
	delete[] matrix[i];
	}
	delete[] matrix;
}
    

