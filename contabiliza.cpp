//Creado por: Charli Nieves
#include<iostream>
using namespace std;
int main()
{
	int CSNR_i=0,CSNR_l;
	float CSNR_x,CSNR_s=0;
	cout<<"ingrese el limite CSNR_l="; cin>>CSNR_l;
	do{

	cout<<"ingrese el numero CSNR_x="; cin>>CSNR_x;
	CSNR_i=CSNR_i+1;
	CSNR_s=CSNR_s+CSNR_x;



	}while(CSNR_i<CSNR_l);
	cout<<"Se ingresaron "<<CSNR_l<<" numeros "<< "que sumaron "<<CSNR_s<<endl;
	return 0;
}
