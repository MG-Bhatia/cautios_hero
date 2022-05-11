#include<stdio.h>
#include<stdlib.h>

int inputpin()
{
    int pin=6969;
    int inpin;
    int count=0;
    int action;
    int cont=1;
    
    printf("-Welcome Back Comrade Bank User-\n");
   
    printf("\n");
    printf("\n");
    printf("Your PIN is \n \n'6 9 6 9'\n");
    printf("\n");
    
    while (pin != inpin)
    {
          printf("Input Pin : \n");
          printf("\n");
          scanf("%d",&inpin);
          printf("\n");

           if (inpin != pin)
             {
              _beep(1000,1000);
              printf("Error 401 Invalid Pin \n");
              printf("\n");
             }

            count++;

           if (count == 3 && pin != inpin)
            {
              exit(0);
            }

    }




}

int mainatm()
{
    int sav;
    int cur;
    int count=0;
    int amount=1;
    int bal=10000;
    int action;
    int cont=1;
    



  while (cont != 0)
    {
  
                     printf("Available Actionns\n");
                     printf("\n");
           
                     printf("You are have with N. %d\n",bal);
                     printf("\n");

                     printf("1. Withdrawal\n");
                     printf("\n");

                     printf("2. Check balance\n");
                     printf("\n");

                     printf("3. Deposit\n");
                     printf("\n");

                     printf("4. Exit\n");
                     printf("\n");

                
                     printf("Select desired option \n");
                     printf("\n");
                     scanf("%d",&action);
                     printf("\n");

      switch (action)
      {
                   
          case 1:
          while (amount % 1000 != 0)
          {
                       

                            printf("Withdrawal Selected.");
                            printf("\n");
                            printf("\n");
                            printf("Input Amount to be Removed \n");
                            printf("\n");
                            printf("\n");
                            printf("The Amount Entered Should Be A Multiple Of 1,000\n");
                            printf("\n");
                            printf("\n");
                            scanf("%d",&amount);
                            printf("\n");
                            
                            if (amount % 1000 != 0)
                             {
                                printf("The Amount Entered Should Be A Multiple Of 1,000\n");
                                printf("\n");
                             }

                            else if (bal < amount)
                             {
                                _beep(1000,1000);
                                printf("Error 404 : Insufficient Funds\n");
                                printf("\n");
                                printf("You only have N. %d\n",bal);
                                printf("\n");
                                amount=1;
                             }
                             
                            else
                            {
                                bal -= amount;
                                printf("You have Removed N.%d\n",amount);
                                printf("\n");

                                printf("New balance @ N.%d\n",bal);
                                printf("\n");
                                amount=1;
                                break;
                            }        
          }
                                break;
                        
          case 2:
                        printf("Balance Check Selected.");
                        printf("\n");
                        printf("\n");
                        printf("Your balance is N.%d\n",bal);
                        printf("\n");
                        break;
                        
          case 3:
                        printf("Deposit Selected.");
                        printf("\n");
                        printf("\n");
                        printf("Enter Sum to be Deposited: \n");
                        printf("\n");
                        scanf("%d",&amount);
                        printf("\n");
                        bal += amount;
                          

                        printf("N.%d has been Deposited\n",amount);
                        printf("\n");

                        printf("New balance @ N.%d\n",bal);
                        printf("\n");
                        amount=1;
                        break;

                        default:
                        _beep(1000,1000);
                        printf("Invalid Input\n");
                        printf("\n");
                        break;

          case 4:
                        printf("Exit Selected.");
                        printf("\n");
                        
                                    
                                
      }            
        
                    printf("\n");
                    printf("Do You Wish To Perform Another Transaction ?\n");
                    printf("\n");

                    printf("1. Yes\n");
                    printf("\n");

                    printf("0. No\n");
                    printf("\n");
                    scanf("%d",&cont);
                    printf("\n");
                    printf("Your Session has Ended.\n");
                    printf("Thank you for being a Patronizing Comrade :)\n");
                    printf("\n");

                    
                      
    }


}

int main ()
{
    inputpin();
    mainatm();
}
