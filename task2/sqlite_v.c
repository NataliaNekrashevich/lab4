#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>

int main(){
	printf("%s\n", sqlite3_libversion());

	return 0;
}
