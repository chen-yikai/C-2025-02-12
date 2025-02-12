 #include <stdio.h>

 int main() {
	float weight;
	int x,y,z;
	scanf("%f",&weight);
	printf("Your weight is: %f \n",weight);	
	printf("Enter three num: ");
	scanf("%d %d %d",&x,&y,&z);
	printf("x is %d, y is %d, z is %d \n",x,y,z);
	printf("Enter a date(spec by \"-\"):");
	scanf("%d-%d-%d",&x,&y,&z);
	printf("Date is %d/%d/%d \n",x,y,z);
}
	