#include <stdio.h>
//read two numbers and interchange the values using three logics
//LOGIC1
int main()
{
  int a,b,temp;
  printf("Enter value 1:");
  scanf("%d",&a);
  printf("Enter value 2:");
  scanf("%d",&b);
  printf("Before interchange: a = %d, b = %d\n", a, b);
  temp=a;
  a=b;
  b=temp;
  printf("After interchange: a = %d, b = %d\n", a, b);
    return 0;
}


#include <stdio.h>
//read two numbers and interchange the values using three logics
//LOGIC2
int main()
{
  int a,b;
  printf("Enter value 1:");
  scanf("%d",&a);
  printf("Enter value 2:");
  scanf("%d",&b);
  printf("Before interchange: a = %d, b = %d\n", a, b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After interchange: a = %d, b = %d\n", a, b);
    return 0;
}


#include <stdio.h>
//read two numbers and interchange the values using three logics
//LOGIC3
int main()
{
  int a,b;
  printf("Enter value 1:");
  scanf("%d",&a);
  printf("Enter value 2:");
  scanf("%d",&b);
  printf("Before interchange: a = %d, b = %d\n", a, b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("After interchange: a = %d, b = %d\n", a, b);
    return 0;
}
