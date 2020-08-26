#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float price = 0.0;
    float amount = 0.0;
    
   //get the price of product from user and check to make sure input is a positive demical number
    do
   {   
    price = get_float("Price of product:");
   }
    while (price < 0);

    //get the amount paid by customer 
     do
    {
        amount = get_float("Amount given by customer:");
    }
     while (amount < 0);

    //calculate what change the customer is owed
     float change = amount - price;

    //print what customer is owed
     printf("you owe the customer: %.2f\n please give the customer:\n", change);


     int counter = 0;
    //calculate how many 100 dollar bills the customer is owed and inform user
    while (change >= 100.00)
      {
          change = change - 100.00;
          counter = counter + 1;     
      }
      if (counter > 0)
      {
       printf("%i one hundred dollar bills\n", counter);
      }
    

    //calculate how many 20 dollar bills the customer is owed and inform user
    counter = 0;
    while (change >= 20.00)
    {
        change = change - 20.00;
        counter = counter + 1;
    }
    if (counter > 0)
    {
    printf("%i twenty dollar bills\n", counter);
    }

    //calculate how many 10 dollar bills the customer is owed and inform user
    counter = 0;
      while (change >= 10.00)
   {
       change = change - 10.00;
        counter = counter + 1;     
   }
   if (counter > 0)
   {
   printf("%i ten dollar bills\n", counter);
   }
    //calculate how many 5 dollar bills the customer is owed and inform user
     counter = 0;
       while (change >= 5.00)
       {
          change = change - 5.00;
          counter++;
      }
      if (counter > 0)
      {
       printf("%i five dollar bills\n", counter);
      }
    //calculate how many 1 dollar bills the customer is owed and inform user
    counter = 0;
    while (change >= 1.00)
    {
        change = change - 1.00;
        counter++;
    }
    if (counter > 0)
    {
    printf("%i one dollar bills\n", counter);
    }
    //calculate how many quarters the customer is owed and then inform user 
    counter = 0;
     while (change >= 00.25)
   {
       change = change - 00.25;
        counter++;     
   }
   if (counter > 0)
   {
    printf("%i quarters\n", counter);
   }

    //calculate how many dimes the customer is owed and inform user
    counter = 0; 
    while (change>=00.10)
    {
        change = change - 00.10;
        counter++;
    }
    if (counter > 0)
    {
    printf("%i dimes\n", counter);
    }
    //calculate how many nickels the customer is owed and inform user
    counter = 0;
    while (change >= 00.05)
    {
        change = change - 00.05;
        counter++;
    }
    if (counter > 0)
    {
    printf("%i nickels\n", counter);
    }
    //calculate how many pennys the customer is owed and inform user
    int pennys = (change * 100);
    printf("%i pennys\n", pennys);
    
}
    
