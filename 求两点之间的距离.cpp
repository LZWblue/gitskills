#include<stdio.h>
#include<math.h>

struct point
{
	float x;
	float y;
} p1,p2;
	
int main()
{
	float dist;
	scanf("%f%f%f%f",&p1.x,&p1.y,&p2.x,&p2.y);
	dist = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p2.y - p2.y)*(p2.y - p2.y));
	printf("p1(%.2f,%.2f)与p2(%.2f,%.2f)间的距离是%.2f\n",p1.x,p1.y,p2.x,p2.y,dist);
	return 0;
}
