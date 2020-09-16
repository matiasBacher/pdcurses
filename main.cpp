#include <curses.h>

int main () {
 char cadena[128];
 initscr();
 move (10,2); 
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