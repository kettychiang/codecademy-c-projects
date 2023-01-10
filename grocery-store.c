#include <stdio.h>

int main() {
  
double applePrice = 1.49;
int appleQuantity = 23;
const char APPLELOCATION ='F';
float appleReview = 82.5;
int appleReviewDisplay = appleReview;


// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, APPLELOCATION, appleReviewDisplay);

}