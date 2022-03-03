#include<stdio.h>

struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;

int find_gcd(int a,int b)
{
  int i,hcf;
  for(i=1;i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf=i;
    }
  }
  return hcf;
}
Fraction input_fraction()
{
  Fraction x;
  printf("Enter numerator and denominator:- ");
  scanf("%d %d",&x.num,&x.den);
  return x;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  int i,hcf;
  sum.num=(f1.num*f2.den)+(f2.num*f1.den);
  sum.den=(f1.den*f2.den);
  hcf=find_gcd(sum.num,sum.den);
  sum.num=sum.num/hcf;
  sum.den=sum.den/hcf;
  return sum;
}

void output(Fraction f1, Fraction f2, Fraction f3)
{
  printf("Sum of %d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}
int main()
{
  Fraction f1,f2,f3;
  f1=input_fraction();
  f2=input_fraction();
  f3=add_fractions(f1,f2);
  output(f1,f2,f3);
  return 0;
}
