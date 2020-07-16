#include<stdio.h>
#include<string.h>
struct phone
{
    int mobile;
    int telephone;
};
struct student
{
    char stdName[40];
    int stdAge;
    float stdCgpa;
    struct phone p;
};
void show(struct student s[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n\nStudent %d information\n",i+1);
        printf("Full Name: %s\n",s[i].stdName);
        printf("Age: %d\n",s[i].stdAge);
        printf("CGPA: %.2f\n",s[i].stdCgpa);
        printf("Mobile: +880%d\n",s[i].p.mobile);
        printf("Telephone: +%d\n",s[i].p.telephone);
    }
}
int main()
{
    int i,n;
    float avg=0;
    printf("How many students information you want to store: ");
    scanf("%d",&n);
    getchar();
    struct student s[2];
    for(i=0; i<n; i++)
    {
        printf("Enter student %d information\n",i+1);
        printf("Full Name: ");
        scanf("%[^\n]",s[i].stdName);
        printf("Age: ");
        scanf("%d",&s[i].stdAge);
        printf("CGPA: ");
        scanf("%f",&s[i].stdCgpa);
        printf("Mobile: ");
        scanf("%d",&s[i].p.mobile);
        printf("Telephone: ");
        scanf("%d",&s[i].p.telephone);
        getchar();
        //avg=avg+s[i].stdAge;
    }

    show(s,n);

    /*strcpy(s2.stdName,"Mansurul Hakim Shakib");
    s2.stdAge=19;
    s2.stdCgpa=3.94;*/

    //avg=avg/n;
    //printf("Age average: %.2f\n",avg);

    /*printf("\nStudent 2 information\n");
    printf("Full Name: %s\n",s2.stdName);
    printf("Age: %d\n",s2.stdAge);
    printf("CGPA: %.2f\n",s2.stdCgpa);*/
}
