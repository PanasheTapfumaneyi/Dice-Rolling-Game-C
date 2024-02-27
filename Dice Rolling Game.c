#include <stdio.h>

#include <stdlib.h>

#include <time.h>


int main() {

  int faces, throws, count, p, j, temp[500];

  double percentage;

  printf("\033[0;32m");
  printf("     Welcome to the dice game\n \033[0;36m    Group: Panashe and Josh \n ");
  printf("\033[0;31m ----------------------------------- \n ");

  /*Prompt user for number of faces & throws*/

  do {

    faces = printf("\033[0;36m Please enter the number of faces: ");

    scanf("%d", & faces);

  }

  /*While faces are outside the specified range, repromts the user*/

  while (faces < 1 || faces > 25);

  do {

    throws = printf("\033[0;33m  Please enter the number of throws: ");

    scanf("%d", & throws);

  }

  /*While throws are outside the specified range, repromts the user*/

  while (throws < 1 || throws > 500);

  printf("\033[0;31m  ----------------------------------- \n ");

  //Initialize random number generator & print the numbers

  printf("\033[0;33m Generating throws: \n");

  for (j = 0; j < throws; j++) {

    temp[j] = rand() % faces + 1;

    printf(" %d\n", rand() % faces + 1);

  }

  printf("\n \033[0;31m  ----------------------------------- \n ");

  //Print the percentage occurrence of each value

  printf("\033[0;33m    Percentage of values:\n ");

  for (p = 1; p <= faces; p++) {

    count = 0;

    for (j = 0; j < throws; j++) {

      if (p == temp[j]) count++; {

        percentage = (double) count / throws * 100;

      }

    }

    printf(" \n Occurrences of %d: %0.2f%%", (p), percentage);

  }

  return 0;

}