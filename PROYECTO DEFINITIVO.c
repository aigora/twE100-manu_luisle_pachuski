// PROYECTO INFORMÁTICA
// M&L&D ONLINE ELECTRONIC COMPANY

#include <stdio.h>
#include<string.h>
#include<math.h>
#define N	7

struct stock {
	char nombreProducto[40];
    float precioProducto;
    int cantidadStock;
	};
	
struct cliente{
	char nombre[30];
	char apellidos [30];
	char nif [10];
	int edad;
	float total;
	}cliente;
	
struct carrito{
    double precioProducto;
    int cantidad;
	}carrito;
	
struct stock producto[N];
struct carrito compra[N];

void menu();
void disponibilidad();
void comienzo();
void compras();
void realizar_compra();

int main(){
	
	disponibilidad();

{
	int i;
	for (i = 1; i <= N; i++){
		compra[i].cantidad = 0;
		compra[i].precioProducto = 0;
	}
	menu();
	return 0;
}
}

void menu(){
	int option;
		do {
			printf ("\n");
			printf ("\tMenu:");
			printf ("\n\t-----");
			printf ("\n 1 - Comience a comprar");
			printf ("\n 2 - Carrito");
			printf ("\n 3 - Finalizar compra");
			printf ("\n 4 - Salir");
			printf ("\n\n Tu eleccion: ");
			scanf ("%i", &option);
			
			switch(option){
				case 1: comienzo();break;
				case 2: compras();break;
				case 3: realizar_compra();break;
			}
			
		
		}while(option !=4 );
}


void disponibilidad(){
	int num;
	strcpy(producto[1].nombreProducto, "Raton                       ");
	producto[1].precioProducto = 17.00;
	producto[1].cantidadStock = 20;
	
	strcpy(producto[2].nombreProducto, "Disco duro de 1TB           ");
	producto[2].precioProducto = 89.00;
	producto[2].cantidadStock = 20;
	
	strcpy(producto[3].nombreProducto, "Monitor LCD de 22 pulgadas  ");
	producto[3].precioProducto = 67.00;
	producto[3].cantidadStock = 30;
	
	strcpy(producto[4].nombreProducto, "Teclado                     ");
	producto[4].precioProducto = 37.00;
	producto[4].cantidadStock = 20;
	
	strcpy(producto[5].nombreProducto, "Memoria USB de 32GB         ");
	producto[5].precioProducto = 17.00;
	producto[5].cantidadStock = 70;
	
	strcpy(producto[6].nombreProducto, "Memoria RAM de 2GB          ");
	producto[6].precioProducto = 78.00;
	producto[6].cantidadStock = 15;
	
	strcpy(producto[7].nombreProducto, "Cascos                      ");
	producto[7].precioProducto = 23.00;
	producto[7].cantidadStock = 30;

	printf("\n\t\t\t\t\tCATALOGO\n");
	printf("\t-----------------------------------------------------------------------------");
	for(num=1; num<=N; num++) {
		printf( "\n\t%i.%s     ", num,producto[num].nombreProducto );
		printf( "Precio: %.2fEUR     ", producto[num].precioProducto );
		printf( "Unidades disponibles: %i \n", producto[num].cantidadStock);
	}
	fflush(stdin);
	printf("\t-----------------------------------------------------------------------------\n");
}
	


