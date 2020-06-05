//Daniel Alejandro Paz Moya//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char estudiantes[10][9][100];
	char nom[40];
	int dia[10],mes[10],ano[10];
	for(int i=0; i<10; i++){
		int j=1;

		do{
			printf("%d.Matricula del estudiante %d: ",j,i+1);
			scanf("%ld",&estudiantes[i][j][100]);
		}while(estudiantes[i][j][100]<0); j++;
		
		printf("%d.Nombre: ",j); fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		printf("%d.Primer apellido: ",j); fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		printf("%d.Segundo apellido(opcional): ",j); fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		if(i>=0){
			do{
				printf("Ingrese su dia de nacimiento: ");
				scanf("%d", &dia[i]);
			}while(dia[i]<0 || dia[i]>31);
			do{
				printf("Ingrese su mes de nacimiento: ");
				scanf("%d", &mes[i]);
			}while(mes[i]<0 || mes[i]>12);
			do{
				printf("Ingrese su año de nacimiento: "); fflush(stdin);
				scanf("%d", &ano[i]);
			}while(ano[i]<0 || 100<ano[i]);
		} j++;
		
		printf("%d.Escuela: ",j); fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		printf("%d.Grado: ", j);
		scanf("%d",&estudiantes[i][j][100]); j++;
		
		printf("%d.Carrera: ",j);fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		printf("%d.Genero: ",j);fflush(stdin);
		gets(estudiantes[i][j]); puts("\n");
	}
	
	for(int i=0; i<10; i++){
		int j=1;
		printf("%ld\n",estudiantes[i][j][100]);j++;
		printf("%s\n",estudiantes[i][j]);j++;
		printf("%s\n",estudiantes[i][j]);j++;
		printf("%s\n",estudiantes[i][j]);j++;
		if(i>=0){
			printf("%d/%d/%d\n",dia[i],mes[i],ano[i]);
		} j++;
		printf("%s\n",estudiantes[i][j]);j++;
		printf("%d\n",estudiantes[i][j][100]);j++;
		printf("%s\n",estudiantes[i][j]);j++;
		printf("%s\n\n",estudiantes[i][j]);	
	}
	
	system("pause");
	return 0;
}


