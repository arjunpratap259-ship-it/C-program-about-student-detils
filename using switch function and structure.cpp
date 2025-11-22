#include<stdio.h>
struct student{
	char Name[30];
	int Rollno;
	float Marks;
};
 struct student Arjun;
    printf("Enter Name:");
    scanf("%24s", Arjun.Name);   
    printf("Enter Rollno: ");
    scanf("%d", &Arjun.Rollno);     
    printf("Enter Marks: ");
    scanf("%f", &Arjun.Marks;  
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", 
	Arjun.Name);
    printf("Age: %d\n", Arjun.Rollno);
    printf("Cutoff: %.2f\n"- Arjun.Marks);
