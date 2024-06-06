#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string nombre[100],aux2;
	int notas[100],n=0,alumnos_desaprobados=0,aux=0;
	float s=0.0,promedio[100],n1=0.0,n2=0.0,n3=0.0;
	do{	
		cout<<"Digite la cantidad de estudiantes: ";cin>>n;
	}while(n<0);
	for(int i=0;i<n;i++){
		//Reiniciando valores
		s=0.0;
		n1=0.0;
		n2=0.0;
		n3=0.0;
		//Digitando datos
		cout<<"\nDigite el nombre del "<<i+1<<char(167)<<" estudiante: ";cin>>nombre[i];
		//Consistencia de notas
		do{
			cout<<"\nDigite la nota 1:";cin>>n1;
		}while(n1<0||n1>20);
		do{
			cout<<"Digite la nota 2:";cin>>n2;	
		}while(n2<0||n2>20);
		do{
			cout<<"Digite la nota 3:";cin>>n3;	
		}while(n3<0||n3>20);
		
		s=n1+n2+n3;
		promedio[i]=s/3;
		if(promedio[i]<11){
			alumnos_desaprobados++;//contador de alumnos desaprobados
		}
	}
	//Ordenamiento burbuja
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(promedio[j]>promedio[j+1]){
				aux=promedio[j];
				promedio[j]=promedio[j+1];
				promedio[j+1]=aux;
				
				aux2=nombre[j];
				nombre[j]=nombre[j+1];
				nombre[j+1]=aux2;
			}
		}
	}
	//IMPRIMIENDO DATOS
	
	//Orden descendente
	cout<<"\n\t\t:::ORDEN DESCENDENTE:::"<<endl;
	cout<<setw(30)<<left<<"NOMBRES"<<setw(30)<<left<<"PROMEDIOS"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(30)<<left<<nombre[i]<<setw(30)<<left<<promedio[i]<<endl;
	}
	cout<<"\n"<<endl;
	//Orden ascendente
	cout<<"\n\t\t:::ORDEN ASCENDENTE:::"<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<setw(30)<<left<<nombre[i]<<setw(30)<<left<<promedio[i]<<endl;
	}
	cout<<"\nTOTAL DE ALUMNOS DESAPROBADOS: "<<alumnos_desaprobados;
	
}
