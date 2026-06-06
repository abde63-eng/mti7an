#include<stdio.h>
#include<stdbool.h>
void shows (float *bal);
void depo(float *bal);
void money(float *bal);

int main()
{  

    int choice =0;
    float bal = 0.0;
    char sym='$'; 
    do{
        printf("select an option\n");
        printf("\n");
        printf("1. Check Balnce\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. exit\n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if (choice==1)
        {
            shows(&bal);
        }
        else if(choice==2)
        {
            depo(&bal);
        }
        else if (choice==3)
        {
            money(&bal);
        }
    }while (choice<4);
    return 0;
}
void shows (float *bal){
    printf("your balance is $%f \n",*bal);
}
void depo(float *bal){
    float dep=0.0;
    printf("how much you want to puch?\n");
    scanf("%f", &dep);
    *bal += dep;
    printf("you have now %.2f \n",*bal);
} 
void money(float *bal)
   {
      float with=0.0;
      printf("how much you want to pull :");
      scanf("%f",&with);
      if (with > *bal)
      {
        printf("7ayed 3liya 7aza9 d lah");
      }
      else if (with <= *bal)
      {
        *bal -= with;
        printf("your solde is %.2f \n",*bal);
      }
    }



