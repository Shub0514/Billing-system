#include<stdio.h>
#include<string.h>
  totaltowords(int total)
{
  if(total>=1000){
  switch(total/1000)
  {
    case 1:
    printf("one thousand");
    break;
    case 2:
    printf("two thousand");
    break;
    case 3:
    printf("three thousand");
    break;
    case 4:
    printf("four thousand");
    break;
    case 5:
    printf("five thousand");
    break;
    case 6:
    printf("six thousand");
    break;
    case 7:
    printf("seven thousand");
    break;
    case 8:
    printf("eight thousand");
    break;
    case 9:
    printf("nine thousand");
    break;
  }}
  total=total%1000;
  if(total>=100){
  switch(total/100)
  {
    case 1:
    printf("   one hundred");
    break;
    case 2:
    printf("  two hundred");
    break;
    case 3:
    printf("  three hundred");
    break;
    case 4:
    printf("  four hundred");
    break;
    case 5:
    printf("  five hundred");
    break;
    case 6:
    printf("  six hundred");
    break;
    case 7:
    printf("  seven hundred");
    break;
    case 8:
    printf("  eight hundred");
    break;
    case 9:
    printf("  nine hundred");
    break;
  }}
  total=total%100;
  if(total>=20){
  switch(total  /10)
  {
    case 2:
    printf(" twenty");
    break;
    case 3:
    printf(" thirty");
    break;
    case 4:
    printf(" fourty");
    break;
    case 5:
    printf(" fifty");
    break;
    case 6:
    printf(" sixty");
    break;
    case 7:
    printf(" seventy");
    break;
    case 8:
    printf(" eighty");
    break;
    case 9:
    printf(" ninety");
    break;
    
  }}
  total=total%10;
  switch(total)
  { 
    case 1:  
    printf("  one ");
    break;
    case 2:
    printf("  two ");
    break;
    case 3:
    printf("  three");
    break;
    case 4:
    printf("  four ");
    break;
    case 5:
    printf("  five ");
    break;
    case 6:
    printf("  six ");
    break;
    case 7:
    printf("  seven ");
    break;
    case 8:
    printf("  eight ");
    break;
    case 9:
    printf("  nine ");
    break;
    case 10:
    printf("  ten");
    break;
    case 11:
    printf("  eleven ");
    break;
    case 12:
    printf("  twelve ");
    break;
    case 13:
    printf("  thrirteen ");
    break;
    case 14:
    printf("  fourteen ");
    break;
    case 15:
    printf("  fifteen ");
    break;
    case 16:  
    printf("  sixteen ");
    break;
    case 17:
    printf("  seventeen ");
    break;
    case 18:
    printf("  eighteen ");
    break;
    case 19:
    printf("  nineteen ");
    break;
  }
}
struct billing{
 int sno[10],icode[10],irate[10],iqyt[10],amt[10];
};
int main()
{
  int n,i,total=0;
  struct billing bill;
  printf(" * * * ** * * * * * * * * * * * * * * * * * * MENU * * * ** * * * * * * * * * * * * * * * * * * \n ");  

  printf("Sno.   Item no.    Item     Amount\n");
  printf(" 1      111        Tea        29\n 2      112       Coffee      39\n 3      113       Cup cakes   49\n 4      114        Pizza      99\n 5      115        Sandwich   89 \n");
  
  printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n"); 
    printf("No. of items ordered by customer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
         printf("Item code: ");
         scanf("%d",&bill.icode[i]);
         printf("Item rate: ");
         scanf("%d",&bill.irate[i]);
         printf("Item quantity: ");
         scanf("%d",&bill.iqyt[i]);
       bill.amt[i]=bill.irate[i]*bill.iqyt[i];
       
       total=bill.amt[i]+total;
}
        printf(" * * * ** * * * * * * * * * * * * * * * * * * INVOICE * * * ** * * * * * * * * * * * * * * * * * * \n ");  
         for(i=1;i<=n;i++){
      printf(" Sno.    Item     Rate    Quantity    Amount\n");
       printf("  %d      %d        %d          %d       %d\n ",i,bill.icode[i],bill.irate[i],bill.iqyt[i],bill.amt[i]);
         }
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");  
        printf( "  Total Bill=%d\n",total);
    
        printf(" Total amount in words:");
        totaltowords(total);
         return 0;
}