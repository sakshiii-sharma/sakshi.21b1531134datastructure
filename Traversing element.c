#include<stdio.h>
int main(){
 int a[100],n,i,j;
 printf("Enter array size : ");
 scanf("%d", &n);
 printf("Enter array elements :\n");
 for(i=0 ; i<n ; i++){
 scanf("%d", &a[i]);
 }
 printf("Array is : \n");
 for (j=0 ; j<n ;j++){
 printf("%d ", a[j]);
 }
 printf("\n");
 printf("This program is written by Sakshi Sharma (Roll No. 2100321530139).\n");
 return 0;
}
