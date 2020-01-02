#include <stdio.h>

int max(int m1,int m2){

  if(m1>=m2){
  
   return m1;
 
  }else{
  
    return m2;

  }

}



int main(){

int value = max(20,30);
	printf("the max num is %d\n",value);

return 0;
}
