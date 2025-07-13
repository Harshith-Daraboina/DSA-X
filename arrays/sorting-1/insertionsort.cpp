#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int arr1[10];
    int k=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int rel=1;
    printf("{ ");
    for(int i=0;i<n;i++){
        rel=rel*arr[i];
    }
   for(int j=0;j<n;j++){
    arr1[k++]=rel/arr[j];
    printf("%d ",arr1[j]);
   }
  
   printf("}\n");
   return 0;

}