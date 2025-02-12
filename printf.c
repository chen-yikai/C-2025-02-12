#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 10,y,z =20;
	printf("x is %d, y is %d, z is %d \n",x,y,z);
	printf("x + y + z = %d",x+y+z);
	int i = 5,j,k=3;
	float x = 5.5,y;
	j = i / k;
	y = i/ k;
	printf("%d \n",j);
	printf("%f \n",5);
	printf("%f \n",y);
	printf("%f \n",(float) i/k);
	printf("%f \n",i/(float)k);
	printf("%f \n",(float)(i/k));
	printf("x/k= %d\n",x/k);
	printf("x/k= %f\n",x/k);
	return 0;
}