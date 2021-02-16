#include "student.h"

int largest(int array[], int length) {
  //loop through length of array
  for (int i = 0; i < length; i++) {
    if (array[i] > array[0]){
      array[0] = array[i];
    }
  }
  return array[0];
}

int sum(int array[], int length) {
    //loop through length of array
  int sum = 0;
  for (int i = 0; i < length; i++){
    sum += array[i];
  } 
  return sum;
}

void swap(int *a, int *b) {
  //swap for 2 vars
  int t = *a; //a's value into temp
  *a = *b; //b's value into a
  *b = t; //a's value into b
}

void rotate(int *a, int *b, int *c) {
  //swap for 3 vars
  int t = *a; //a's value into temp
  int t2 = *b; //b's value into temp2
  *a = *c; //c's value into a
  *b = t; //a's value into b
  *c = t2; //b's value into c
}

void sort(int array[], int length) {
      //loop through length of array
  for (int i = 0; i < length; i++){
    //minus i because already went thru i times
    //minus 1 because comparing to j+1
    for (int j = 0; j < length-i-1; j++){
      if (array[j] > array[j+1]){
        swap(&array[j], &array[j+1]);
      }
    }
  }
}

void double_primes(int array[], int length) {
      //loop through length of array
  for (int i = 0; i < length; i++){

  }
}
void negate_armstrongs(int array[], int length) {
        //loop through length of array
  for (int i = 0; i < length; i++){

}
}
