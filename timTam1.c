// Created by Jason Leung (z5205177)
// A program that determines the best score for the game Tim Tam
// there is an array with all the functions and a counter, when that counter saves the number so it can tell which condition gave the highest number, this way i can use it easily print out the right condition whilst giving the highest number
#include<stdio.h>
#define SIZE 6
#define readcount 5
#define condition3count 4
#define condition4count 3
#define condition5count 2
#define FUNC_ANS 16

//Prototype functions
void read_func(int Array[SIZE],int counter);
int read_check(int Array[SIZE], int counter, int check);
int condition_total(int Array[SIZE], int counter, int total);
int condition_match2(int Array[SIZE], int counter, int total);
int condition_match3(int Array[SIZE], int counter, int total);
int condition_match4(int Array[SIZE], int counter, int total);
int condition_match5(int Array[SIZE], int counter, int total);
int condition_match6(int Array[SIZE], int counter, int total);
int condition_sequence2(int Array[SIZE], int counter, int counter2, int truecount, int total);
int condition_sequence3(int Array[SIZE], int counter, int counter2, int counter3, int truecount, int total);
int condition_sequence4(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int truecount, int total);
int condition_sequence5(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int counter5, int truecount, int total);
int condition_sequence6(int Array[SIZE], int counter, int total);
int condition_sum2(int Array[SIZE], int counter, int counter2, int counter3, int truecount, int total);
int condition_sum3(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int truecount, int total);
int condition_sum4(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int counter5, int truecount, int total);
int condition_sum5(int Array[SIZE], int counter, int total);
int tim_tam(int Array[SIZE], int counter, int total);  




int main(void){
   int Array[SIZE];
   int ANSW[FUNC_ANS] = {0};
   int counter = 0;
   int counter2 = 0;
   int counter3 = 0;
   int counter4 = 0;
   int counter5 = 0;
   int truecount = 0;
   int check = 0;
   int total = 0;
   read_func(Array,counter);
   if (read_check(Array,counter,check) == 1){
      printf("Invalid input: 6 integers 1..9 in sorted order must be supplied.\n");
      return 0;
   }
   else{
      printf("condition 1 is %d\n", condition_total(Array,counter,total));
      printf("condition 2 is %d\n", condition_match2(Array,counter,total));
      printf("condition 3 is %d\n", condition_match3(Array,counter,total));
      printf("condition 4 is %d\n", condition_match4(Array,counter,total));
      printf("condition 5 is %d\n", condition_match5(Array,counter,total));
      printf("condition 6 is %d\n", condition_match6(Array,counter,total));
      printf("condition 7 is %d\n", condition_sequence2(Array,counter,counter2, truecount,total));
      printf("condition 8 is %d\n", condition_sequence3(Array,counter,counter2,counter3, truecount,total));
      printf("condition 9 is %d\n", condition_sequence4(Array,counter,counter2,counter3,counter4,truecount,total));
      printf("condition 10 is %d\n", condition_sequence5(Array,counter,counter2,counter3,counter4,counter5,truecount,total));  
      printf("condition 11 is %d\n", condition_sequence6(Array,counter,total));
      printf("condition 12 is %d\n", condition_sum2(Array,counter, counter2,counter3,truecount,total));
      printf("condition 13 is %d\n", condition_sum3(Array,counter, counter2,counter3,counter4,truecount,total));
      printf("condition 14 is %d\n", condition_sum4(Array,counter, counter2,counter3,counter4,counter5,truecount,total));
      printf("condition 15 is %d\n", condition_sum5(Array,counter,total));
      printf("condition 16 is %d\n", tim_tam(Array,counter,total));
   } 
}





// reads integers
void read_func(int Array[SIZE],int counter){
   counter = 0;
   while(counter < SIZE){
      scanf("%d", &Array[counter]);
      counter = counter + 1;
   }
}
// checks if they are in order
int read_check(int Array[SIZE], int counter, int check){
   counter = 0;
   check = 0;
   while (counter < readcount){
      if(Array[counter] > Array[counter+1]){
         check = 1;
      }
      counter = counter + 1;
   }
   return check;
}
//
//
//
//
//
//
//first condition: total
int condition_total(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   while(counter < SIZE){
      total = total + Array[counter];
      counter = counter + 1;
   }
   return total;
}

