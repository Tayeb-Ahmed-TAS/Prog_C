#include<stdio.h>
#include<string.h>
struct person
{
    int id;
    char name[50];
    float marks;
};
main()
{   struct person person[10];
    int i,n;
    printf("how many student? Ans : ");
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("Enter information for student:%d\n",i+1);
    printf("name :");
    fflush(stdin);
    gets(person[i].name);
    strupr(person[i].name);

    printf("id :");
    scanf("%d",&person[i].id);
    printf("marks :");
    scanf("%f",&person[i].marks);
   }

   for(i=0;i<n;i++)
   {
    printf("\n\nInformation of :%s\n",person[i].name);
    printf("\nid :%d",person[i].id);
    printf("\nmarks :%.2f",person[i].marks);

   }

}
