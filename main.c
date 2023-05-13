
//ventas por dia, muestra informe
//venta por semana: muestra que quesos se vendieron, y la venta total
// en 3 al finalizar la semana generar menu para elegir que reporte mostrar: que queso se vendio mas, venta total, que dia se vendio mas







#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	int opc; int quesoStock = 20; int vender; int totalDia = 0; int totalSemana = 0; int n =0;
	printf("Sistema de control de stock/venta\n");
	printf("=================================");
	printf("\nMENU PRINCIPAL DE CONTROL\n");
	printf("-------------------------\n");
	printf("1.Registrar venta/s\n");
	printf("2.Ver stock disponible\n");
	printf("3.Generar reporte de ingreso\n");
	printf("4.Cerrar el negocio por hoy\n");
	printf("0.salir\n");
	printf("Introduzca opcion:");
	scanf("%d",&opc);
	
	
	
	
	while(opc != 0){ //dia
	
	switch(opc){
		case 1:
			
			printf("Cuanto queso desea comprar?");
			scanf("%d",&vender);//variable vender genera error, no continua y no cierra, el SCANF genera problemas (SOLUCION: &&&&&&&&&&&&&&&&&)
			// para los enteros el scanf lleva %d,&nombreVariable
			quesoStock = quesoStock - vender;
			printf("te llevas estos quesos %d",vender);
			
			
			break;
			
		case 2:
			system("cls");
			printf("LISTA DE PRODUCTOS\n");
			printf("==================");
			printf("\nid|nombre producto|stock|precio\n");
			printf("\n001|Queso    |%d|250$",quesoStock);
			getch();
			break;
		
		case 3:
			totalDia = vender*250;
			printf("el ingreso total fue de: $ %d",totalDia);
			if(n==7){
				printf("En la semana se hizo: $ %d", totalSemana);
			}
		
		case 4:
			
			
			if(n<7){
				n++;
				totalSemana = totalSemana + totalDia;
				totalDia = 0; //igualamos a 0 para que se resetee el valor
			}
			
			
	//	default:
			
	}
	system("pause");
	printf("Sistema de control de stock/venta\n");
	printf("=================================");
	printf("\nMENU PRINCIPAL DE CONTROL\n");
	printf("-------------------------\n");
	printf("1.Registrar venta/s\n");
	printf("2.Ver stock disponible\n");
	printf("3.Generar reporte de ingreso\n");
	printf("4.Cerrar el negocio por hoy\n");
	printf("0.salir\n");
	printf("Introduzca opcion:");
	scanf("%d",&opc);

}
system("pause");

	return 0;
}
