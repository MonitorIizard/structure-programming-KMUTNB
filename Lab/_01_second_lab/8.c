#include <stdio.h>
 
int main(){
    char invoice,date[10],duedate[10],cusname;
    char ItemName1,ItemName2,ItemName3;
    float UnitPrice1,UnitPrice2,UnitPrice3;
    int Quantity1,Quantity2,Quantity3;
 
    float TotalPrice1,TotalPrice2,TotalPrice3,TotalAmount,AmountDue,Vat;
    printf("Please enter the invoice number :");
    scanf("%s",invoice);
    printf("\nplease enter date :");
    scanf("%s",date);
    printf("\nPlease enter due date :");
    scanf("%s",duedate);
    printf("\nPlease enter the customer name :");
    scanf("%s",cusname);
 
    printf("Please enter the name of item 1 :\n");
    scanf("%s",ItemName1);
    printf("Please enter the quantity of item 1 :\n");
    scanf("%d",&Quantity1);
    printf("Please enter the unit price of item 1:\n");
    scanf("%f",&UnitPrice1);
 
    printf("Please enter the name of item 2 :\n");
    scanf("%s",ItemName2);
    printf("Please enter the quantity of item 2 :\n");
    scanf("%d",&Quantity2);
    printf("Please enter the unit price of item 2:\n");
    scanf("%f",&UnitPrice2);
 
    printf("Please enter the name of item 3 :\n");
    scanf("%s",ItemName3);
    printf("Please enter the quantity of item 3 :\n");
    scanf("%d",&Quantity3);
    printf("Please enter the unit price of item 3:\n");
    scanf("%f",&UnitPrice3);
 
    TotalPrice1=UnitPrice1*Quantity1;
    TotalPrice2=UnitPrice2*Quantity2;
    TotalPrice3=UnitPrice3*Quantity3;
 
    TotalAmount=TotalPrice1+TotalPrice2+TotalPrice3;
    Vat=TotalAmount*0.07;
    AmountDue=TotalAmount+Vat;
    printf("Invoice No.: %s           Date:%s\n",invoice,date);
    printf("Customer: %s              Due Date:%s\n",cusname,duedate);
 
    printf("_______________________________________________________________________________________________________________________\n");
 
    printf("# | Item Name          |     Unit Price |     Quantity   |Total Price\n");
 
    printf("_______________________________________________________________________________________________________________________\n");
 
    printf("1 | %s                 |     %.2f       |     %d         | %.2f      \n",ItemName1,UnitPrice1,Quantity1,TotalPrice1);
    printf("2 | %s                 |     %.2f       |     %d         | %.2f      \n",ItemName2,UnitPrice2,Quantity2,TotalPrice2);
    printf("3 | %s                 |     %.2f       |     %d         | %.2f      \n",ItemName3,UnitPrice3,Quantity3,TotalPrice3);
 
    printf("_______________________________________________________________________________________________________________________\n");
    printf("                                             Total Amount : %.2f\n",TotalAmount);
    printf("                                                      VAT : %.2f\n",Vat);
    printf("                                               Amount Due : %.2f\n",AmountDue);
 
    printf("________________________________________________________________________________________________________________________\n");
    return 0;
}