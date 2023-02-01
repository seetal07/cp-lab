//claculate the electricity bill by imputing the previous and present meter reading

#include<stdio.h>
#include<math.h>
 int main()
{
	float  prevbill, units,w,x,y,z;
	printf("enter the previous month bill (if not enter 0)");
	scanf("%f",&prevbill);
	printf("number of units of this month:");
	scanf("%f",&units);

	if(units>=100){
		
		x=(units-(units-100))*1.40;
		y=((units-100)-(units-200))*2.50;
		z=(units-200)*3.20;
		printf("the bill of the month is %.2f",x+y+z);

	}
	else if (units<100)
		printf("your bill is %.2f",(units*1.40+prevbill));
	 return 0;
}



