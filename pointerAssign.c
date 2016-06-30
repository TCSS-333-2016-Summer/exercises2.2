#include <stdio.h>
#include <stdlib.h>
int main(){
 
 float a[]={1.0f,2.0f,3.0f,4.0f,5.0f};
 int *b= (int*)&a;
 float *c=(float*)&a;

 for (int i=0;i<5;i++){ 
  printf ("a[i]=%f b[i]=%d c[i]=%f\n",a[i],b[i],c[i]);
	}
	 
 return 0;
}
