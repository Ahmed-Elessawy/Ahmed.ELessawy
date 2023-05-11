

#include "Complex.hpp"
#include <iostream>

Complex::Complex(int real):real(real){}

Complex::Complex(int real ,int img):real(real),img(img){}

Complex Complex::sum(const Complex& C)const{
	Complex temp;
	temp.real=this->real+C.real;
	temp.img=this->img+C.img;
	return temp;

}

Complex Complex::difference(const Complex& C)const{
		Complex temp;
		temp.real=this->real-C.real;
		temp.img=this->img-C.img;
			return temp;

}

Complex Complex::product(const Complex& C)const{
			Complex temp;
			temp.real=this->real*C.real;
			temp.img=this->img*C.img;
				return temp;

}

void Complex::setReal(int real){
	this->real=real;
}

void Complex::setImg(int img){
	this->img=img;
}

int Complex::getReal()const{
	return this->real;
}

int Complex::getImg()const{
	return this->img;
}

void Complex::print()const{
    char signR='-';
    char signI='-';
    if(real>0)
    {
        signR='+';
        
       
    }
    if(img>0)
    {
        signI='+';
    }
	 std::cout<<"The result is : "<<signR<<abs(this->real)<<"i"<<signI<<abs(this->img)<<"ii"<<std::endl;
    // printf("The result is :  %+-5i %+-5ii\n",real,img);
}


Complex::~Complex(){
	std::cout<<"DTOR";
}

