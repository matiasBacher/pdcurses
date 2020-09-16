#include <curses.h>

int main () {
 char cadena[128];
 initscr();
 printw("Dime tu nombre\n");
 scanw("%s",cadena);
 printw("Te llamas: %s\n",cadena);
 refresh();
 getch();
 printw("Escribe la contraseña: ");
 noecho();
 scanw("%s",cadena);
 echo(); 
 printw("La contraseña es: %s\n",cadena); 
 refresh();
 getch();
 endwin();
 return(0);
}