#include "student.h"
#include <stdio.h>


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
  for (int i = 0; i < length + 1; i++){
    int notprime = 0;
    for (int j = 2; j < array[i]/2; j++){
      if (array[i] % j == 0){
        notprime = 1;
        break;
      }
    }
    for (int j = 3; j < i/3; j++){
      if (i % j == 0){
        notprime = 1;
        break;
      }
    }
      if (notprime==0 && i > 1 && array[i] >= 0) {
        array[i] = array[i]*2;
    }
  }
}

int power(int x, int exp){
  int final = 1;
  for (int i = 0; i < exp; i++){
    final *= x;
  }
  return final;
}

void negate_armstrongs(int array[], int length) {

  //loop through length of array
  for (int i = 0; i < length; i++){
      //var for sum of all digits to the power of len
    int total = 0;
    //var for number of digits in array[i]
    int len = 0;
    //temps for value in array[i]
    int t = array[i];   
    int t2 = array[i];
    //get length of array[i]
    while (t>0){
      t /= 10;
      len += 1;
    }
    while (t2>0){
      //var for each digit in array[i]
      int dig = t2 % 10;
      total += power(dig,len);
      t2 /= 10;
    }
    if (array[i] == total && array[i] > 0) {
      array[i] *= -1;
    }
  // printf("%d \n", total);
  }
}