// second condition: match-2
int condition_match2(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
//the reason to use readcount because it has already been declared 5
   while(counter < readcount){
      if(Array[counter] == Array[counter + 1]){
         total = 2*Array[counter] + 19;
         counter = counter + 1;
      }
      else{
      counter = counter + 1;
      }
   }   
   return total;
}   
      
//third condition: match-3
//note for the if statement Array[counter] == Array[counter + 2]
int condition_match3(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   while(counter < condition3count){
      if(Array[counter] == Array[counter + 2]){
         total = 3*Array[counter] + 21;
         counter = counter + 1;
      }
      else{
      counter = counter + 1;
      }
   }   
   return total;
}

//fourth condition: match-4
//note for the if statement Array[counter] == Array[counter + 3]
int condition_match4(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   while(counter < condition4count){
      if(Array[counter] == Array[counter + 3]){
         total = 4*Array[counter] + 23;
         counter = counter + 1;
      }
      else{
      counter = counter + 1;
      }
   }   
   return total;
}

//fifth condition: match-5
//note for the if statement Array[counter] == Array[counter + 4]
int condition_match5(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   while(counter < condition5count){
      if(Array[counter] == Array[counter + 4]){
         total = 5*Array[counter] + 25;
         counter = 5*counter + 1;
      }
      else{
      counter = counter + 1;
      }
   }   
   return total;
}

//sixth condition: match-6
//note for the if statement Array[counter] == Array[counter + 5]
int condition_match6(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;   
   if(Array[counter] == Array[counter + 5]){
         total = 6*Array[counter] + 27;
   }
   return total;
}

//seventh condition: sequence-2
//get rid of magic numbers
int condition_sequence2(int Array[SIZE], int counter, int counter2, int truecount, int total){
   counter = 0;
   counter2 = 1;
   truecount = 0;
   total = 0;
   while(truecount < 15){
      while(counter2 < 6){
         if(Array[counter] + 1 == Array[counter2]){
            total = 2*Array[counter2] + 17;
            counter2 = counter2 + 1;
            truecount = truecount + 1;
         }
         else{
            counter2 = counter2 + 1;
            truecount = truecount + 1;
         }   
      }   
      counter = counter + 1;
      counter2 = counter + 1;
   }
   return total;
}      

//eighth condition: sequence-3
//the main if statement could be better by Array[counter] + 1 == Array[counter2] && Array[counter2] + 1 == Array[counter3]
//get rid of magic numbers
int condition_sequence3(int Array[SIZE], int counter, int counter2, int counter3, int truecount, int total){
   counter = 0;
   counter2 = 1;
   counter3 = 2;
   truecount = 0;
   total = 0;
   while(truecount < 20){
      while(counter2 < 6){
         while(counter3 < 6){
            if(Array[counter] + 2 == Array[counter2] + 1 && Array[counter2] + 1 == Array[counter3]){
               total = 3*Array[counter3] + 18;
               counter3 = counter3 + 1;
               truecount = truecount + 1;
            }   
            else{
               counter3 = counter3 + 1;
               truecount = truecount + 1;
            }
         }
         counter2 = counter2 + 1;
         counter3 = counter2 + 1;
      }
      counter = counter + 1;
      counter2 = counter + 1;
      counter3 = counter + 2;
   }
   return total;
}

//ninth condition: sequence-4
//see above conditions maybe that could be better but it works :D
//get rid of magic numbers
int condition_sequence4(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int truecount, int total){
   counter = 0;
   counter2 = 1;
   counter3 = 2;
   counter4 = 3;
   truecount = 0;
   total = 0;   
   while(truecount < 15){
      while(counter2 < 6){
         while(counter3 < 6){
            while(counter4 < 6){
               if(Array[counter] + 3 == Array[counter2] + 2 && Array[counter2] + 2 == Array[counter3] + 1 && Array[counter3] + 1 == Array[counter4]){
                  total = 4*Array[counter4] + 19;
                  counter4 = counter4 + 1;
                  truecount = truecount + 1;
               }
               else{
                  counter4 = counter4 + 1;
                  truecount = truecount +1;
               }
            }      
            counter3 = counter3 + 1;
            counter4 = counter3 + 1;
         }
         counter2 = counter2 + 1;
         counter3 = counter2 + 1;
         counter4 = counter2 + 2;
      }      
      counter = counter + 1;
      counter2 = counter + 1;
      counter3 = counter + 2;
      counter4 = counter + 3;
   }
   return total;
}

