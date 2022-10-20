#include<stdio.h>
#include<string.h>


struct student {
    
    char name[100];
    int roll;
    float cgpa;
};

int main () {
   
   struct student phy[100];
   
   
   strcpy(phy[0].name, "Jameel");
   phy[0].roll = 1234;
   phy[0].cgpa = 4.5;

    printf("STUDENT NUMBER [0]\n");

   printf("student name : %s\n" , phy[0].name);
   printf("student roll nmber : %d\n" , phy[0].roll);
   printf("student CGPA is : %f\n" , phy[0].cgpa);

    printf("\n");

    //

    
   strcpy(phy[1].name, "AAA");
   phy[1].roll = 1234;
   phy[1].cgpa = 4.5;

    printf("STUDENT NUMBER [1]\n");

   printf("student name : %s\n" , phy[1].name);
   printf("student roll nmber : %d\n" , phy[1].roll);
   printf("student CGPA is : %f\n" , phy[1].cgpa);

    printf("\n");

    //

    
   strcpy(phy[2].name, "BBB");
   phy[2].roll = 1234;
   phy[2].cgpa = 4.5;

    printf("STUDENT NUMBER [2]\n");

   printf("student name : %s\n" , phy[2].name);
   printf("student roll nmber : %d\n" , phy[2].roll);
   printf("student CGPA is : %f\n" , phy[2].cgpa);

    printf("\n");

    //

    
   strcpy(phy[3].name, "CCC");
   phy[3].roll = 1234;
   phy[3].cgpa = 4.5;

    printf("STUDENT NUMBER [3]\n");

   printf("student name : %s\n" , phy[3].name);
   printf("student roll nmber : %d\n" , phy[3].roll);
   printf("student CGPA is : %f\n" , phy[3].cgpa);

    printf("\n");

//

    
   strcpy(phy[4].name, "DDD");
   phy[4].roll = 1234;
   phy[4].cgpa = 4.5;

    printf("STUDENT NUMBER [4]\n");

   printf("student name : %s\n" , phy[4].name);
   printf("student roll nmber : %d\n" , phy[4].roll);
   printf("student CGPA is : %f\n" , phy[4].cgpa);

    printf("\n");

    //

    
   strcpy(phy[5].name, "EEE");
   phy[5].roll = 1234;
   phy[5].cgpa = 4.5;

    printf("STUDENT NUMBER [5]\n");

   printf("student name : %s\n" , phy[5].name);
   printf("student roll nmber : %d\n" , phy[5].roll);
   printf("student CGPA is : %f\n" , phy[5].cgpa);

    printf("\n");


    
   strcpy(phy[6].name, "FFF");
   phy[6].roll = 1234;
   phy[6].cgpa = 4.5;

    printf("STUDENT NUMBER [6]\n");

   printf("student name : %s\n" , phy[6].name);
   printf("student roll nmber : %d\n" , phy[6].roll);
   printf("student CGPA is : %f\n" , phy[6].cgpa);

    printf("\n");

//
    
   strcpy(phy[7].name, "GGG");
   phy[7].roll = 1234;
   phy[7].cgpa = 4.5;

    printf("STUDENT NUMBER [7]\n");

   printf("student name : %s\n" , phy[7].name);
   printf("student roll nmber : %d\n" , phy[7].roll);
   printf("student CGPA is : %f\n" , phy[7].cgpa);

    printf("\n");
//
    
   strcpy(phy[8].name, "HHH");
   phy[8].roll = 1234;
   phy[8].cgpa = 4.5;

    printf("STUDENT NUMBER [8]\n");

   printf("student name : %s\n" , phy[8].name);
   printf("student roll nmber : %d\n" , phy[8].roll);
   printf("student CGPA is : %f\n" , phy[8].cgpa);

    printf("\n");

//

   
   strcpy(phy[9].name, "III");
   phy[9].roll = 1234;
   phy[9].cgpa = 4.5;

    printf("STUDENT NUMBER [9]\n");

   printf("student name : %s\n" , phy[9].name);
   printf("student roll nmber : %d\n" , phy[9].roll);
   printf("student CGPA is : %f\n" , phy[9].cgpa);

    printf("\n");

   
    // struct student s1 = {"Jahanzab Jhandeer" , 422, 3.53};
    // printf("student roll number %d\n" , s1.roll);
}