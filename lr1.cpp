#define M_PI_5 0.628319

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float d, s, x, y;
printf("Enter d, s\n");
scanf("%f%f", &d, &s);
x=3+cos(M_PI_4)*d+sin(d+s);
printf("\nx=%f\n", x);
y=tan(M_PI_5)+5*d-s;
printf("\ny=%f\n", y);
getch();
return 0;
}