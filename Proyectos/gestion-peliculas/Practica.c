/*
	Name: App de gestion de peliculas
	Copyright: Alberto Montealegre
	Author: Alberto Montealegre
	Date: 04/12/2019 17:02
	Description: Práctica de programación 1º Trimestre
*/

/*	Declaro Librerias que voy a utilizar:	
	- Utilizo la libreria estandar de entrada y salida - <stdio.h>
	- Utilizo la libreria que permiten el manejo de cadena de caracteres "string"  - <string.h>
	- Utilizo la libreria que permite reservar y liberar memoria - <stdlib.h>
	- Utilizo la libreria que me permite utilizar la función "getch()" - #include <conio.h>
*/
#include <stdio.h>													
#include <string.h> 
#include <stdlib.h>												
#include <conio.h>
#include <ctype.h>
/*	Declaro constantes:
	- De máximo de caracteres - MAX_CARACTERES
	- De número de peliculas de array - MAX_PELICULAS 
*/
#define MAX_CARACTERES 50
#define MAX_PELICULAS 100
/*	Declaro estructura y sus variables	
	char nombre[MAX_CARACTERES]		Nombre de la pelicula											
	int anio						Año en el que se filmó la pelicula
	char pais[MAX_CARACTERES]		País en el que se filmo la pelicula
	int presupuesto					Presupuesto de la pelicula
	char genero[MAX_CARACTERES]		Género de la pelicula
	char imagen[MAX_CARACTERES]		Nombre de archivo de imagen de pelicula
*/											
struct pelicula{ 													
	char nombre[MAX_CARACTERES];											
	int anio;
	char pais[MAX_CARACTERES];
	int presupuesto;
	char genero[MAX_CARACTERES];
	char imagen[MAX_CARACTERES];		
};
//	Declaro variable global que utilizaré de contador de peliculas												
int numPeliculas = 0; 
//	Declaro Array de peliculas
struct pelicula peliculas[MAX_PELICULAS];	
/*	Declaro funciones que voy a utilizar
	void inicioPrograma()						Lee fichero y carga Array de peliculas
	void muestraMenu()							Muestra menú de inicio
	void agregaPelicula()						Opción 1 - Me permite agregar una pelicula
	void consultarListadoPelicula()				Opción 2 - Muestra el listado completo de peliculas
	void consultarNombrePelicula()				Opción 3 - Consultar por nombre de pelicula
	voidconsultarListadoPeliculaOrdenado()		Opción 4 - Consultar peliculas por nombre, año o género
	void generarDocumentoEspecificoHtml()		Opción 5 - Genero un documento especifico HTML
	void generarDocumentosHtml()				Opción 6 - Genero documentos HTML
*/									
void inicioPrograma();													
void muestraMenu();												
void agregaPelicula();										
void consultarListadoPelicula();
void consultarNombrePelicula();
void consultarListadoPeliculaOrdenado();
void generarDocumentoEspecificoHtml();
void generarDocumentosHtml();

/*	Metodo principal
	Mediante llamadas a funciones:
	- Cargo el programa leyendo de fichero 
	- Muestro menú con opciones
	- El usuario selecciona una opción y se ejecuta
*/
main(){	  	
	inicioPrograma();															
	int opcion;
	do{	
		system("cls");
		muestraMenu();												
		scanf("%d", &opcion);
		fflush(stdin);										
		switch(opcion){												
			case 1:
				//	 system("cls")	Método para borrar pantalla en DOS
				system("cls");		
				agregaPelicula();													
				break;
			case 2:
				system("cls");
				consultarListadoPelicula();
				break;
			case 3:
				system("cls");
				consultarNombrePelicula();
				break;
			case 4:
				system("cls");
				consultarListadoPeliculaOrdenado();
				break;
			case 5:
				system("cls");
				generarDocumentoEspecificoHtml();
				break;
			case 6:
				system("cls");
				generarDocumentosHtml();
				break;
			case 0:
				system("cls");
				printf("\n  HASTA PRONTO");
				break;	
			default:
				system("cls");
				printf("\nNO EXISTE LA OPCION ELEGIDA\nPULSE INTRO");
				break;		
		}
		/*	getch()	Detiene la ejecución del programa hasta que el usuario pulsa 
			una tecla (función de la librería <conio.h>)
		*/	
		getch();
	}while(opcion != 0||opcion>=7);
}

