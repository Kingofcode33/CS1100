#include <stdio.h>

int main() {
	
int i;
i=15;

if (i %3==0 &&i%5==0){
	printf ("fizzbuzz\n"); 
}
else if (i %3==0){
	printf ("fizz\n");
}
else if (i %5==0){
	printf ("buzz\n");
}
else{

	printf (" %d " , i);

}

return 0;
}

