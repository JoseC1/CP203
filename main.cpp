//Solving system of linear equations: resistor networks Physics 203 
#include <iostream>
#include <armadillo> 
#include <string>
#include <cmath>
#include <fstream> //To store results in text files 

using namespace std;

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


return 0;
}