/*	Implemento función	void inicioPrograma()
	Se va a leer de fichero todos los datos que contenga y se van a cargar en el array de estructura.
	Me permite que al cerrar y abrir el programa, no se borren los datos de la ultima sesion y pueda 
	seguir trabajando con ellos.	
*/
void inicioPrograma(){	
	int contadorLineas=0;
	char linea[100];
	FILE *fichero;
	// Lectura  de fichero"r"
	fichero = fopen("ficheroPeliculas.txt", "r");	
	
	while((fgets(linea, 100, fichero)) != NULL){
		if(contadorLineas%6 == 0){
			strtok(linea,"\n");
			strcpy(peliculas[numPeliculas].nombre,linea);
		}else if(contadorLineas%6 == 1){
			strtok(linea,"\n");	
			peliculas[numPeliculas].anio=atoi(linea);
		}else if(contadorLineas %6 == 2){
			strtok(linea,"\n");	
			strcpy(peliculas[numPeliculas].pais,linea);
		}else if(contadorLineas %6 == 3){
			strtok(linea,"\n");	
			peliculas[numPeliculas].presupuesto=atoi(linea);
		}else if(contadorLineas %6 == 4){
			strtok(linea,"\n");	
			strcpy(peliculas[numPeliculas].genero,linea);
		}else if(contadorLineas %6 ==5){
			strtok(linea,"\n");
			strcpy(peliculas[numPeliculas].imagen,linea);
			numPeliculas++;
		}
		contadorLineas++;
	}
	fclose(fichero);
	printf("\n\n\nFICHERO LEIDO CORRECTAMENTE\nPULSE INTRO PARA CONTINUAR");
	getch();
}

/*	Implemento función	void muestraMenu()
	Muestra opciones de menú
*/
void muestraMenu(){		

		printf("\n\n\n________________________________________________________________________________________________________________\n\n");
		printf("                                           MENU PRINCIPAL                                                  \n");
		printf("________________________________________________________________________________________________________________\n");
		printf("\n\n\n\t1. AGREGAR PELICULA\n");
		printf("\n\t2. CONSULTAR LISTADO DE PELICULAS\n");
		printf("\n\t3. CONSULTAR PELICULA\n");
		printf("\n\t4. CONSULTAR LISTADO DE PELICULAS ORDENADO\n");
		printf("\n\t5. GENERAR DOCUMENTO ESPECIFICO HTML.\n");
		printf("\n\t6. GENERAR DOCUMENTOS HTML.\n");
		printf("\n\t0. SALIR.\n");
		printf("\n\tELIJA UNA OPCION: ");
}

/*	1- Implemento función	void agregaPelicula()
	Permite agregar una nueva pelicula al repositorio.
	Se agrega un fichero nuevo, se introducen los datos uno a uno en un array de extructura
	y se cierra el fichero.
*/	
void agregaPelicula(){	
	FILE *fichero;
	char nombre[MAX_CARACTERES];
	int c;											
	fichero = fopen("ficheroPeliculas.txt", "a");
	printf("\n\nA CONTINUACION:\n\t\t -RELLENE LOS DATOS DE LA PELICULA.\n\t\t -INTRODUZCA LOS DATOS PULSANDO INTRO.\n\t\t -PULSE INTRO.");
	while((c = getchar()) != '\n' && c != EOF);
	printf("\nINTRODUCE EL NOMBRE DE LA PELICULA: ");
	gets(nombre);
	fprintf(fichero,"%s\n",nombre);
	strcpy(peliculas[numPeliculas].nombre,nombre);
												
	int anio;
	printf("INTRODUCE EL ANIO DE LA PELICULA: ");
	scanf(" %d", &anio);
	fprintf(fichero,"%d\n",anio);
	peliculas[numPeliculas].anio = anio;
	while((c = getchar()) != '\n' && c != EOF);
												
	char pais[MAX_CARACTERES];
	printf("INTRODUCE EL PAIS DE LA PELICULA: ");
	gets(pais);
	fprintf(fichero,"%s\n",pais);
	strcpy(peliculas[numPeliculas].pais,pais);
												
	int presupuesto;
	printf("INTRODUCE EL PRESUPUESTO DE LA PELICULA: ");
	scanf(" %d", &presupuesto);
	fprintf(fichero,"%d\n",presupuesto);
	peliculas[numPeliculas].presupuesto = presupuesto;
	while((c = getchar()) != '\n' && c != EOF);
												
	char genero[MAX_CARACTERES];
	printf("INTRODUCE EL GENERO DE LA PELICULA: ");
	gets(genero);
	fprintf(fichero,"%s\n",genero);
	strcpy(peliculas[numPeliculas].genero,genero);
	
	char imagen[MAX_CARACTERES];
	printf("INTRODUCE EL ENLACE DE IMAGEN DE LA PELICULA (CON LA EXTENSION): ");
	gets(imagen);
	fprintf(fichero,"%s",imagen);
	strcpy(peliculas[numPeliculas].imagen,imagen);
	//agregar pelicula en 1, e el array de estructura.
	numPeliculas++;
	printf("\nPULSE INTRO PARA SALIR.");
	fclose(fichero);
}

