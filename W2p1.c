#include <stdio.h>

int main(void)
{
int p1_id=111, p2_id=222, p3_id=111;
  float p1_price=111.49, p2_price=222.99, p3_price=334.49,avg,test_value=330.99;
  char p1_tax='Y', p2_tax='N', p3_tax='N';

printf("Product Information\n");
printf("===================\n");

printf("Product -1\(ID:%d\)\n",p1_id);
printf(" Taxed: %c\n",p1_tax);
printf(" Price: $%.2f\n",p1_price);

printf("\nProduct -1\(ID:%d\)\n",p2_id);
printf(" Taxed: %c\n",p2_tax);
printf(" Price: $%.2f\n",p2_price);

printf("\nProduct -1\(ID:%d\)\n",p3_id);
printf(" Taxed: %c\n",p3_tax);
printf(" Price: $%.2f\n",p3_price);

avg=(p1_price+p2_price+p3_price)/3; 

printf("\nThe average of all prices is: $%.4f\n",avg);



printf("About Relational and Logical Expressions!\n");
printf("========================================\n");
printf("1. These expressions evaluate to TRUE or FALSE\n");
printf("2. FALSE: is always represented by integer value 0\n");
printf("3. TRUE : is represented by any integer value other than 0\n");



    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> ");
    if(p1_tax=='Y')
    { printf("1");}
    else{ printf("0");}
    
    printf("\n2. Are products 2 and 3 both NOT taxable (N)? -> ");
    if(p2_tax && p2_tax=='N')
    { printf("1");}
    else{ printf("0");}
    
    printf("\n3. Is product 3 less than TEST_VALUE ($%.2f)? ->  ",test_value);
    if(p3_price<test_value)
    { printf("1");}
    else{ printf("0");}
    
    printf("\n4. Is the price of product 3 more than both product 1 and 2 combined? -> ");
    if(p3_price>(p1_price+p2_price))
    { printf("1");}
    else{ printf("0");}
    
    printf("\n5. Is the price of product 1 equal to or more than the price difference ") ;
    printf("of product 3 LESS product 2? -> ");
    if(p1_price>=(p3_price-p2_price))
    { printf("1 \(price difference: $%.2f\)",p3_price-p2_price);}
    else{ printf("0 \(price difference: $%.2f\)",p3_price-p2_price);}
    
    printf("\n6. Is the price of product 2 equal to or more than the average price? -> ");
    if(p2_price>=avg)
    { printf("1");}
    else{ printf("0");}
    
    printf("\n7. Based on product ID, product 1 is unique -> ");
    if(p1_id!=p2_id && p1_id!=p3_id)
    { printf("1");}
    else{ printf("0");}
    
    printf("\n8. Based on product ID, product 3 is unique -> ");
    if(p3_id!=p1_id || p3_id!=p2_id)
    { printf("1");}
    else{ printf("0");}
    
    printf("\n9. Based on product ID, product 1 is unique -> ");
    if(p1_id!=p2_id && p1_id!=p3_id)
    { printf("1");}
    else{ printf("0");}
    return 0;
}