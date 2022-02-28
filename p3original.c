//   n!
//---------
// (n-r)!r!

#include <stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("Enter 'n' and 'r':- ");
  scanf("%d %d",n,r);
}
int ncr(int n,int r)
{
  int i,nf=n,rf=r,n_rf=n-r;
  int ncr;
  for(i=1;i<n;i++)
    nf=nf*(n-i);
  for(i=1;i<r;i++)
    rf=rf*(r-i);
  for(i=1;i<(n-r);i++)
    n_rf=n_rf*((n-r)-i);
  
  ncr=nf/(n_rf*rf);
  return ncr;
}
void output(int n, int r, int result)
{
  printf("The Combination with n=%d,r=%d is %d",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}