/*	2- Implemento función	void consultarListadoPelicula()
	Permite consultar el listado completo de peliculas.
	Muestro el listado, recorriendo el array de estructuras y cargando solo el nombre de la estructura
	de cada pelicula. Sin necesidad de abrir y cerrar fichero.
*/
void consultarListadoPelicula(){
	int i;
	printf("\n\n NUMPELICULAS: %d \n\n", numPeliculas);
	for(i=0; i<numPeliculas; i++){
		printf("\n\t%d. NOMBRE: %s\n", i+1, peliculas[i].nombre);
		printf("_________________________________________________________________________________________________\n");
	}
	printf("\nPULSE INTRO PARA SALIR.");
}

/*	3- Implemento función	void consultarNombrePelicula()
	Permite consultar la ficha de una pelicula a partir de su nombre.
	Pido que introduzca el nombre de la pelicula, se busca el nombre recorriendo el array de 
	estructuras comparando cadenas de caracteresy se cargan los datos de la estructura de esa 
	pelicula. Sin necesidad de abrir y cerrar fichero.
*/
void consultarNombrePelicula(){
	int x=0;
	char consultar[MAX_CARACTERES];
	printf("\n\nINTRODUCE EL NOMBRE DE LA PELICULA:\n\n");
	gets(consultar);
	char peliculaEncontrada='0';
	while(x<numPeliculas && peliculaEncontrada=='0'){
		//strcmp.Comparacion de cadenas.
		if(strcmp(toupper(peliculas[x].nombre),toupper(consultar))==0){
			peliculaEncontrada='1';
			system("cls");
			printf("\n >DATOS DE CONSULTA:\n");
			printf("\n\t\t NOMBRE: %s",peliculas[x].nombre);
			printf("\n\t\t FECHA: %d",peliculas[x].anio);
			printf("\n\t\t PAIS: %s",peliculas[x].pais);
			printf("\n\t\t PRESUPUESTO: %d",peliculas[x].presupuesto);
			printf("\n\t\t GENERO: %s",peliculas[x].genero);
			printf("\n\t\t IMAGEN: %s",peliculas[x].imagen);		
		}
		x++;
	}
	printf("\n\n\nPULSE INTRO PARA SALIR.");	
}

