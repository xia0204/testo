#include <stdio.h>

int min(int m1,int m2){

  if(m1>=m2){
  
   return m2;
 
  }else{
  
    return m1;

  }

}



int main(){

int value = min(20,30);
	printf("the min num is %d\n",value);

return 0;
}
