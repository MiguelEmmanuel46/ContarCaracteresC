#include <stdio.h>

int i,j;
char *aux;
//char *cadena="Hola";
char *meses[1/*2*/]= {"Enero"/*,"Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre", "Noviembre","Diciembre"*/};

void ContarCadenas(){
	
			for(i = 0; i < 1; i++)
			{
				j = 0;
				
				aux = meses[i];
			
				while (*(aux+j) != '\0')
				{
					j++;
				}
				
				printf("Los caracteres son: %d",j);
			
	
			}
}


int main()
{	
	for(i = 0; i < 1; i++)
			{
				j = 0;
				
				aux = meses[i];
			
				while (*(aux+j) != '\0')
				{
					j++;
				}
				printf("%c",*(aux+j-3));
				printf("%c",*(aux+j-2));
				printf("%c",*(aux+j-1));
				printf("\n");
	
			}
			
			
	ContarCadenas();	
			
return 0;
}