/*	4- Implemento función	consultarListadoPeliculaOrdenado()
	Permite consultar el listado de peliculas ordenadas por nombre, año o genero.
	He creado un menu, que permite elegir una opcion para ordenar el listado.
*/
void consultarListadoPeliculaOrdenado(){
	int numero,i,j;
	struct pelicula temporal;	
	do{	 
		system("cls");
		printf("\n\n\n\t1 ORDENAR LISTADO DE PELICULAS POR NOMBRE\n");
		printf("\n\t2 ORDENAR LISTADO DE PELICULAS POR FECHA MENOS RECIENTE\n");
		printf("\n\t3 ORDENAR LISTADO DE PELICULAS POR FECHA MAS RECIENTE\n");
		printf("\n\t4 ORDENAR LISTADO DE PELICULAS POR GENERO\n");	
		printf("\n\t0 SALIR.\n");	
		printf("\n\tELIJA UNA OPCION: ");											
		scanf("\n %d", &numero);
		fflush(stdin);										
		switch(numero){												
			case 1:
				for (i=0;i<numPeliculas;i++){
					for (j=0;j<numPeliculas;j++){
						if(strcmp(peliculas[i].nombre, peliculas[j].nombre) < 0){
							temporal = peliculas[j];
							peliculas[j]=peliculas[i];
							peliculas[i]=temporal;
						}
					}
				}
				system("cls");
				printf("\n ORDENAR LISTADO DE PELICULAS POR NOMBRE");	
				printf("\n_________________________________________________________________________________________________\n");	
				for (i=0;i<numPeliculas;i++){
					printf("\n\nNOMBRE: %s",peliculas[i].nombre);
				}	
				printf("\n_________________________________________________________________________________________________\n");
				printf("\nPULSE INTRO PARA SALIR");
				getch();
				system("cls");										
				break;
			case 2:
				for (i=0;i<numPeliculas;i++){
					for (j=0;j<numPeliculas;j++){
						if(peliculas[i].anio < peliculas[j].anio){
							temporal = peliculas[j];
							peliculas[j]=peliculas[i];
							peliculas[i]=temporal;
						}
					}
				}
				system("cls");
				printf("\n ORDENAR LISTADO DE PELICULAS POR FECHA MENOS RECIENTE");	
				printf("\n_________________________________________________________________________________________________\n");		
				for (i=0;i<numPeliculas;i++){
					printf("\n\nNOMBRE: %s \n\tFECHA: %d",peliculas[i].nombre,peliculas[i].anio);
				}	
				printf("\n_________________________________________________________________________________________________\n");
				printf("\nPULSE INTRO PARA SALIR");
				getch();
				system("cls");										
				break;
			case 3:
				for (i=0;i<numPeliculas;i++){
					for (j=0;j<numPeliculas;j++){
						if(peliculas[i].anio > peliculas[j].anio){
							temporal = peliculas[j];
							peliculas[j]=peliculas[i];
							peliculas[i]=temporal;
						}
					}
				}
				system("cls");
				printf("\n ORDENAR LISTADO DE PELICULAS POR FECHA MAS RECIENTE");	
				printf("\n_________________________________________________________________________________________________\n");		
				for (i=0;i<numPeliculas;i++){
					printf("\n\nNOMBRE: %s \n\tFECHA: %d",peliculas[i].nombre,peliculas[i].anio);
				}	
				printf("\n_________________________________________________________________________________________________\n");
				printf("\nPULSE INTRO PARA SALIR");
				getch();
				system("cls");										
				break;
			case 4:
				for (i=0;i<numPeliculas;i++){
					for (j=0;j<numPeliculas;j++){
						if(strcmp(peliculas[i].genero, peliculas[j].genero) < 0){
							temporal = peliculas[j];
							peliculas[j]=peliculas[i];
							peliculas[i]=temporal;
						}
					}
				}
				system("cls");
				printf("\n ORDENAR LISTADO DE PELICULAS POR GENERO");	
				printf("\n_________________________________________________________________________________________________\n");		
				for (i=0;i<numPeliculas;i++){
					printf("\n\nNOMBRE: %s \n\tGENERO: %s",peliculas[i].nombre,peliculas[i].genero);
				}	
				printf("\n_________________________________________________________________________________________________\n");
				printf("\nPULSE INTRO PARA SALIR");
				getch();
				system("cls");										
				break;
			case 0:
				system("cls");
				printf("\n  PULSE INTRO PARA VOLVER AL MENU PRINCIPAL");
				break;		
		}
		getch();
	}while(numero != 0||numero>=5);
}

