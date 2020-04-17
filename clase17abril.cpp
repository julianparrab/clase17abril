#include <iostream>

using namespace std;

template <class TEST>

inline void pendiente(TEST& num1, TEST& num2,TEST& num3, TEST& num4,TEST& m)
{
	m=(num4-num2)/(num3-num1);
}	
	
	

int main (void)
{
	double x0,y0,x1,y1,m;
	
	cout << "Ingresa el valor x del punto 1"<<endl;
	cin>>x0;
	
	cout << "Ingresa el valor y del punto 1"<<endl;
	cin>>y0;
	
	cout << "Ingresa el valor x del punto 2"<<endl;
	cin>>x1;
	
	cout << "Ingresa el valor y del punto 2"<<endl;
	cin>>y1;
	
	cout << "inputs: P1=" << x0 << " , " << y0 << endl;
	cout << "inputs: P2=" << x1 << " , " << y1 << endl;
	
	pendiente(x0,y0,x1,y1,m);
	
	cout << "pendiente" << m << endl;
	return 0;
	
}
	
	
