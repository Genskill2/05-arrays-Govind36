/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int n){
  int max=arr[0];
  for(int i=0;i<n;i++)
  {
   if(max<arr[i])
       max=arr[i];
  }
   return max; 
}


int min(int arr[], int n){
  int min=arr[0];
  for(int i=0;i<n;i++)
  {
    if(min>arr[i])
       min=arr[i];
    }
   return min;  
}



float average(int arr[], int n){ 
   float sum=0;
   for(int i=0;i<n;i++)
  {
   sum =sum+arr[i]; 
  }
  float avg=sum/n;
  return avg;
  }

int mode(int arr[] , int n){
  int mcount=0 , mval=0;
  for(int i=0 ; i<n; ++i){
    int count = 0;
    for(int j=0; j<n ; ++j){
      if(arr[i]==arr[j])
        ++count ;
    }
    
    if(count > mcount){
      mcount = count;
      mval = arr[i];
    }
  }
   return mval;
 }

int factors(int num, int a[]){
  int j=0;
  for(int i=2;i<=num;i++)
  {    if(num%i==0)
    {
      a[j]=i;
      num=num/i;
      i=1;
      j=j+1;
    } 
  }
 return j;  
}