/*	5- Implemento función	void generarDocumentoEspecificoHtml()
	Permite generar un documento HTML de una pelicula concreta a partir de su nombre.
*/
void generarDocumentoEspecificoHtml(){
	int x=0;
	char consultar[MAX_CARACTERES];
	char peliculaEncontrada='0';
	printf("\nCREANDO HTML...");
	printf("\nINTRODUZCA EL NOMBRE DE LA PELICULA: ");
	gets(consultar);
	while(x<numPeliculas && peliculaEncontrada=='0'){
		if(strcmp(toupper(peliculas[x].nombre),toupper(consultar))==0){
			peliculaEncontrada='1';
			char nuevoHtml[100];
			strcpy(nuevoHtml,peliculas[x].nombre);
			strcat(nuevoHtml,".html");
			FILE *html;
			html = fopen(nuevoHtml, "w");
			fprintf(html,"<!DOCTYPE html>\n");
			fprintf(html,"<html lang='es'>\n");
			fprintf(html,"<head>\n");
			fprintf(html,"\t<meta charset='UTF-8'>\n");
			fprintf(html,"\t<title>%s</title>\n",peliculas[x].nombre );
			fprintf(html,"</head>\n");
			fprintf(html,"<body style='padding: 0px; margin:0px; width: 100%;'><br>\n");
			fprintf(html,"\t<header style='width: 100%;background-color: #3e3b42;padding: 10px;'><br>\n");
			fprintf(html,"\t\t<img src='logo.svg' alt='logo'>\n");
			fprintf(html,"\t\t<span style='margin-left: 10px;vertical-align:top;font-family: sans-serif;font-weight: bolder;font-size: 40pt;color: white;'>CINE</span><br>\n");
			fprintf(html,"\t</header><br>\n");
			fprintf(html,"\t<nav style='width: 100%;'><br>\n");
			fprintf(html,"\t\t<center><img src='%s' style='width: 30%;padding: 10px'></center><br>\n",peliculas[x].imagen);
			fprintf(html,"\t</nav><br>\n");
			fprintf(html,"\t<footer style='width: 100%;text-align: center;background-color: #3e3b42;color: #e3e5e8;'><br>\n");
			fprintf(html,"\t<div style='font-weight: bold; font-size:20pt;font-family: sans-serif;'><br>\n");
			fprintf(html,"\t\t<center><table style='font-weight: bold; font-size:15pt;font-family: sans-serif;'><br>\n");
			fprintf(html,"\t\t\t<tr><td>Titulo:</td><td>		%s</td></tr>\n",peliculas[x].nombre);
			fprintf(html,"\t\t\t<tr><td>Fecha:</td><td>			%d</td></tr>\n",peliculas[x].anio);
			fprintf(html,"\t\t\t<tr><td>Pais:</td><td>			%s</td></tr>\n",peliculas[x].pais);
			fprintf(html,"\t\t\t<tr><td>Presupuesto:</td><td>	%d</td></tr>\n",peliculas[x].presupuesto);
			fprintf(html,"\t\t\t<tr><td>G&eacute;nero:</td><td>		%s</td></tr>\n",peliculas[x].genero);
			fprintf(html,"\t\t</table></center><br>\n");
			fprintf(html,"\t\t<p>&copy; Alberto Montealegre 2019</p><br>\n");
			fprintf(html,"\t</footer><br>\n");
			fprintf(html,"</body><br>\n");
			fprintf(html,"</html>");
			fclose(html);
		}
		x++;
	}
	printf("\nHTML CREADO");
	printf("\n\n\nPULSE INTRO PARA SALIR");
	getch();	
}