void comienzo(){
	int numero,cantidad_1,cantidad_2,cantidad_3,cantidad_4,cantidad_5,cantidad_6,cantidad_7,precio_1, precio_2,precio_3,precio_4,precio_5,precio_6,precio_7;
	char repetir;
	printf("\n\tEMPIECE A COMPRAR!");
	printf("\n\t-------------------");
	do{
	printf("\n\n Indique la referencia del producto deseado (1-7)):  ");
	scanf("%i",&numero);
	 printf("\n Indique la cantidad deseada: ");
		
	switch(numero){
		case 1:
		scanf("%i",&cantidad_1);
		if(cantidad_1<=producto[1].cantidadStock){
			precio_1 = 17.00*cantidad_1;
			compra[1].precioProducto = compra[1].precioProducto + precio_1;
			compra[1].cantidad = compra[1].cantidad + cantidad_1;
			producto[numero].cantidadStock = producto[numero].cantidadStock-cantidad_1;
			
			printf("\n ¡Producto añadido a la cesta correctamente!");
		}
		else{
			printf(" \n No hay suficientes unidades en stock del articulo deseado.");
		}
	
		break;
		
		case 2:
		scanf("%i",&cantidad_2);
		if(cantidad_2<=producto[2].cantidadStock){
			precio_2 = 89.00*cantidad_2;
			compra[2].precioProducto = compra[2].precioProducto + precio_2;
			compra[2].cantidad = compra[2].cantidad + cantidad_2;
			producto[2].cantidadStock = producto[numero].cantidadStock-cantidad_2;
			printf("%i",&compra[2].cantidad);
			
			printf("\n ¡Producto añadido a la cesta correctamente!");
		}
		else{
			printf("\n No hay suficientes unidades en stock del articulo deseado.");
		}
			
		break;
		
		case 3:
		scanf("%i",&cantidad_3);
		if(cantidad_3<=producto[3].cantidadStock){
			precio_3 = 67.00*cantidad_3;
			compra[3].precioProducto = compra[3].precioProducto + precio_3;
			compra[3].cantidad = compra[3].cantidad + cantidad_3;
			producto[numero].cantidadStock = producto[numero].cantidadStock-cantidad_3;
			
			printf("\n ¡Producto añadido a la cesta correctamente!");
		}
		else{
			printf("\n No hay suficientes unidades en stock del articulo deseado.");
		}
			
		break;
		
		case 4:
		scanf("%i",&cantidad_4);
		if(cantidad_4<=producto[4].cantidadStock){
			precio_4 = 37.00*cantidad_4;
			compra[4].precioProducto = compra[4].precioProducto + precio_4;
			compra[4].cantidad = compra[4].cantidad + cantidad_4;
			producto[numero].cantidadStock = producto[numero].cantidadStock-cantidad_4;
			
			printf("\n ¡Producto añadido a la cesta correctamente!");
		}
		else{
			printf("\n No hay suficientes unidades en stock del articulo deseado.");
		}
			
		break;
		
		case 5:
		scanf("%i",&cantidad_5);
		if(cantidad_5<=producto[5].cantidadStock){
			precio_5 = 17.00*cantidad_5;
			compra[5].precioProducto = compra[5].precioProducto + precio_5;
			compra[5].cantidad = compra[5].cantidad + cantidad_5;
			producto[numero].cantidadStock = producto[numero].cantidadStock-cantidad_5;
			
			printf("\n ¡Producto añadido a la cesta correctamente!");
		}
		else{
			printf("\n No hay suficientes unidades en stock del articulo deseado.");
		}
			
		break;
		
		case 6:
		scanf("%i",&cantidad_6);
		if(cantidad_6<=producto[6].cantidadStock){
			precio_6 = 78.00*cantidad_6;
			compra[6].precioProducto = compra[6].precioProducto + precio_6;
			compra[6].cantidad = compra[6].cantidad + cantidad_6;
			producto[numero].cantidadStock = producto[numero].cantidadStock-cantidad_6;
			
			printf("\n ¡Producto añadido a la cesta correctamente!");
		}
		else{
			printf("\n No hay suficientes unidades en stock del articulo deseado.");
		}
			
		break;
		
		case 7:
		scanf("%i",&cantidad_7);
		if(cantidad_7<=producto[7].cantidadStock){
			precio_7 = 23.00*cantidad_7;
			compra[7].precioProducto = compra[7].precioProducto + precio_7;
			compra[7].cantidad = compra[7].cantidad + cantidad_7;
			producto[numero].cantidadStock = producto[numero].cantidadStock-cantidad_7;
			printf("\n ¡Producto a\164adido a la cesta correctamente!");
		}
		else{
			printf("\n No hay suficientes unidades en stock del artículo deseado.");
		}
			
		break;
		
		default: printf("\n No existe ningun producto con la referencia indicada.");
		
		
	}
	printf("\n\n \250Desea comprar otro articulo?\n En caso afirmativo pulse la "
		"tecla 's', en otro caso cualquier otra tecla: ");
		fflush (stdin);
		scanf("%c",&repetir);
		
	}while(repetir=='s'||repetir=='S');
}

