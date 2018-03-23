#include <stdio.h>
#define PI 3.141592
float aCirc (float r);
float aCuad (float l);
float aTri (float b, float h);
int main()
{
char elige;
float ra,ba,hi,la,area;
printf("elige el area que de sea calcular, triangulo(l), circulo(c), cuadrado(x):\n");
scanf("%c",&elige);
	switch (elige)
	{
	case'l':
		printf("introduce la base y la altura:\n");
		scanf("%f %f",&ba,&hi);
		area=aTri(ba,hi);
		break;
	case'c':
		printf("introduce el racio del circulo\n");
		scanf("%f",&ra);
		area=aCirc(ra);
		break;
	case'x':
		printf("elige el lado del cuadrado\n");
		scanf("%f",&la);
		area=aCuad(la);
		break;
	}
	printf("%f",area);


return 0;
}
float aCirc(float r)
{
	float area;
	area= PI*r*r;
	return area;
}
float aTri(float b,float h)
{
	float area;
	area=(b*h)/2.00;
	return area;
}
float aCuad(float l)
{
	float area;
	area=l*l;
	return area;
}