/*	6- Implemento función	void generarDocumentosHtml()
	Permite generar un documento HTML por cada pelicula y un documento principal que enlace con cada una de ellas.
*/ 
void generarDocumentosHtml(){
	int i;
	printf("\n\nNUMPELICULAS: %d \n\n", numPeliculas);
	for(i=0; i<numPeliculas; i++){
		char nuevoHtml[100];
		strcpy(nuevoHtml,peliculas[i].nombre);
		strcat(nuevoHtml,".html");
		FILE *html;
		html = fopen(nuevoHtml, "w");
		fprintf(html,"<!DOCTYPE html>\n");
			fprintf(html,"<html lang='es'>\n");
			fprintf(html,"<head>\n");
			fprintf(html,"\t<meta charset='UTF-8'>\n");
			fprintf(html,"\t<title>%s</title>\n",peliculas[i].nombre );
			fprintf(html,"</head>\n");
			fprintf(html,"<body style='padding: 0px; margin:0px; width: 100%;'><br>\n");
			fprintf(html,"\t<header style='width: 100%;background-color: #3e3b42;padding: 10px;'><br>\n");
			fprintf(html,"\t\t<img src='logo.svg' alt='logo'>\n");
			fprintf(html,"\t\t<span style='margin-left: 10px;vertical-align:top;font-family: sans-serif;font-weight: bolder;font-size: 40pt;color: white;'>CINE</span><br>\n");
			fprintf(html,"\t</header><br>\n");
			fprintf(html,"\t<nav style='width: 100%;'><br>\n");
			fprintf(html,"\t\t<center><img src='%s' style='width: 30%;padding: 10px'></center><br>\n",peliculas[i].imagen);
			fprintf(html,"\t</nav><br>\n");
			fprintf(html,"\t<footer style='width: 100%;text-align: center;background-color: #3e3b42;color: #e3e5e8;'><br>\n");
			fprintf(html,"\t<div style='font-weight: bold; font-size:20pt;font-family: sans-serif;'><br>\n");
			fprintf(html,"\t\t<center><table style='font-weight: bold; font-size:15pt;font-family: sans-serif;'><br>\n");
			fprintf(html,"\t\t\t<tr><td>Titulo:</td><td>		%s</td></tr>\n",peliculas[i].nombre);
			fprintf(html,"\t\t\t<tr><td>Fecha:</td><td>			%d</td></tr>\n",peliculas[i].anio);
			fprintf(html,"\t\t\t<tr><td>Pais:</td><td>			%s</td></tr>\n",peliculas[i].pais);
			fprintf(html,"\t\t\t<tr><td>Presupuesto:</td><td>	%d</td></tr>\n",peliculas[i].presupuesto);
			fprintf(html,"\t\t\t<tr><td>Genero:</td><td>		%s</td></tr>\n",peliculas[i].genero);
			fprintf(html,"\t\t</table></center><br>\n");
			fprintf(html,"\t\t<p>&copy; Alberto Montealegre 2019</p><br>\n");
			fprintf(html,"\t</footer><br>\n");
			fprintf(html,"</body><br>\n");
			fprintf(html,"</html>");
		fclose(html);
	}

	/* HTML de todas las peliculas*/
	int s;
	printf("\nCREANDO LISTADO HTML...");
	FILE *html;
	html = fopen("Listado.html", "w");
	fprintf(html,"<!DOCTYPE html>\n");
	fprintf(html,"<html lang='es'>\n");
	fprintf(html,"<head>\n");
	fprintf(html,"\t<meta charset='UTF-8'>\n");
	fprintf(html,"\t<title>Listado de Peliculas</title>\n");
	fprintf(html,"</head>\n");
	fprintf(html,"<body style='padding: 0px; margin:0px; width: 100;'><br>\n");
	fprintf(html,"\t<header style='width: 100;background-color: #3e3b42;padding: 10px;'><br>\n");	
	fprintf(html,"\t\t<img src='logo.svg' alt='logo' style='width: 70px; -webkit-border-radius: 20px 20px 20px 20px;'>\n");
	fprintf(html,"\t\t<span style='margin-left: 10px;vertical-align:top;font-family: sans-serif;font-weight: bolder;font-size: 40pt;color: white;'>CINE</span><br>\n");
	fprintf(html,"\t</header><br>\n");	
	fprintf(html,"\t<nav style='width: 100;flex-direction: column; display:flex;flex-direction: column;justify-content: center;align-items: center;'><br>\n");
	for(s=0; s<numPeliculas; s++){		
		fprintf(html,"\t\t<div>\n");
		fprintf(html,"\t\t\t<a href='%s.html' target='_blank'><img src='%s' alt='PeliCartel' width='150px' height='200px''></a>\n",peliculas[s].nombre,peliculas[s].imagen);
		fprintf(html,"\t\t\t<div style='display: inline-block;line-height: 20px;vertical-align: top;margin-left: 30px;font-weight: bold;font-family: Verdana;'>\n");
		fprintf(html,"\t\t\t\t<p>Titulo: %s</p>\n",peliculas[s].nombre);
		fprintf(html,"\t\t\t\t<p>Fecha: %d</p>\n",peliculas[s].anio);
		fprintf(html,"\t\t\t\t<p>Pais: %s</p>\n",peliculas[s].pais);
		fprintf(html,"\t\t\t\t<p>Presupuesto: </p>\n",peliculas[s].presupuesto);
		fprintf(html,"\t\t\t\t<p>G&eacute;nero:</p>\n",peliculas[s].genero);
		fprintf(html,"\t\t\t</div>\n");
		if(s<numPeliculas-1){
			fprintf(html,"\t\t\t<br><br><hr><br><br>\n");
		}
	}
	fprintf(html,"\t\t</div>\n");
	fprintf(html,"\t\t</nav><br>\n");
	fprintf(html,"\t\t<footer style='width: 100;text-align: center;background-color: #3e3b42;color: #e3e5e8;'><br>\n");
	fprintf(html,"\t\t\t<div style='font-weight: bold; font-size:20pt;font-family: sans-serif;'><br>\n");
	fprintf(html,"\t\t\t\t<p>&copy; Alberto Montealegre 2019</p>\n");
	fprintf(html,"\t\t\t</div><br>\n");
	fprintf(html,"\t\t</footer><br>\n");
	fprintf(html,"</body>\n");
	fprintf(html,"</html>\n");
	fclose(html);
	printf("\nDOCUMENTOS CREADOS");
	printf("\nPULSE INTRO PARA SALIR");
}
