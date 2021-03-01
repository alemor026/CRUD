#include<iostream>
#include<stdlib.h>
using namespace std;

class STUDENT
{
 int STU_ROLL;
 char STU_NAME[20];
 char STU_SEC[20];
 char STU_DEPT[20];
 public:
 	int Insert(STUDENT *p,int n)	{
		system("cls");
	 cout<<"Enter Codigo: ";
	cin>>p[n].STU_ROLL;
	cout<<"Enter Nombre: ";
	cin>> p[n].STU_NAME;
	cout<< "Enter Numero: ";
	cin>> p[n].STU_SEC;
	cout<<"Enter Direccion: ";
	cin>> p[n].STU_DEPT;
	cout<<"\nDATOS INGRESADOS CORRECTAMENTE...\n";
	n++;
	return n;
	}
	void Search(STUDENT *p,int roll,int n)
	{
	int i=0;
	for( i=0;i<n;i++)
	{
	   if(p[i].STU_ROLL==roll)
    		{
		cout<<"CODIGO\tNOMBRE\tNUMERO\tDIRECCION\n==============================================\n";
	    	cout<<STU_ROLL<<"\t"<<STU_NAME<<"\t"<<STU_SEC<<"\t"<<STU_DEPT<<"\n";
		break;
    		}
	}
	if(p[i].STU_ROLL!=roll)
	{
	cout<<"\nDATO NO ENCONTRADO.\n";
	}

    }

	void Display(){
	system("cls");
	cout<<STU_ROLL<<"\t"<<STU_NAME<<"\t"<<STU_SEC<<"\t"<<STU_DEPT<<"\n";
	}
	
	int Del(STUDENT *p,int n,int roll)	{
	system("cls");
		int i,ch1;
		for(i=0;i<n;i++)
		{
		if(p[i].STU_ROLL==roll)
    		{
    			while(1){
    			cout<<"\n====OPCIONES ====\n";
    			cout<<"\n 1. Sección de actualización";
    			cout<<"\n 2. Actualizar Direccion";
   				cout<<"\n 3. Actualizar ambos";
   				cout<<"\n 4. Volver al menú principal";
   				cout<<"\n\n Introduzca su elección:";
   				cin>>ch1;    				
				switch(ch1){
    				case 1: cout<<"CODIGO:";
    						cin>>p[i].STU_SEC;
    						cout<<"Codigo actualizado...\n";
    						break;
   					case 2: cout<<"DIRECCION:\t";
   							cin>>p[i].STU_DEPT;
   							cout<<"Direccion actualizada...\n";
   							break; 					
					case 3: cout<<"Codigo:";
							cin>>p[i].STU_SEC;
							cout<<"Direccion:\t";
							cin>>p[i].STU_DEPT;
							cout<<"Registro actualizado...\n";
							break;
					case 4: return n;
					default: cout<<"!! Clave equivocada !!";
							break;
					}
				}
			break;
    		}
		}
    		if(p[i].STU_ROLL!=roll)
		{
    		cout<<"\nRegistro no encontrado\n\n";
		}
	}
};

int main(){
system("cls");
 STUDENT o[10];
 int i=0,ch,j,roll;
 while(1)
  {
   cout<<"\n====SISTEMA DE REGISTRO====";
   cout<<"\n";
   cout<< "\n 1. INSERTAR";
   cout<< "\n 2. BUSCAR";
   cout<< "\n 3. MOSTRAR";
   cout<< "\n 4. BORRAR";
   cout<< "\n 5. ACTUALIZAR";
   cout<< "\n 6. SALIR";
   cout<< "\n\n INTRODUZCA SU ELECCION:";
   cin>> ch;
   switch(ch){
     case 1: i=o[0].Insert(o,i);
               break;
     case 3: cout<<"CODIGO\tNOMBRE\tNUMERO\tDIRECCION\n==============================================\n";
		for(j=0;j<i;j++){
		o[j].Display();
		}
		break;
     case 2:
		cout<<"Ingrese el codigo para la búsqueda:";
		cin>> roll;

		o[0].Search(o,roll,i);

		break;
	 case 4:
		cout<<"Introduzca el codigo que desea eliminar:";
		cin>> roll;
		i=o[0].Del(o,i,roll);
		break;
	 case 5:
	 	cout<<"Escriba codigo para actualización de datos:";
		cin>> roll;
		i=o[0].Update(o,roll,i);
		break;
	 default: cout<<"! Clave equivocada !";
	 		break;
     case 6: exit(0);
    }
  }

 }
