//Programa que presenta las operaciones básicas
//Creado por Charli Nieves 
//Fecha: 22-09-2022
#include<iostream>
using namespace std;
int main()
{
	float CSNR_x,CSNR_y,CSNR_s,CSNR_m,CSNR_d,CSNR_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de CSNR_x=:";
	cin>>CSNR_x;
	cout<<"Ingrese en valor de CSNR_y=:";
	//Operaciones 
	cin>>CSNR_y;
	CSNR_s=CSNR_x+CSNR_y;
	CSNR_m=CSNR_x*CSNR_y;
	CSNR_d=CSNR_x/CSNR_y;
	CSNR_r=CSNR_x-CSNR_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<CSNR_x<<" + "<<CSNR_y<<" = "<<CSNR_s<<endl;
	cout<<"Las multiplicacion de "<<CSNR_x<<" * "<<CSNR_y<<" = "<<CSNR_m<<endl;
	cout<<"Las division de "<<CSNR_x<<" / "<<CSNR_y<<" = "<<CSNR_d<<endl;
	cout<<"Las resta de "<<CSNR_x<<" - "<<CSNR_y<<" = "<<CSNR_r<<endl;
	return 0;
}
