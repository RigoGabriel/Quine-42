#define _GNU_SOURCE
#include <stdio.h>

int main(){
	int i = 5;
	FILE *fd;
	char *file_name = NULL;
	char *a;
	while (i > 0){
		i--;
		asprintf(&file_name, "Sully_%d.c", i);
		fd = fopen(file_name, "w");
		a = "#define _GNU_SOURCE%2$c#include <stdio.h>%2$c%2$cint main(){%2$c%1$cint i = %4$d%2$c%1$cFILE *fd;%2$c%1$cchar *file_name = NULL;%2$c%1$cchar *a;%2$c%1$cwhile (i > 0){%2$c%1$c%1$ci--;%2$c%1$c%1$casprintf(&file_name, %3$cSully_%6$cd.c%3$c, i);%2$c%1$c%1$cfd = fopen(file_name, %3$cw%3$c);%2$c%1$c%1$ca = %3$c%5$s%3$c;%2$c%1$c%1$cfprintf(fd, a, 9, 10, 34, i, a, 37);%2$c%1$c}%2$c}%2$c";
		fprintf(fd, a, 9, 10, 34, i, a, 37);
	}
}
