#include <iostream>


using namespace std;
// Swap two elements - Utility function  

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
// partition the array using last element as pivot
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
//quicksort algorithm
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //partition the array 
        int pivot = partition(arr, low, high); 
   
        //sort the sub arrays independently 
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 


void generateAsciArr(){
    char y[10] = {'y', 'i', 'f', 'c', 'o', 's', 't', 'k', 'a', 'h'};

  int asciArr[10];

  for (int i = 0; i < 10; i++)
  {

  }
  
  cout << int(y[0]) <<endl;
}


int main() 
{ 


    int x[11] = {53,5,1,12,19,46,24,34,51,9,15}; 
    int n = sizeof(x)/sizeof(x[0]); 

    char y[10] = {'y', 'i', 'f', 'c', 'o', 's', 't', 'k', 'a', 'h'};

    int z = sizeof(y)/sizeof(int(y[0])); 

generateAsciArr();


 
    quickSort(x, 0, n-1); 

for (int i = 0; i < 10; i++)
{
       cout << y[i] << "\t";
        
}


       cout << ""<<endl;
    
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(x,n); 
    return 0; 
}