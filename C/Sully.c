#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
	int i = 5;
	if(i>=0){
	FILE *fd;
	char *file_name = NULL;
	char *name = NULL;
	char *compile = NULL;
	char *exec = NULL;
	if (!access("Sully_5.c", R_OK))
		i--;
	asprintf(&file_name, "Sully_%d.c", i);
	fd = fopen(file_name, "w");
	char a[] = "#define _GNU_SOURCE%2$c#include <stdio.h>%2$c#include <stdlib.h>%2$c#include <string.h>%2$c#include <unistd.h>%2$c%2$cint main(){%2$c%1$cint i = %4$d;%2$c%1$cif(i>=0){%2$c%1$cFILE *fd;%2$c%1$cchar *file_name = NULL;%2$c%1$cchar *name = NULL;%2$c%1$cchar *compile = NULL;%2$c%1$cchar *exec = NULL;%2$c%1$cif (!access(%3$cSully_5.c%3$c, R_OK))%2$c%1$c%1$ci--;%2$c%1$casprintf(&file_name, %3$cSully_%6$cd.c%3$c, i);%2$c%1$cfd = fopen(file_name, %3$cw%3$c);%2$c%1$cchar a[] = %3$c%5$s%3$c;%2$c%1$cfprintf(fd, a, 9, 10, 34, i, a, 37);%2$c%1$casprintf(&name, %3$cSully_%6$cd%3$c, i);%2$c%1$cfclose(fd);%2$c%1$casprintf(&compile, %3$cgcc %6$cs -o %6$cs%3$c, file_name, name);%2$c%1$csystem(compile);%2$c%1$cif(i){%2$c%1$c%1$casprintf(&exec, %3$c./%6$cs%3$c, name);%2$c%1$c%1$csystem(exec);%2$c%1$c}}%2$c%1$creturn(0);%2$c}";
	fprintf(fd, a, 9, 10, 34, i, a, 37);
	asprintf(&name, "Sully_%d", i);
	fclose(fd);
	asprintf(&compile, "gcc %s -o %s", file_name, name);
	system(compile);
	if(i){
		asprintf(&exec, "./%s", name);
		system(exec);
	}}
	return(0);
}
