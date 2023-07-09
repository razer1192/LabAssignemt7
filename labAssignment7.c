

int bubbleSort(int *array, int n){
    //printf("%i", array[1]);
    //array[1] = 2;
    //swap(array, 1,2);
    printf("The swaps are: ");
    for(int i = 0; i < n; i++){
        //outer loop tracks how many times the bubble sort was ran
        int tmp  = 0;
        //int tempArray[n-1];
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j+1]){
                swap(array,j,j+1);
                tmp++;
            }


        }
        //printf("on iteration %i, swap was performed %i times",i+1,tmp);
        printf(" %i  ", tmp);
        
    }
    printf("\n");



}


int main(){
    int length = 9;
    
    
    int tempArray[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    printArray(&tempArray, length);
    bubbleSort(&tempArray, length);
    //printf("%i", tempArray[1]);
    //printf("%i", tempArray[2]);
    printArray(&tempArray, length);
    

}
int swap(int *array, int pos1, int pos2){
    int tmp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = tmp;

}
int printArray(int *array, int n){
    printf("The current array is: ");
    for( int i = 0; i<n; i++){
        printf("%i  ",array[i]);
    }
    printf("\n");
}