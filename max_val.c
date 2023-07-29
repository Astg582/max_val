#include <stdio.h>

 int max_val( int arr[])
{     
   int	max = arr[0];
	for(int i = 0; i < sizeof(arr[i]); i++)
	{ 
		if ( arr[i] > max){
			max = arr[i];
		}
	}

	printf(" Max value in array is:%d\n", max);
 }



int main(){
  
  int val_arr[5] = {};
  printf("enter multiple numbers\n");
  for (int j = 0; j < 5; ++j){
  scanf("%d", &val_arr[j]);
  
  }
 
int max = max_val ( val_arr );
}

