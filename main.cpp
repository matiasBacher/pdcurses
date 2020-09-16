#include <curses.h>

int main () {
 char cadena[128];
 initscr();
 move (10,2); 
 if (has_colors()) {
 start_color();
 init_pair(1,COLOR_RED,COLOR_YELLOW);
 attron(COLOR_PAIR(1));
 printw("Escribe la contraseña: ");
 attroff(COLOR_PAIR(1));
 } 
 noecho();
 scanw("%s",cadena);
 echo(); 
 printw("La contraseña es: %s\n",cadena); 
 refresh();
 getch();
 endwin();
 return(0);
}