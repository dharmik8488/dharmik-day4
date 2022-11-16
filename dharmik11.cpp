#include<stdio.h>
  main(){
  	int x=70;
  	int y=80;
  	int z = 60;
  	int h;
  	
  	h=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z*x)));
  	
  	printf("%d",h);
  	
  }
