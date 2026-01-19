#include <stdio.h>

struct car{
 int fuel_tank_cap;
 int car_milage;
 int seating_cap;


};

int main(){

    struct car c[2];
    int i ;
    for( i=0; i<2 ;i++)

   {
    printf(" enter the car %d fuel capacity:", i+1);
    scanf("%d", &c[i].fuel_tank_cap);
    printf("enter the car %d  car milage ", i+1);
    scanf("%d", &c[i].car_milage );
    printf("enter the car %d seat cap ", i+1);
    scanf("%d", &c[i].seating_cap );

    }

 printf("\n");


  
  for (i=0;i<2;i++)
  {
     printf("\n car %d details:\n" , i+1);
    printf("the car %d has milage %d \n", i+1, c[i].fuel_tank_cap);

    printf("the car %d has milage %d \n", i+1, c[i].car_milage);

    printf("th car %d has milage %d \n", i+1, c[i].seating_cap);

    } 
   
    

    
   return 0;

}