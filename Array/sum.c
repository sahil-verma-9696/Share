#include<stdio.h>

int sum(int a , int b ){
    return a+b;
}
int multiple(int a , int b ){
    return a*b;
}
int divide(int a , int b ){
    return a/b;
}
int square(int a ){
    return a*a;
}

int main(){
   int result_1 =  sum(2,5);
   int result_2 =  multiple(2,5);
   int result_3 =  divide(2,5);
   int result_4 =  square(5);

   printf("reusult_1 = %d\n",result_1);
   printf("reusult_2 = %d\n",result_2);
   printf("reusult_3 = %d\n",result_3);
   printf("reusult_4 = %d\n",result_4);

}
