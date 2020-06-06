#include <iostream>

//#ifndef _PROJ1_H_
//#define _PROJ1_H_
//#endif

#define NUM_CHOICES 2

#include "proj1.h"
#include "proj2.h"

int userChoice = 0;

int main(){
   std::cout << "Welcome to Ivan's Project 1" << std::endl;
   std::cout << "" << std::endl;
   std::cout << "Pick a project you would like to see:" << std::endl;
  
   //Build menu
   while (userChoice < 1 || userChoice > NUM_CHOICES){
       std::cout << "-------------------------------------------" << std::endl;
       std::cout << "1.Option 1" << std::endl;

       std::cout << "-------------------------------------------" << std::endl;

       std::cin >> userChoice;
       std::cout  << std::endl;
   }

//   enum Options{proj1};
  // switch(userChoice){
    //   case proj1:
//	   option1();
  // }
   switch(userChoice){
       case 1:
	   option1();
	   break;
       case 2:
	   Option2();
	   break;
	default:
           std::cout << "You chose an invalid operation" << std::endl;
	   break;
   }

   return 0;
}
