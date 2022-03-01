#include<stdio.h>
int input_size()
{
  int x;
  printf("Enter size of array:- ");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter number:");
    scanf("%d",&a[i]);
  }
}
int find_largest(int n,int a[n])
{
  int i,temp=0;
  for(i=0;i<n-1;i++)
  {
    if(a[temp]>a[temp+1])
    {
      temp=temp;
    }
    else if(a[temp+1]>a[temp])
    {
      temp=temp+1;
    }
  }return temp;
}
void out_put(int n,int a[n],int largest)
{
  printf("The largest number in the array is %d whose index is %d",a[largest],largest);
}
int main()
{
  int n,largest;
  n=input_size();
  int a[n];
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}