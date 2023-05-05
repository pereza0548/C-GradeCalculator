/*Name: Alexandra Perez
 Date: 4/17/2023
 Approach: I created a struct to store the student info. Had the user enter 
 the name and store it in the struct. Next was for user to enter
 the marks, calulate the aggregate, and print the letter avg.

 Challenges: I was not able to see the name when called, I had difficulty 
 with computing the aggregate value of the marks., I was making agg 
 its own loop, but it needed to be in the same loop as the input from the user.
 */
#include <stdio.h>
#include <stdlib.h>

struct student 
{
    char name[100];
    int marks[100];
    int total;
    char *avg_letter;
};

int main()
{
    int i, num, avg, agg=0;
    struct student *ptr, s;


    // prompt student name
    printf("Name: ");
    scanf("%s", s.name);

    printf("Enter the number subjects: ");
    scanf("%d", &num);

    // for loop for user to enter marks and calculate the aggregate marks
    for(i=0; i<num;i++)
    {
        printf("Enter marks for subject %d (out of 100): ",i+1);
        scanf("%d", ptr[i].marks);
        agg += *ptr[i].marks;
    }
    
    // calculate the avg in terms of class avgs table
    avg = agg/num;

    // if else if statements store the letter grade in the struct
    if( avg >= 90 && avg <=100)
        {
           s.avg_letter = "A";
        }
          else if (avg >= 87 && avg <=89)
    {
            s.avg_letter = "A-";    
    }
        else if (avg >= 84 && avg <=86)
    {
            s.avg_letter = "B+";    
    }
        else if (avg >= 80 && avg <=83)
    {
            s.avg_letter = "B";    
    }
        else if (avg >= 76 && avg <=79)
    {
            s.avg_letter = "B-";    
    }
        else if (avg >= 73 && avg <=75)
    {
            s.avg_letter = "C+";    
    }  
        else if (avg >= 70 && avg <=72)
    {
            s.avg_letter = "C";    
    }
        else if (avg >= 66 && avg <=69)
    {
            s.avg_letter = "C-";    
    }
        else if (avg >= 64 && avg <=65)
    {
            s.avg_letter = "D+";    
    }
        else if (avg >= 62 && avg <=63)
    {
           s.avg_letter = "D";    
    }
        else if (avg >= 60 && avg <=61)
    {
            s.avg_letter = "D-";    
    }
        else
    {
            s.avg_letter = "F";    
    }

    printf("Hello %s, Your total marks are %d and Grade %s", s.name, agg, s.avg_letter);
    

    return 0;
}