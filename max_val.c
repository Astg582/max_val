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

	printf("This is the biger number\n%d\n", max) ;
 }

int min_val(int arr[])
{
        int min = arr[0];
        for(int i = 0; i < sizeof(arr[i]); i++)
        {
                if (arr[i] < min) {
                        min = arr[i];
                }
        }
        printf("this is the smallest number:\n%d\n", min) ;
}

 


int main(){
  
  int val_arr[5];
  printf("enter multiple numbers\n");
  for (int j = 0; j < 5; ++j){
  scanf("%d", &val_arr[j]);
  
  }
 
 printf("if you need largest value write 'm' if you need the nmaller wallest write 's' \n");
	char answ;
 scanf(" %c", &answ);
  
 if(answ == 'm')
 {
	 int max = max_val(val_arr);
 }else if(answ == 's'){
	 int min = min_val(val_arr);
 }else{
	 int max = max_val(val_arr);
	 int min = min_val(val_arr);
}
}
