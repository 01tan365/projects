#include<stdio.h>
#include<string.h>
struct person{
char name[50];
int id;
char email[50];
char address[50];
int mobile;
float cgpa;
}student,student1,student2,student3;
int main()
{


    FILE *file;

    int username;
    int num;
    int password;
    int n;
    int stuID;

    printf("\t\t Welcome to NSU RDS \n");
    printf("\t\t Please login\n");
    printf("Enter User name: ");
    scanf("%d",&username);
    printf("Enter User password (only numbers): ");
    //fflush(stdin);
    scanf("%d",&password);

    if(username==1100||username==2200||username==3300)
    {
        printf("\n Student Log in successful\n");
        printf("Here all your information:\n\n");
        printf("Enter your ID:\n");
        scanf("%d",&n);
        if(n==222264){
           strcpy(student1.name,"Tanjila");    //student 1
       student1.id=222264;
      strcpy(student1.email,"tanjila@gmail");
      strcpy(student1.address,"progoti sarani shahajadpur");
      student1.mobile=01673400751;

    printf("Information of student 1:\n");       // print student1
    printf("name:%s\n",student1.name);
    printf("id:%d\n",student1.id);
    printf("email:%s\n",student1.email);
    printf("address:%s\n",student1.address);
    printf("mobile:%d\n",student1.mobile);

        }

    else if(n==222265){
        strcpy(student2.name,"jessica");          //student 2
    student2.id=222265;
     strcpy(student2.email,"jessica@gmail");
     strcpy(student2.address,"bashudhara");
    student2.mobile=01673400751;

    printf("Information of student 2:\n");
    printf("name:%s\n",student2.name);           //print student 2
    printf("id:%d\n",student2.id);
    printf("email:%s\n",student2.email);
    printf("address:%s\n",student2.address);
    printf("mobile:%d\n",student2.mobile);
    }
    else{
        strcpy(student3.name,"Nabin");
    student3.id=222266;
     strcpy(student3.email,"nabin@gmail");        //student3
     strcpy(student3.address,"banani");
    student3.mobile=016734005751;

     printf("Information of student 3:\n");
    printf("name:%s\n",student3.name);
    printf("id:%d\n",student3.id);
    printf("email:%s\n",student3.email);
    printf("address:%s\n",student3.address);
    printf("mobile:%d\n",student3.mobile);

    }




    }
    else if (username==1111||username==2222)
    {
        printf("\n Admin Log in successful\n");
        printf("Choose any section\n");          //admin
        printf("1. Add student\n");
        printf("2. Search student\n");
        printf("3. View student\n");
        printf("4. Edit information\n");
        printf("5. Exit\n");
        scanf("%d",&num);
         if(num==1){

        printf("Enter information for student:\n \n");    // student add
    printf("Enter name:");
    fflush(stdin);
    gets(student.name);

    printf("Enter id number :");
    fflush(stdin);
    scanf("%d",&student.id);

    printf("Enter email :");
    fflush(stdin);
    scanf("%s",&student.email);

    printf("Enter address :");
    fflush(stdin);
    scanf("%s",&student.address);

    printf("Enter mobile number :");
    fflush(stdin);
    scanf("%d",&student.mobile);

    printf("Enter cgpa :");
    fflush(stdin);
    scanf("%f",&student.cgpa);



    printf("---------------------------\n");
    printf("Information of student :\n");
    printf("name=%s\n",student.name);
    printf("id=%d\n",student.id);
    printf("email=%s\n",student.email);
    printf("address=%d\n",student.address);
    printf("mobile number=%d\n",student.mobile);
    printf("cgpa=%.2f\n\n",student.cgpa);

     printf("\nChoose any section\n\n");
   }

           if(num==2){
           printf("Enter student ID:\n");
           scanf("%d",&n);

             if(n==222264){
        strcpy(student1.name,"Tanjila");      //search stu 1
       student1.id=222264;
      strcpy(student1.email,"tanjila@gmail");
      strcpy(student1.address,"progoti sarani shahajadpur");
      student1.mobile=01673400751;

    printf("Information of student 1:\n");
    printf("name:%s\n",student1.name);
    printf("id:%d\n",student1.id);
    printf("email:%s\n",student1.email);
    printf("address:%s\n",student1.address);
    printf("mobile:%d\n",student1.mobile);
            }

    else if(n==2222265){
           strcpy(student2.name,"jessica");          //student 2
    student2.id=222265;
     strcpy(student2.email,"jessica@gmail");
     strcpy(student2.address,"bashudhara");
    student2.mobile=01673400751;

    printf("Information of student 2:\n");
    printf("name:%s\n",student2.name);
    printf("id:%d\n",student2.id);
    printf("email:%s\n",student2.email);
    printf("address:%s\n",student2.address);
    printf("mobile:%d\n",student2.mobile);
    }

    else{
        strcpy(student3.name,"Nabin");
    student3.id=222266;
     strcpy(student3.email,"nabin@gmail");        //student3
     strcpy(student3.address,"banani");
    student3.mobile=016734005751;

     printf("Information of student 3:\n");
    printf("name:%s\n",student3.name);
    printf("id:%d\n",student3.id);
    printf("email:%s\n",student3.email);
    printf("address:%s\n",student3.address);
    printf("mobile:%d\n",student3.mobile);
    }


        }
        if(num==3){

            strcpy(student1.name,"Tanjila");      // all student view
    student1.id=222264;
    strcpy(student1.email,"tanjila@gmail");
    strcpy(student1.address,"progoti sarani shahajadpur");
    student1.mobile=01673400751;
    student1.cgpa=3.8;

   strcpy(student2.name,"jessica");
    student2.id=2222265;
     strcpy(student2.email,"jessica@gmail");
     strcpy(student2.address,"bashudhara");
    student2.mobile=01673400751;
    student2.cgpa=3.9;

     strcpy(student3.name,"Nabin");
    student3.id=222266;
     strcpy(student3.email,"nabin@gmail");
     strcpy(student3.address,"banani");
    student3.mobile=016734005751;
    student3.cgpa=3.9;

    printf("Information of student 1:\n");
    printf("name:%s\n",student1.name);
    printf("id:%d\n",student1.id);
    printf("email:%s\n",student1.email);
    printf("address:%s\n",student1.address);
    printf("mobile:%d\n",student1.mobile);
    printf("cgpa:%.2f\n",student1.cgpa);

    printf("----------------------\n");

    printf("Information of student 2:\n");
    printf("name:%s\n",student2.name);
    printf("id:%d\n",student2.id);
    printf("email:%s\n",student2.email);
    printf("address:%s\n",student2.address);
    printf("mobile:%d\n",student2.mobile);
    printf("cgpa:%.2f\n",student2.cgpa);

    printf("----------------------\n");

    printf("Information of student 3:\n");
    printf("name:%s\n",student3.name);
    printf("id:%d\n",student3.id);
    printf("email:%s\n",student3.email);
    printf("address:%s\n",student3.address);
    printf("mobile:%d\n",student3.mobile);
    printf("cgpa:%.2f\n",student3.cgpa);
        }
       if(num==4){
             file=fopen("NSU.txt","w");       // edit information
             if(file==NULL){
                printf("File does not exist\n");
             }
             else{
                printf("\nFile opened successfully\n\n");
                printf("\nPlease edit below information in the file named NSU\n\n");
                strcpy(student1.name,"Tanjila");      //add student
    student1.id=222264;
    strcpy(student1.email,"tanjila@gmail");
    strcpy(student1.address,"progoti sarani shahajadpur");
    student1.mobile=01673400751;
    student1.cgpa=3.8;

   strcpy(student2.name,"jessica");
    student2.id=222265;
     strcpy(student2.email,"jessica@gmail");
     strcpy(student2.address,"bashudhara");
    student2.mobile=01673400751;
    student2.cgpa=3.9;

     strcpy(student3.name,"Nabin");
    student3.id=222266;
     strcpy(student3.email,"nabin@gmail");
     strcpy(student3.address,"banani");
    student3.mobile=016734005751;
    student3.cgpa=3.9;

    printf("Information of student 1:\n");
    printf("name:%s\n",student1.name);
    printf("id:%d\n",student1.id);
    printf("email:%s\n",student1.email);
    printf("address:%s\n",student1.address);
    printf("mobile:%d\n",student1.mobile);
    printf("cgpa:%.2f\n",student1.cgpa);
    fprintf(file," Information of sudent 1 \n name=%s \n ID=%d \n Email=%s \n address=%s\n phone number=%d \n CGPA=%f\n",student1.name,student1.id,student1.email,student1.address,student1.mobile,student1.cgpa);


    printf("----------------------\n\n");

    printf("Information of student 2:\n");
    printf("name:%s\n",student2.name);
    printf("id:%d\n",student2.id);
    printf("email:%s\n",student2.email);
    printf("address:%s\n",student2.address);
    printf("mobile:%d\n",student2.mobile);
    printf("cgpa:%.2f\n",student2.cgpa);
    fprintf(file,"Information of sudent 2 \n name=%s \n ID=%d \n Email=%s \n address=%s\n phone number=%d \n CGPA=%f\n",student2.name,student2.id,student2.email,student2.address,student2.mobile,student2.cgpa);


    printf("----------------------\n\n");

    printf("Information of student 3:\n");
    printf("name:%s\n",student3.name);
    printf("id:%d\n",student3.id);
    printf("email:%s\n",student3.email);
    printf("address:%s\n",student3.address);
    printf("mobile:%d\n",student3.mobile);
    printf("cgpa:%.2f\n",student3.cgpa);
    fprintf(file,"Information of sudent 3 \n name=%s \n ID=%d \n Email=%s \n address=%s\n phone number=%d \n CGPA=%f\n",student3.name,student3.id,student3.email,student3.address,student3.mobile,student3.cgpa);

      fclose(file);

             }

      }
       if(num==5){
        printf("To exit please press enter:");
       }




}



    else
        {
        printf("\n Incorrect User name\n");
    }

}



