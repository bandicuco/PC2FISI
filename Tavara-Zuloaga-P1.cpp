#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int mA[2][3],mB[3][2];
	cout<<"Ingrese los valores de la matriz A(2x3)\n(Numeros entre 1 y 10)"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			do{
				cin>>mA[i][j];
				if(mA[i][j]<1||mA[i][j]>10){
					cout<<"Los numeros deben estar en el rango 1<=n<=10"<<endl;
				}	
			}while(mA[i][j]<1||mA[i][j]>10);
		}
	}
	cout<<"Ingrese los valores de la matriz B(3x2)\n(Numeros entre 1 y 10)"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			do{
				cin>>mB[i][j];
				if(mB[i][j]<1||mB[i][j]>10){
					cout<<"Los numeros deben estar en el rango 1<=n<=10"<<endl;
				}	
			}while(mB[i][j]<1||mB[i][j]>10);
		}
	}
	cout<<"Las matrices resultantes son\nA="<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<setw(5)<<mA[i][j];
		}
		cout<<endl;
	}
	cout<<"B="<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<setw(5)<<mB[i][j];
		}
		cout<<endl;
	}
	cout<<"\nLA MATRIZ A SE MODIFICARA DE LA SIGUIENTE FORMA\n: Aquellos numeros de la primera matriz que sean mayores a 5 y se convertiran a 1"<<endl;
	cout<<"\nLA MATRIZ B SE MODIFICARA DE LA SIGUIENTE FORMA\n: quellos numeros que sean menores a 6 de  la  segunda matriz se convertiran a 0."<<endl;
	//MODIFICACION DE MATRICES
	//MPDIFICACION MATRIZ A
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(mA[i][j]>5){
				mA[i][j]=1;
			}
		}
	}
	//MODIF MATRIZ B
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(mB[i][j]<6){
				mB[i][j]=0;
			}
		}
	}
		cout<<"Las matrices modificadas son:\nA="<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<setw(5)<<mA[i][j];
		}
		cout<<endl;
	}
	cout<<"B="<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<setw(5)<<mB[i][j];
		}
		cout<<endl;
	}
	return 0;
}
