#include <stdio.h>

 int max_val( int arr[], int siz)
{     
	
   int	max = arr[0];
	for(int i = 0; i < siz; i++)
		
	{ 
		if ( arr[i] > max){
			max = arr[i];
		}
	}

	printf("This is the biger number\n%d\n", max) ;
 }

int min_val(int arr[], int siz)
{
        int min = arr[0];
        for(int i = 0; i < siz; i++)
        {
                if (arr[i] < min) {
                        min = arr[i];
                }
        }
        printf("this is the smallest number:\n%d\n", min) ;
}

 


int main(){
  
  int val_arr[5];
  int size = (sizeof(val_arr) / sizeof(val_arr[0]));

  printf("enter multiple numbers\n");
  for (int j = 0; j < 5; ++j){
  scanf("%d", &val_arr[j]);
  
  }
 
 printf("if you need largest value write 'm' if you need the nmaller wallest write 's' \n");
	char answ;
 scanf(" %c", &answ);
  
 if(answ == 'm')
 {
	 int max = max_val(val_arr, size);
 }else if(answ == 's'){
	 int min = min_val(val_arr, size);
 }else{
	 int max = max_val(val_arr, size);
	 int min = min_val(val_arr, size);
}
}
