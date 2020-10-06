#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
long int f;
int k, s;
double h, p, eps, x, f_ex, f_apr, termen, delta;
h=0.1;
eps=0.00001;
printf(" x | f_ex | f_apr | delta\n");
for (x=0; x<2; x=x+h) {
k=0;
s=1;
f=1;
p=1;
f_apr=0;
termen=s*p/f;
f_apr=f_apr+termen;
while(fabs(termen)>eps) {
k++;
s=s*(-1);
f=f*k;
p=p*x*x;
termen=s*p/f;
f_apr=f_apr+termen;
}
f_ex=exp(2*x);
delta=fabs(f_apr-f_ex);
printf(" %.1lf %.5lf %.5lf %.5lf\n", x, f_ex, f_apr, delta);
}
}
