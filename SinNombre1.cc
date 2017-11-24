#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x=0;
	float r=0;
	float t=0;
	float h=0;
	float j=0;
	float z=0;
	cout<<"Dame un numero cualquiera x "<<endl;
	cin>>x;
	r = cos(x);
	cout<<"\nEl valor del cos(x) = "<<r<<endl;//\n crea un espacio 
	cout<<"\nDame un numero cualquiera h "<<endl;
	cin>>h;
	t=cos(x+h)-cos(x+2*h);
	cout<<"\nSe tiene que cos(x+h)-cos(x+2h) = "<<t<<endl;
	cout<<"\nQueremos hallar un valor de h para el cual la diferencia anterior aun se note, veamos que valor de h se necesita para que esta diferencia sea menor que 1x10^-6"<<endl;
	do{
		if(h>0.000000001){
		h=h-h/2;
	}
		j=fabs(cos(x+h)-cos(x+2*h));//fabs da el valor absoluto de la operación 
		
	}while(j>0.000001);
	cout<<"\nPara una h = "<<h<<endl;
	cout<<"\nEl valor de cos(x+h)-cos(x+2h) ahora es "<<j<<endl;
	
	
	return 0;
}
