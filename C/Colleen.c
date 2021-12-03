#include <stdio.h>
/*
ceci est un commentaire
*/
void fct(){
	char *a = "#include <stdio.h>%1$c/*%1$cceci est un commentaire%1$c*/%1$cvoid fct(){%1$c%2$cchar *a = %3$c%4$s%3$c;printf(a, 10, 9, 34, a);%1$c}%1$cint main(){%1$c%2$c/*%1$c%2$cle deuxieme commentaire%1$c%2$c*/%1$c%2$cfct();%1$c}%1$c";printf(a, 10, 9, 34, a);
}
int main(){
	/*
	le deuxieme commentaire
	*/
	fct();
}
