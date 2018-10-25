//Solving system of linear equations: resistor networks Physics 203 
#include <iostream>
#include <armadillo> // Maxtrix solving package Libary for C++ 
#include <string>
#include <cmath>
#include <fstream> //To store results in text files 

using namespace std;
//Maxtrix M is the maxtrix of equations 
//Maxtrix x is the maxtrix of unknown currents 
//Maxtrix b is the maxtrix of answers
//Formula M*x = b 
//Therefore x = M_inverse * b

class CompProj
{
public:
	CompProj()
	{
	
	}
	void exercise_1()
	{
	b << 0 <<arma::endr << -10 << arma::endr << -20 << arma::endr;
	M << 1 << -1 << -1 << arma::endr
	  << -10 << 0 << -30 << arma::endr 
	  << 0 << 20 << -30 << arma::endr;
	M_inverse = arma::inv(M);
	x = M_inverse * b;
	cout << "Exercise 1 Answers in Order I1, I2, I3" << endl;
        cout << abs(x) << endl;
	}	
        void exercise_2()
        {
          //Defining The maxtrix of there answers 
        b << 0 << arma::endr << -10 << arma::endr << 20 << arma::endr << 40 << arma::endr 
          << 40 << arma::endr << 10 << arma::endr;
          //Defining The maxtrix of the equations 
        M << 1 << -1 << -1 << 0 << 0 << 0 << arma::endr 
          << -10 << 0 << -30 << 0 << 0 << 0 << arma::endr 
          << 0 << -20 << 30 << 0 << 0 << 0 << arma::endr 
          << 0 << 0 << 0 << -40 << 0 << 0 << arma::endr 
          << 0 << 0 << 0 << 0 << 50 << 0 << arma::endr
          << 0 << 0 << 0 << 0 << 50 << -60 << arma::endr; 
        M_inverse = arma::inv(M);
        x = M_inverse * b; 
        cout << "Exercise 2 Answers in Order I1, I2, I3, I4, I5, I6" << endl;
        cout << abs(x) << endl;
        }

private:
arma::mat x; 
arma::mat M;
arma::mat M_inverse;
arma::mat b;
};
int main()
{

CompProj obj;
obj.exercise_1();
obj.exercise_2();

return 0;
}



