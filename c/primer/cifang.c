#include <stdio.h>
int main()
{
	float a ,c=1.0;
	int b;
	printf("输入数\n");
	scanf("%f",&a);
	printf("输入次方\n");
	scanf("%d",&b);
	for(int i;i<b;i++)
		c=c*a;
	printf("结果是：%f\n",c);



}
