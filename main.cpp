#include <curses.h>

int main() {
 initscr();
 printw("Hola Bulma!!!");
 refresh();
 getch();
 endwin();
 return 0;  
}