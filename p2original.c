#include <stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction temp;
  printf("Input fraction num then deno:-");
  scanf("%d %d",&temp.num,&temp.den);
  return temp;
}
Fraction Smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  if(f1.num/f1.den<f2.num/f2.den && f1.num/f1.den<f3.num/f3.den)
    return f1;
  else if(f2.num/f2.den<f3.num/f3.den)
    return f2;
  else
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction small)
{
  printf("The smallest fraction among %d/%d,%d/%d,%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,small.num,small.den);
}
int main()
{
  Fraction f1,f2,f3,small;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  small=Smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,small);
  return 0;
}