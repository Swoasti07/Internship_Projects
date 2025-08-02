#include<stdio.h>

//STRUCTURE DECLARING
struct student {
    char name[50];
    int roll_no;
    int marks[10];
    float average;
    char grade;
};

int main()
{
    int n,sub;
    printf("Enter the no. of students : ");
    scanf("%d",&n);

    printf("Enter the no. of subjects : ");
    scanf("%d",&sub);

    struct student student[n];
    //LOOP WHERE EACH DETAILS OF THE STUDENT ARE TAKEN
    for(int i=0;i<n;i++){
        printf("\n=====Enter the details of %d student=====\n",i+1);
        printf("Enter the name of the student : ");
        scanf(" %[^\n]",&student[i].name);
        printf("Enter the roll no. of the student : ");
        scanf("%d",&student[i].roll_no);
        int total=0;
        printf("Enter the marks of %d subjects : ",sub);
        for(int j=0;j<sub;j++){
            scanf("%d",&student[i].marks[j]);
            total = total+student[i].marks[j];
        }
        
        student[i].average=total/sub;

        if(student[i].average >=90){
            student[i].grade = 'A';
        }
        else if(student[i].average >=80){
            student[i].grade = 'B';
        }
        else if(student[i].average >=70){
            student[i].grade = 'C';
        }
        else if(student[i].average >=60){
            student[i].grade = 'D';
        }
        else if(student[i].average >=40){
            student[i].grade = 'E';
        }
        else{
            student[i].grade = 'F';
        }
    }

    //PRINTING REPORT FOR EACH STUDENT
    for(int i=0;i<n;i++){
        printf("\n=====Report card of %d student=====\n",i+1);
        printf("Name : %s\n",student[i].name);
        printf("Roll number : %d\n",student[i].roll_no);
        printf("Marks for %d subjects : ",sub);
        for(int j=0;j<sub;j++){
            printf("%d ",student[i].marks[j]);
        }
        printf("\nAverage marks obtained : %.2f\n",student[i].average);
        printf("Grade obtained : %c",student[i].grade);
    }
    return 0;
}