//tenth condition: sequence-5
//no magic numbers
int condition_sequence5(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int counter5, int truecount, int total){
   counter = 0;
   counter2 = 1;
   counter3 = 2;
   counter4 = 3;
   counter5 = 4;
   truecount = 0;
   total = 0;   
   while(truecount < 6){
      while(counter2 < 6){
         while(counter3 < 6){
            while(counter4 < 6){
               while(counter5 < 6){
                  if(Array[counter] + 4 == Array[counter2] + 3 && Array[counter2] + 3 == Array[counter3] + 2 && Array[counter3] + 2 == Array[counter4] + 1 && Array[counter4] + 1 == Array[counter5]){
                     total = 5*Array[counter5] + 20;
                     counter5 = counter5 + 1;
                     truecount = truecount + 1;
                  }
                  else{
                     counter5 = counter5 + 1;
                     truecount = truecount + 1;
                  }
               }
               counter4 = counter4 + 1;
               counter5 = counter4 + 1;
            }
            counter3 = counter3 + 1;
            counter4 = counter3 + 1;
            counter5 = counter3 + 2;
         }
         counter2 = counter2 + 1;
         counter3 = counter2 + 1;
         counter4 = counter2 + 2;
         counter5 = counter2 + 3;
      }
      counter = counter + 1;
      counter2 = counter + 1;
      counter3 = counter + 2;
      counter4 = counter + 3;
      counter5 = counter + 4;
   }
   return total;
}

//eleventh condition: sequence-6
//sequence six is a bit different as it involves a very specific condition
//no magic numbers
int condition_sequence6(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   if(Array[0] + 1 == Array[1] && Array[1] + 1 == Array[2] && Array[2] + 1 == Array[3] && Array[3] + 1 == Array[4] && Array[4] + 1 == Array[5]){
      total = 6*Array[5] + 21;
      return total;
   }
   else{
      return total;
   }
}

//twelth condition: sum-2
//the code for this is pretty much the same for sequence 3
//get rid of magic numbers
int condition_sum2(int Array[SIZE], int counter, int counter2, int counter3, int truecount, int total){
   counter = 0;
   counter2 = 1;
   counter3 = 2;
   truecount = 0;
   total = 0;
   while(truecount < 20){
      while(counter2 < 6){
         while(counter3 < 6){
            if(Array[counter] + Array[counter2] == Array[counter3]){
               total = Array[counter] + Array[counter3] + 22;
               counter3 = counter3 + 1;
               truecount = truecount + 1;
            }
            else{
               counter3 = counter3 + 1;
               truecount = truecount + 1;
            }
         }
         counter2 = counter2 + 1;
         counter3 = counter2 + 1;
      }
      counter = counter + 1;
      counter2 = counter + 1;
      counter3 = counter + 2;
   }
   return total;
}   

//thirteenth condition: sum-3
//the code for this is pretty much the same as sequence 4
//get rid of magic numbers
int condition_sum3(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int truecount, int total){
   counter = 0;
   counter2 = 1;
   counter3 = 2;
   counter4 = 3;
   truecount = 0;
   total = 0;   
   while(truecount < 15){
      while(counter2 < 6){
         while(counter3 < 6){
            while(counter4 < 6){
               if(Array[counter] + Array[counter2] + Array[counter3] == Array[counter4]){
                  total = Array[counter] + Array[counter4] + 29;
                  counter4 = counter4 + 1;
                  truecount = truecount + 1;
               }
               else{
                  counter4 = counter4 + 1;
                  truecount = truecount +1;
               }
            }      
            counter3 = counter3 + 1;
            counter4 = counter3 + 1;
         }
         counter2 = counter2 + 1;
         counter3 = counter2 + 1;
         counter4 = counter2 + 2;
      }      
      counter = counter + 1;
      counter2 = counter + 1;
      counter3 = counter + 2;
      counter4 = counter + 3;
   }
   return total;
}

