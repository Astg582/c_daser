#include <stdio.h>

int main (){
  
       struct Student {
    	      char name[4];
	      int age;
	      double rating;
	};
       int i;
       struct Student  student[4];
       struct Student maxRating[1];
       
   
       for( i = 0; i  < 4; ++i)
    {
    printf("what is the stdent's name?\n");
    scanf("%s", student[i].name);
    printf("how old is the student?\n");
    scanf("%d", &student[i].age);
    printf("Writh the student's rating\n");
    scanf("%lf", &student[i].rating);
};


for (i =0; i < 4; i++)
{

if ( student[i].rating > maxRating[i].rating) {
	maxRating[i] = student[i];
 };
};

printf("%s\n", maxRating[i].name);
printf("%d\n", maxRating[i].age);
printf("%.2lf\n", maxRating[i].rating);


return 0;
};