void compras(){
	int num;
	float prTot = 0;
	
		printf("\n\t\t\t\t\tCARRITO\n");
     	printf("\t-----------------------------------------------------------------------------");
	for(num=1; num<=N; num++) {	
	    if (compra[num].cantidad != 0 )
     	{
		printf( "\n\t-%s     ",producto[num].nombreProducto );
		printf( "Unidades: %i     ", compra[num].cantidad );
		printf( "Precio: %.2fEUR\n", compra[num].precioProducto );
		prTot = prTot + compra[num].precioProducto;
		
     	}
}
    printf("\t-----------------------------------------------------------------------------\n");
	printf("\n\t\tEl precio total actual es: %.2fEUR \n",prTot);
	printf("\t-----------------------------------------------------------------------------\n");
	cliente.total = prTot;
}

void realizar_compra(){
	char repetir;
    char finalizar;
    int num;
  	FILE *fich;
  	
			do{
		printf("\n\tFICHA DE CLIENTE");
		printf("\n\t----------------");
		printf("\n\n NOMBRE: ");
		fflush(stdin);
		gets(cliente.nombre);
		printf("\n APELLIDOS: ");
		fflush(stdin);
		gets(cliente.apellidos);
		printf("\n NIF: ");
		fflush(stdin);
		gets(cliente.nif);
		printf("\n EDAD: ");
		fflush(stdin);
		scanf("%i",&cliente.edad);
		
		printf("\n\n Su nombre es: %s",cliente.nombre);
		printf("\n Sus apellidos son: %s",cliente.apellidos);
		printf("\n Su NIF es: %s",cliente.nif);
		printf("\n Su edad es: %i",cliente.edad);
		
		printf("\n\n \250Es correcto?\n En caso afirmativo pulse la "
		"tecla 's', en otro caso cualquier otra tecla: ");
		fflush (stdin);
		scanf("%c",&repetir);
		
		
	}while(repetir!='s'&&repetir!='S');
		puts("\n\n\t¡Perfecto!");
		printf("\n El precio total de su compra es:%.2fEUR",cliente.total);
		printf("\n\n \250Desea realizar el pedido?\n En caso afirmativo pulse la "
		"tecla 's', en otro caso cualquier otra tecla: ");
		fflush (stdin);
		scanf("%c",&finalizar);
		
		fich=fopen("FACTURA.txt","a");	
			if(fich==NULL)
				printf ("Error con la apertura de la factura\n");
			else{
				fprintf(fich, "\n\nFACTURA DE COMPRA EN M&L&D ONLINE ELECTRONIC COMPANY");
				fprintf(fich, "\n\n Su nombre es: %s",cliente.nombre);
				fprintf(fich, "\n Sus apellidos son: %s",cliente.apellidos);
				fprintf(fich, "\n Su NIF es: %s",cliente.nif);
				fprintf(fich, "\n Su edad es: %i",cliente.edad);
				fprintf(fich, "\n\t\tEl precio total actual es: %.2fEUR \n",cliente.total);
				fprintf(fich, "\n\nMuchas gracias por haber confiado en nuestra empresa, le esperamos pronto");
				fclose (fich);
			}
		
		if(finalizar=='s'||finalizar=='S'){
			printf("\n ¡Muchas gracias por confiar en nosotros %s!",cliente.nombre);
			fflush (stdin);
			printf("\n Su pedido sera procesado cuanto antes.");
			fflush (stdin);
			printf("\n\n\t¡HASTA PRONTO!");
			fflush (stdin);
		}
		else{
			printf("\n\n\tEsperamos que vuelva pronto, muchas gracias %s.\n",cliente.nombre);
	
		
}

}
