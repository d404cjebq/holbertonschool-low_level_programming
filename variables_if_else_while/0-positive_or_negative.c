#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* int i=0;
if (i>0){ printf("is positive");
}
else if(i<0){
printf("is negative");
}
if(i=0){
printf("is zero");
}
 */
	return (0);
}
