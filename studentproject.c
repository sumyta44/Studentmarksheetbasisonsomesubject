#include<stdio.h>

struct studentmarksheet_info{
    ///using this for student information .
    ///for student roll/id number .
    int student_number;
    ///for student name .
    char name[10];
    ///for marksheet the subject for counting gpa for that take their marks.
    int bangla_marks,english_marks,physics_marks,chemistry_marks,math_marks;
    ///convert it into gpa
    float bangla_gpa,english_gpa,physics_gpa,chemistry_gpa,math_gpa;
    ///total number .
    float total_gpa,average_gpa,grand_gpa;


};
void print_marksheetline(){
   printf("\n\t__________________student marksheet__________________");
    printf("\n");

};

int main(){

    int n;
    printf("How many student marksheet do you wanted to create : ");
    scanf("%d",&n);
    struct studentmarksheet_info students[n];
    ///using counter for checking their ID/roll number .
      int counter;
      int counter1;


      ///using function for print student marks sheet
      void print_student_marksheet(){
       for (counter=0;counter<=3;counter++){
            if(students[counter].student_number!=0){
                printf("\nID NO OF Student : %d       GPA : %.2f",students[counter].student_number,students[counter].grand_gpa);
            }
            else{
                printf("");
            }
     }

    }

    printf("\n");
    printf("\t\tThis pogramme for (9-10) and (11-12)\n ");
    printf("\n");


    for (counter=0;counter<=n;counter++){
            printf("student id number : ");
            ///take student number and store it in counter .
            scanf("%d", & students[counter].student_number);
            for(counter1=0;counter1<=counter-1;counter1++){
                    ///counter1 for another student roll for check previous id is match or not.
                if(students[counter].student_number==students[counter1].student_number){
                    ///if the number is match then it will store it 0.
                  students[counter].student_number=0;
                }
            }
            ///if it will not match then then it will take student other information .
            if(students[counter].student_number!=0){
                printf("student Name      : ");
                ///taking student name .
                scanf("%s",students[counter].name);
                printf("\n");
                ///taking student bangla marks .
                printf("\t\t Bangla marks        : ");
                scanf("%d", & students[counter].bangla_marks);


                ///checking condition .
                if(students[counter].bangla_marks>=80){
                    students[counter].bangla_gpa=5.00;
                }
                 else if(students[counter].bangla_marks>=70){
                    students[counter].bangla_gpa=4.00;
                }
                else if(students[counter].bangla_marks>=60){
                    students[counter].bangla_gpa=3.00;
                }
                else if(students[counter].bangla_marks>=50){
                    students[counter].bangla_gpa=2.00;
                }
               else if(students[counter].bangla_marks>=40){
                    students[counter].bangla_gpa=1.00;
                }
                else{
                    students[counter].bangla_gpa=0.00;
                }
                 ///taking student english marks .
                printf("\t\t English marks       : ");
                scanf("%d", & students[counter].english_marks);


                 if(students[counter].english_marks>=80){
                    students[counter].english_gpa=5.00;
                }
                 else if(students[counter].english_marks>=70){
                    students[counter].english_gpa=4.00;
                }
                else if(students[counter].english_marks>=60){
                    students[counter].english_gpa=3.00;
                }
                else if(students[counter].english_marks>=50){
                    students[counter].english_gpa=2.00;
                }
               else if(students[counter].english_marks>=40){
                    students[counter].english_gpa=1.00;
                }
                else{
                    students[counter].english_gpa=0.00;
                }
                 ///taking student physics marks .
                  printf("\t\t Physics marks       : ");
                scanf("%d", & students[counter].physics_marks);


                ///checking condition .
                if(students[counter].physics_marks>=80){
                    students[counter].physics_gpa=5.00;
                }
                 else if(students[counter].physics_marks>=70){
                    students[counter].physics_gpa=4.00;
                }
                else if(students[counter].physics_marks>=60){
                    students[counter].physics_gpa=3.00;
                }
                else if(students[counter].physics_marks>=50){
                    students[counter].physics_gpa=2.00;
                }
               else if(students[counter].physics_marks>=40){
                    students[counter].physics_gpa=1.00;
                }
                else{
                    students[counter].physics_gpa=0.00;
                }

                  ///taking student chemistry marks .
                    printf("\t\t Chemistry marks     : ");
                scanf("%d", & students[counter].chemistry_marks);



                 ///checking condition .
                 if(students[counter].chemistry_marks>=80){
                    students[counter].chemistry_gpa=5.00;
                }
                 else if(students[counter].chemistry_marks>=70){
                    students[counter].chemistry_gpa=4.00;
                }
                else if(students[counter].chemistry_marks>=60){
                    students[counter].chemistry_gpa=3.00;
                }
                else if(students[counter].chemistry_marks>=50){
                    students[counter].chemistry_gpa=2.00;
                }
               else if(students[counter].chemistry_marks>=40){
                    students[counter].chemistry_gpa=1.00;
                }
                else{
                    students[counter].chemistry_gpa=0.00;
                }
                   ///taking student math marks .
                 printf("\t\t Math marks          : ");
                scanf("%d", & students[counter].math_marks);

                  ///checking condition
                 if(students[counter].math_marks>=80){
                    students[counter].math_gpa=5.00;
                }
                 else if(students[counter].math_marks>=70){
                    students[counter].math_gpa=4.00;
                }
                else if(students[counter].math_marks>=60){
                    students[counter].math_gpa=3.00;
                }
                else if(students[counter].math_marks>=50){
                    students[counter].math_gpa=2.00;
                }
               else if(students[counter].math_marks>=40){
                    students[counter].math_gpa=1.00;
                }
                else{
                    students[counter].math_gpa=0.00;
                }

        printf("\tPer Marks Calculating  In GPA :\n");
              ///converts the marks into gpa .
                printf(" Bangla Gpa     :  [%.2f]\n",students[counter].bangla_gpa);
                printf(" English Gpa    :  [%.2f]\n",students[counter].english_gpa);
                printf(" Physics Gpa    :  [%.2f]\n",students[counter].physics_gpa);
                printf(" Chemistry Gpa  :  [%.2f]\n",students[counter].chemistry_gpa);
                printf(" Math Gpa       :  [%.2f]\n",students[counter].math_gpa);


              ///checking condition becaus if student marks is 0.00 in any subject he will already  fail
               if(students[counter].bangla_gpa>0.00 && students[counter].english_gpa>0.00 && students[counter].physics_gpa>0.00 && students[counter].chemistry_gpa>0.00 && students[counter].math_gpa>0.00){
                ///sum the whole gpa .
                students[counter].total_gpa= students[counter].bangla_gpa+students[counter].english_gpa+students[counter].physics_gpa+students[counter].chemistry_gpa+students[counter].math_gpa;
                ///the sum results devided by 5 because the subject is 5
                students[counter].average_gpa=students[counter].total_gpa/5;
                ///store it in grand gpa .
                students[counter].grand_gpa= students[counter].average_gpa;
               }
               else {
                    ///else store it 0.00 means already fail .
                students[counter].grand_gpa=0.00;
               }
                 printf("\n");
               ///printing the results of gpa .
                printf("\n\t\t __ Grand GPA  :   [ %.2f ] __ ",  students[counter].grand_gpa);
                printf("\n");
            }




       }
       print_marksheetline();

       print_student_marksheet();



     printf("\n\t\tsearch any student information in the marksheet");

     printf("\n");
     ///for searching any elements .
     int search_id_number,flag=0;
     ///flag for check condition if it false it will print invalid the roll or id
     printf("\n\nGive any student ID number :");
     ///input the number what you wanted
     scanf("%d", & search_id_number);
       for (counter=0;counter<=3;counter++){
            ///if the search is equal to the roll number then it will print the information .
           if(search_id_number==students[counter].student_number){
            flag=1;
            printf("ID Number           : %d\n",students[counter].student_number);
            printf("Name of the student : %s\n",students[counter].name);
            printf("Grand GPA           : %.2f\n",students[counter].grand_gpa);

           }
       }

                if(flag==0){

                    printf("INVALID ID NUMBER .....");
                }

return 0;
}

