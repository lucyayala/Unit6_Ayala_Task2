//Unit 6 Assignment
//Date: 2-17- 2020 IDE: Repl. it tool 


#include <iostream>
#include "accounts.h"
#include <fstream>
#include <algorithm>
using namespace std;

//function prototype
void printArray (int[], int size);
void DrTsortArrayASC(int [], int size);

int main() 
{
//Displays results at Results.txt file
ofstream myfile;
myfile.open ( "Results.txt");

myfile << "Dr_T's Bubble ASC Time\n" << "Start: " <<cpuTime() << endl;
DrTsortArrayASC(accountBalances, maxAccounts);//Call's Function 
myfile <<  "End: " << cpuTime () << "\n" << endl;
  return 0;
}

//****************************************************************
//Function Definition 
void DrTsortArrayASC(int array[], int size)
{
  int temp = 0; // needed for sway process
  for(int left= 0; left  < size; left++)
  {
    for (int right = left+1; right < size; right++)
    {
  
      if( array[left] > array[right]) //hint > is ASC, < is Desc
      {
        //classic swap algrithm
        temp = array[left];
        array[left]= array[right];
        array[right]=temp; 
      }
    }
  }
  printArray (accountBalances, maxAccounts);//Displays results
}


//*****************************************************************************************
void printArray (int arrayVals [], int size) //Displays function 
{
  cout << "\nPrinted Values in Array: " << endl;
  for (int i = 0; i< size ; i ++)
  {
  cout<< arrayVals[i] << ",";
  }
  cout << "\n" << endl;
}
