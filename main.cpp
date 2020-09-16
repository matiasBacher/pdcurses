#include <curses.h>

int main () {
 char cadena[128];
 initscr();
 printw("Dime tu nombre\n");
 scanw("%s",cadena);
 printw("Te llamas: %s\n",cadena);
 refresh();
 getch();
 endwin();
 return(0);
}