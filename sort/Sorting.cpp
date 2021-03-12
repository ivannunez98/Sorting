#include <iostream>
#include <iomanip>

using namespace std;

void selectionSort(float *const, const int);
void swap(float *const, float *const);
void printArray(float *const, const int);

int main(){

  const int arraySize = 10;
  float a[arraySize] = {10, 4, 5, 7, 99, 50, 14, 21, 32, 12};
  float a2[arraySize] = {12.2, 23.9, 1.01, 2.22, 89.99, 2.02, 12.78, 23.56, 8.67, 31.13}; 

  cout << "Original list" << endl;
  printArray(a, arraySize);
  printArray(a2, arraySize);

  cout << "Sorted list" << endl;
  selectionSort(a, arraySize);
  printArray(a, arraySize);

  selectionSort(a2, arraySize);
  printArray(a2, arraySize);

return 0;
};

void selectionSort( float *const array, const int size )
{
   int smallest;

   for ( int i = 0; i < size - 1; ++i )
   {
      smallest = i;

      for ( int index = i + 1; index < size; ++index )

         if ( array[ index ] < array[ smallest ] )
            smallest = index;

      swap( &array[ i ], &array[ smallest ] );
   } 
} 

void swap( float *const element1Ptr, float *const element2Ptr )
{
   float hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}

void printArray(float *const array, const int arraySize){

   cout << fixed;
   cout << setprecision(2);

   for ( int i = 0; i < arraySize; ++i ){
      cout << setw( 6 ) << array[ i ];
   };

   cout << endl << endl;
};
