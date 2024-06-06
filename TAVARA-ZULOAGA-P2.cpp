#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct empleados{
	char nombre[30];
	char tipo[30];
	float sueldo;
}empleados[100];
int main(){
	int n,comp;
	float AFP[100],Seg[100],Bono[100],S_neto[100],a=0,b=0;
	//IMPUT EMPLEADOS
	do{
		cout<<"Ingrese cantidad de empleados: "; cin>>n;
	}while(n<0);
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"\nIngrese nombre del empleado "<<i+1<<": ";
		cin.getline(empleados[i].nombre,30);
		cout<<"SELECCIONE TIPO EMPLEADO: "<<endl;
		cout<<"Contratado (C). "<<endl;
		cout<<"Nombrado (N). "<<endl;
		cout<<"Ingrese el tipo (C o N) del empleado "<<i+1<<": "; cin>>empleados[i].tipo;
		do{
			cout<<"Ingrese el sueldo basico del empleado "<<i+1<<": "; cin>>empleados[i].sueldo;
		}while(empleados[i].sueldo<0);
		//CALCULO DE AFP Y SEGURO
		AFP[i]=0.08*empleados[i].sueldo;
		Seg[i]=0.05*empleados[i].sueldo;
		comp=strcmp(empleados[i].tipo,"C");
		if(comp==0){
			Bono[i]=0.08*empleados[i].sueldo;}
		else{
			Bono[i]=0.12*empleados[i].sueldo;}
		S_neto[i]=empleados[i].sueldo+Bono[i]-(AFP[i]+Seg[i]);
		comp=strcmp(empleados[i].tipo,"C");
		if(comp==0){
			a+=S_neto[i];}
		else{
			b+=S_neto[i];}
	}
	//SALIDA DATOS
	cout<<"\nRESUMEN: "<<endl;
	cout<<"La cantidad  TOTAL de empleados es: "<<n<<endl;
	cout<<"N"<<setw(20)<<"NOMBRE"<<setw(20)<<"TIPO"<<setw(20)<<"SUELDO BASICO"<<setw(20)<<"Bono"<<setw(20)<<"AFP"<<setw(20)<<"Seg"<<setw(20)<<"SUELDO NETO"<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<setw(20)<<empleados[i].nombre<<setw(20)<<empleados[i].tipo<<setw(20)<<empleados[i].sueldo<<setw(20)<<Bono[i]<<setw(20)<<AFP[i]<<setw(20)<<Seg[i]<<setw(20)<<S_neto[i]<<endl;
	}
	cout<<"El total de sueldos netos para  CONTRATADOS es: "<<a<<endl;
	cout<<"El total de sueldos netos para NOMBRADOS es: "<<b<<endl;
	return 0;
}
