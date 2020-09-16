#include <curses.h> //Incluiremos una librería a nuestro sistemas
#include <stdio.h>
#include <stdlib.h>

void salir (void); //Esta funcion hará que nuestro programa se cierre
int main(void)
{
    int tamannovertical=25;
    int tamannoHorizontal=tamannovertical*3;
    int i;char c;
    initscr(); /*Esta función inicializa ncurses. Para todos los programas
    debemos siempre inicializar ncurses y luego finalizarla, como
    veremos adelante. */
    c=95;//caracter ascci horizontal
    for(i=1;i<=tamannoHorizontal;i++)
    {
        //linea horizontal superior
        move(1,i); //Aqui estamos moviendo el cursor para a linea 1 columna i.
        printw("%c",c); //Imprimimos un texto en la posición establecida.
        //linea horizontal inferior
        move(tamannovertical,i); //Aqui estamos moviendo el cursor para a linea 40 columna i.
        printw("%c",c); //Imprimimos un texto en la posición establecida.
    } 
    c=124 ; //caracter ascci vertical

    for(i=2;i<=tamannovertical;i++) 
    {
        //linea vertical izquierda
        move(i,1);
        printw("%c",c);
        //linea vertical derecha
        move(i,tamannoHorizontal);
        printw("%c",c);
    }
    refresh();
   // getch(); //si se desea hasta que se pulse una tecla
    napms(3000);//se detiene tres segundo
    salir(); // Salir del programa
}
/*********************************************************************/
void salir()
{

    endwin(); /*Siempre que finalizamos un programa con una biblioteca curses,
 debemos ejecutar este comando.*/ 
    
} 