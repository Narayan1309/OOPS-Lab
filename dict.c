//dict.c
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<error.h>
typedef int *Dict;
Dict ConsDict(int size) {
int *p=(int*)malloc((size+2)*sizeof(int));
p[0] = 0; p[1] = size;
return p;
}
void fx(int arr[],int n){
 for (int i = 0; i < n; i++)
 {
   arr[i]=(3*arr[i]*arr[i])-(8*arr[i]);
 }
 
}
void BubbleSort(int arr[], int n){
  fx(arr,n);
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]) {  
        int temp = arr[j];  
        arr[j] = arr[j + 1];  
        arr[j + 1] = temp;  
      }  
    }  
  }  
}  
void SortDict(Dict d) {
BubbleSort(d+2,d[0]);
// Sort d[0]=actual count elements in it
}
void InsertDict(Dict d, int i) {
if(d[0]==d[1]) error(-1,0,"Dictionally full!");
d[d[0]+2]=i;
d[0]+=1;
}
void DisplayDict(Dict d) {
int i;
printf("Displaying dictionary with %d elements, size %d: ",d[0],d[1]);
for(i=2; i<d[0]+2; i++) {
printf("Element%02d=%d ",i-1,d[i]);
}
printf("\n");
}