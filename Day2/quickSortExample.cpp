#include <iostream>
#include <cstring>
using namespace std;
//prototypes
void quicksort(char *items, int len); 
 
void qs(char *items, int left, int right); 
 
int main() { 
 
  //randomized character array
  char str[] = "jfmckldoelazlkper"; 
 //original output
  cout << "Original order: " << str << "\n"; 
 //quicksort call
  quicksort(str, strlen(str)); 
 
  cout << "Sorted order: " << str << "\n"; 
 
  return 0; 
 
} 
 
// Set up a call to the actual sorting function. 
void quicksort(char *items, int len) 
{ 
  qs(items, 0, len-1); //left is 0 bc arrays start at 0,
} 
 
// A recursive version of Quicksort for sorting characters. 
void qs(char *items, int left, int right)  
{  
  int i, j;  
  char x, y;  
  //beginning and end of array
  i = left; j = right;  
  //picks out array item for comparison
  x = items[( left+right) / 2 ];
  
  do {  
    while((items[i] < x) && (i < right)) i++;
	/*if the current indexed item is greater than the compared item
		and not at the end of array, then keep going through items.
		this comparison goes from beginning-end
	*/
    while((x < items[j]) && (j > left)) j--;
		/* if the current indexed item is less than the compared item
		and not at the beggining then continue comparing items. This
		comparison goes through the array end-begining
		
		
		*/
  
    if(i <= j) {  
      y = items[i];  
      items[i] = items[j];  
      items[j] = y;  
      i++; j--;  
    }  
  } while(i <= j);  
  
  if(left < j) qs(items, left, j);  
  if(i < right) qs(items, i, right);  
}
