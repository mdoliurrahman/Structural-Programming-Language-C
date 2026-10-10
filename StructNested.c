#include<stdio.h>

   struct owner  {

   char firstname[30];
   char surname [20];
   };

   struct Car {
       char brand [30];
       int year ;
       struct Owner owner;

        };

   int main()
    {
        struct owner person={"Oliur", "Shafi"};
        struct car car1 ={"Toyota", 2025, person};



          printf ("car=%s %d\n",car1.brand, car1.year);
          printf ("Owner=%s %s\n",owner.firstname,owner.surname);



      return 0;






}
