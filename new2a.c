#include<ncurses.h>
void drawflappy(int r, int c) {
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);
	bkgd(COLOR_PAIR(1));
	mvprintw(0 + c, 15 + r, "-");
	mvprintw(0 + c, 16 + r, "-");
	mvprintw(0 + c, 17 + r, "-");
	mvprintw(0 + c, 18 + r, "-");
	mvprintw(0 + c, 19 + r, "-");
	mvprintw(0 + c, 20 + r, "-");
	mvprintw(0 + c, 21 + r, "-");
	mvprintw(0 + c, 22 + r, "-");
	mvprintw(0 + c, 23 + r, "-");
	mvprintw(0 + c, 24 + r, "-");
	mvprintw(0 + c, 25 + r, "-");
	mvprintw(0 + c, 26 + r, "-");
	mvprintw(0 + c, 27 + r, "-");
	mvprintw(0 + c, 28 + r, "-");
	mvprintw(0 + c, 29 + r, "-");
	mvprintw(0 + c, 30 + r, "-");
	mvprintw(0 + c, 31 + r, "-");
	mvprintw(1 + c, 14 + r, "|");
	mvprintw(1 + c, 25 + r, "_");
	mvprintw(1 + c, 26 + r, "_");
	mvprintw(1 + c, 27 + r, "_");
	mvprintw(1 + c, 28 + r, "_");
	mvprintw(1 + c, 32 + r, "|");
	mvprintw(2 + c, 11 + r, "-");
	mvprintw(2 + c, 12 + r, "-");
	mvprintw(2 + c, 13 + r, "-");
	mvprintw(2 + c, 14 + r, "-");
	mvprintw(2 + c, 15 + r, "_");
	mvprintw(2 + c, 16 + r, "_");
	mvprintw(2 + c, 17 + r, "_");
	mvprintw(2 + c, 18 + r, "_");
	mvprintw(2 + c, 19 + r, "_");
	mvprintw(2 + c, 25 + r, "|");
	mvprintw(2 + c, 28 + r, "|");
	mvprintw(2 + c, 32 + r, "-");
	mvprintw(2 + c, 33 + r, "-");
	mvprintw(2 + c, 34 + r, "-");
	mvprintw(2 + c, 35 + r, "-");
	mvprintw(2 + c, 36 + r, "-");
	mvprintw(2 + c, 37 + r, "-");
	mvprintw(3 + c, 11 + r, "|");
	mvprintw(3 + c, 20 + r, "|");
	mvprintw(3 + c, 25 + r, "|");
	mvprintw(3 + c, 28 + r, "|");
	mvprintw(3 + c, 37 + r, "|");
	mvprintw(4 + c, 10 + r, "|");
	mvprintw(4 + c, 20 + r, "-");
	mvprintw(4 + c, 21 + r, "-");
	mvprintw(4 + c, 25 + r, "|");
	mvprintw(4 + c, 26 + r, "_");
	mvprintw(4 + c, 27 + r, "_");
	mvprintw(4 + c, 28 + r, "|");
	mvprintw(4 + c, 37 + r, "|");
	mvprintw(5 + c, 10 + r, "|");
	mvprintw(5 + c, 22 + r, "|");
	mvprintw(5 + c, 37 + r, "|");
	mvprintw(6 + c, 11 + r, "|");
	mvprintw(6 + c, 12 + r, "_");
	mvprintw(6 + c, 13 + r, "_");
	mvprintw(6 + c, 20 + r, "-");
	mvprintw(6 + c, 21 + r, "-");
	mvprintw(6 + c, 22 + r, "|");
	mvprintw(6 + c, 27 + r, "_");
	mvprintw(6 + c, 28 + r, "_");
	mvprintw(6 + c, 29 + r, "_");
	mvprintw(6 + c, 30 + r, "_");
	mvprintw(6 + c, 31 + r, "_");
	mvprintw(6 + c, 32 + r, "_");
	mvprintw(6 + c, 33 + r, "_");
	mvprintw(6 + c, 34 + r, "_");
	mvprintw(6 + c, 35 + r, "_");
	mvprintw(6 + c, 36 + r, "_");
	mvprintw(6 + c, 37 + r, "|");
	mvprintw(6 + c, 38 + r, "_");
	mvprintw(6 + c, 39 + r, "_");
	mvprintw(7 + c, 14 + r, "|");
	mvprintw(7 + c, 20 + r, "|");
	mvprintw(7 + c, 28 + r, "|");
	mvprintw(7 + c, 29 + r, "_");
	mvprintw(7 + c, 30 + r, "_");
	mvprintw(7 + c, 31 + r, "_");
	mvprintw(7 + c, 32 + r, "_");
	mvprintw(7 + c, 33 + r, "_");
	mvprintw(7 + c, 34 + r, "_");
	mvprintw(7 + c, 35 + r, "_");
	mvprintw(7 + c, 36 + r, "_");
	mvprintw(7 + c, 37 + r, "_");
	mvprintw(7 + c, 38 + r, "|");
	mvprintw(7 + c, 39 + r, "|");
	mvprintw(8 + c, 14 + r, "|");
	mvprintw(8 + c, 15 + r, "-");
	mvprintw(8 + c, 16 + r, "-");
	mvprintw(8 + c, 17 + r, "-");
	mvprintw(8 + c, 18 + r, "-");
	mvprintw(8 + c, 19 + r, "-");
	mvprintw(8 + c, 20 + r, "|");
	mvprintw(8 + c, 29 + r, "|");
	mvprintw(8 + c, 30 + r, "_");
	mvprintw(8 + c, 31 + r, "_");
	mvprintw(8 + c, 32 + r, "_");
	mvprintw(8 + c, 33 + r, "_");
	mvprintw(8 + c, 34 + r, "_");
	mvprintw(8 + c, 35 + r, "_");
	mvprintw(8 + c, 36 + r, "_");
	mvprintw(8 + c, 37 + r, "_");
	mvprintw(8 + c, 38 + r, "_");
	mvprintw(8 + c, 39 + r, "|");
	mvprintw(9 + c, 14 + r, "|");
	mvprintw(9 + c, 30 + r, "|");
	mvprintw(9 + c, 31 + r, "_");
	mvprintw(9 + c, 32 + r, "_");
	mvprintw(9 + c, 33 + r, "_");
	mvprintw(9 + c, 34 + r, "_");
	mvprintw(9 + c, 35 + r, "_");
	mvprintw(9 + c, 36 + r, "_");
	mvprintw(9 + c, 37 + r, "|");
	mvprintw(10 + c, 14 + r, "-");
	mvprintw(10 + c, 15 + r, "-");
	mvprintw(10 + c, 30 + r, "|");
	mvprintw(11 + c, 16 + r, "|");
	mvprintw(11 + c, 17 + r, "_");
	mvprintw(11 + c, 18 + r, "_");
	mvprintw(11 + c, 19 + r, "_");
	mvprintw(11 + c, 20 + r, "_");
	mvprintw(11 + c, 21 + r, "_");
	mvprintw(11 + c, 22 + r, "_");
	mvprintw(11 + c, 23 + r, "_");
	mvprintw(11 + c, 24 + r, "_");
	mvprintw(11 + c, 25 + r, "_");
	mvprintw(11 + c, 26 + r, "_");
	mvprintw(11 + c, 27 + r, "_");
	mvprintw(11 + c, 28 + r, "_");
	mvprintw(11 + c, 29 + r, "_");
	mvprintw(11 + c, 30 + r, "|");
}
void drawupblock(int x) {
	mvprintw(0, 50 + x, "|");
	mvprintw(1, 50 + x, "|");
	mvprintw(2, 50 + x, "|");
	mvprintw(3, 50 + x, "|");
	mvprintw(4, 50 + x, "|");
	mvprintw(5, 50 + x, "|");
	mvprintw(6, 50 + x, "|");
	mvprintw(7, 50 + x, "|");
	mvprintw(8, 50 + x, "|");
	mvprintw(9, 50 + x, "|");
	mvprintw(10, 50 + x, "|");
	mvprintw(11, 50 + x, "|");
	mvprintw(12, 50 + x, "|");
	mvprintw(13, 50 + x, "|");
	mvprintw(14, 50 + x, "|");
	mvprintw(15, 50 + x, "|");	
	mvprintw(15, 51 + x, "_");
	mvprintw(15, 52 + x, "_");
	mvprintw(15, 53 + x, "_");
	mvprintw(15, 54 + x, "_");
	mvprintw(15, 55 + x, "_");
	mvprintw(15, 56 + x, "_");
	mvprintw(15, 57 + x, "_");
	mvprintw(15, 58 + x, "_");
	mvprintw(15, 59 + x, "|");
	mvprintw(14, 59 + x, "|");
	mvprintw(13, 59 + x, "|");
	mvprintw(12, 59 + x, "|");
	mvprintw(11, 59 + x, "|");
	mvprintw(10, 59 + x, "|");
	mvprintw(9, 59 + x, "|");
	mvprintw(8, 59 + x, "|");
	mvprintw(7, 59 + x, "|");
	mvprintw(6, 59 + x, "|");
	mvprintw(5, 59 + x, "|");
	mvprintw(4, 59 + x, "|");
	mvprintw(3, 59 + x, "|");
	mvprintw(2, 59 + x, "|");
	mvprintw(1, 59 + x, "|");
	mvprintw(0, 59 + x, "|");
}
#define DELAY 90000
int main() {
	initscr();
	noecho();
	curs_set(0);
	int row = 0, column = 0, x, y, rowb = 0;
	getmaxyx(stdscr, y, x);
	drawflappy(row, column);
	refresh();
	while(1) {	
		nodelay(stdscr, TRUE);	
		usleep(DELAY);	
	//	drawdownblock;
		refresh();
		int c = getch();
		flushinp();
		if(c == ERR) {
			if(column + 13 > y) {
				clear();
				drawflappy(row, column);
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
				beep();
			}
			else {
				clear();
				drawflappy(row, column + 1);
				column++;
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
			}
		}	
		else if(c == 'x') {
			if(column + 13 > y) {
				clear();
				drawflappy(row, column);
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
				beep();
			}
			else {
				clear();
				drawflappy(row, column + 1);
				column++;
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
			}
		}
		else if(c == 'w') {
			if(column == 0) {
				clear();
				drawflappy(row, column);
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
				beep();
			}
			else {
				clear();
				drawflappy(row, column - 1);
				column--;
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;		
			}
		}
		else if(c == 'a') {
			if(row + 10 == 0) {
				clear();
				drawflappy(row, column);
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
				beep();
			}
			else {
				clear();
				drawflappy(row - 1, column);
				row--;
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;	
			}
		}
		else if(c == 'd') {
			if(row + 41 > x) {
				clear();
				drawflappy(row, column);
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;
				beep();
			}
			else { 
				clear();
				drawflappy(row + 1, column);
				row++;
				drawupblock(rowb - 1);
				rowb--;
				if(rowb + 48 == 0)
					rowb = y + 50;	
			}
		}
		else if(c == 'q') 
			break;
		refresh();
	}
	endwin();
	return 0;
}



	
	

