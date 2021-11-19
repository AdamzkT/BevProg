#include "my.h"

int foo;

main()
{
	foo = 7;
	print_foo();
	print(99);

	int x = 7;
	int y = 9;

	//swap_v(x,y); //lefut, de nem változik, mert másolatot hoz létre
	swap_r(x,y); // felcseréli a x,y értékeit
	//swap_cr(x,y); // nem is tudom definiálni mert a fgv. konstans értékeket próbál változtatni

	//swap_v(7,9); //lefut, nem csinál semmit
	//swap_r(7,9); // error: nem referencia, hanem adott érték
	//swap_cr(7,9); // függvényt nem tudom definiálni

    //const int cx = 7;
    //const int cy = 9;

    //swap_v(cx,cy); //lefut, nem csinál semmit
	//swap_r(cx,cy); // error: nem tud constanst mozgatni
	//swap_cr(cx,cy); // függvényt nem tudom definiálni

	//swap_v(7.7,9.9); //lefut, nem csinál semmit
	//swap_r(7.7,9.9); // error: nem referencia, hanem adott érték
	//swap_cr(7.7,9.9); // függvényt nem tudom definiálni

	//double dx = 7.7;
    //double dy = 9.9;

    //swap_v(dx,dy); //lefut(7,9), nem csinál semmit
	//swap_r(dx,dy); // error: nem integer
	//swap_cr(dx,dy); // függvényt nem tudom definiálni

	//swap_v(7.7,9.9); //lefut(7,9), nem csinál semmit
	//swap_r(7.7,9.9); // error: nem referencia, hanem adott érték
	//swap_cr(7.7,9.9); // függvényt nem tudom definiálni

	print(x);
	print(y);

	return 0;
}