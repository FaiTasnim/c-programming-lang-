#include <stdio.h>
void exchange(int *a, int *b)//the content of the address
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}


void SelectionSort(int T[],int n)//the function's settings.
{ 
    for(int i=0; i < n-1 ; i++){ //starting from the 1st cell to the last cell (0-4).
        int min_ind = i; //we supppose the 1st cell of T is i.
        for(int j = i+1; j< n; j++){//starting from the 2nd cell to the last's before cell.
            if(T[j]<T[min_ind]){
                min_ind=j;
            }
            exchange(&T[min_ind], &T[i]);//passing by address
            
        }
    }

}


void display(int T[], int n)  
{
	for (int i=0; i< n; ++i){
		printf("%d|",T[i]);
	}
	printf("\n");
}
int main()
{
    int n = 6;
    int T[] ={20,12,10,35,25,0};
    printf("tableau initial:\n");
    display(T,n);
    SelectionSort(T, n);
    printf("sorted table ordre croissant:\n");
    display(T,n);
    
}