//fourteenth condition: sum-4
//the code for this is pretty much the same as sequence 5
//get rid of magic numbers
int condition_sum4(int Array[SIZE], int counter, int counter2, int counter3, int counter4, int counter5, int truecount, int total){
   counter = 0;
   counter2 = 1;
   counter3 = 2;
   counter4 = 3;
   counter5 = 4;
   truecount = 0;
   total = 0;   
   while(truecount < 6){
      while(counter2 < 6){
         while(counter3 < 6){
            while(counter4 < 6){
               while(counter5 < 6){
                  if(Array[counter] + Array[counter2] + Array[counter3] + Array[counter4] == Array[counter5]){
                     total = Array[counter] + Array[counter5] + 38;
                     counter5 = counter5 + 1;
                     truecount = truecount + 1;
                  }
                  else{
                     counter5 = counter5 + 1;
                     truecount = truecount + 1;
                  }
               }
               counter4 = counter4 + 1;
               counter5 = counter4 + 1;
            }
            counter3 = counter3 + 1;
            counter4 = counter3 + 1;
            counter5 = counter3 + 2;
         }
         counter2 = counter2 + 1;
         counter3 = counter2 + 1;
         counter4 = counter2 + 2;
         counter5 = counter2 + 3;
      }
      counter = counter + 1;
      counter2 = counter + 1;
      counter3 = counter + 2;
      counter4 = counter + 3;
      counter5 = counter + 4;
   }
   return total;
}

//fifteenth condition: sum-5
//like with sequence 6 is a bit special in that it has only one answer
//get rid of magic numbers
int condition_sum5(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   if(Array[0] + Array[1] + Array[2] + Array[3] + Array[4] == Array[5]){
      total = Array[0] + Array[5] + 49;
      return total;
   }
   else{
      return total;
   }
}

//sixteenth condition: tim_tam
//use of if statements as i can't figure out the math for the indices of the Array
int tim_tam(int Array[SIZE], int counter, int total){
   counter = 0;
   total = 0;
   if(Array[0] + Array[1] == Array[2] && Array[3] + Array[4] == Array[5]){
      total = Array[0] + 2*Array[1] + 3*Array[2] + 4*Array[3] + 5*Array[4] + 6*Array[5];
      return total;
   }
   else if(Array[0] + Array[1] == Array[3] && Array[2] + Array[4] == Array[5]){
      total = Array[0] + 2*Array[1] + 3*Array[3] + 4*Array[2] + 5*Array[4] + 6*Array[5];
      return total;
   }
   else if(Array[0] + Array[1] == Array[5] && Array[2] + Array[3] == Array[4]){
      total = Array[0] + 2*Array[1] + 3*Array[5] + 4*Array[2] + 5*Array[3] + 6*Array[4];
      return total;
   }  
   else if(Array[0] + Array[2] == Array[3] && Array[1] + Array[4] == Array[5]){
      total = Array[0] + 2*Array[2] + 3*Array[3] + 4*Array[1] + 5*Array[4] + 6*Array[5];
      return total;
   }
   else if(Array[0] + Array[2] == Array[4] && Array[1] + Array[3] == Array[5]){
      total = Array[0] + 2*Array[2] + 3*Array[4] + 4*Array[1] + 5*Array[3] + 6*Array[5];
      return total;
   }
   else if(Array[0] + Array[2] == Array[5] && Array[1] + Array[3] == Array[4]){
      total = Array[0] + 2*Array[2] + 3*Array[5] + 4*Array[1] + 5*Array[3] + 6*Array[4];
      return total;
   }
   else if(Array[0] + Array[3] == Array[4] && Array[1] + Array[2] == Array[5]){
      total = Array[0] + 2*Array[3] + 3*Array[4] + 4*Array[1] + 5*Array[2] + 6*Array[5];
      return total;
   }
   else if(Array[0] + Array[3] == Array[5] && Array[1] + Array[2] == Array[4]){
      total = Array[0] + 2*Array[3] + 3*Array[5] + 4*Array[1] + 5*Array[2] + 6*Array[4];
      return total;
   }
   else if(Array[0] + Array[4] == Array[5] && Array[1] + Array[2] == Array[3]){
      total = Array[0] + 2*Array[4] + 3*Array[5] + 4*Array[1] + 5*Array[2] + 6*Array[3];
      return total;
   }
   else{
      return total;
   }
}   
