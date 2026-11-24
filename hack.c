//Student attendance analyser.

# include <stdio.h>
int main()
{
  int n,i,absent,roll,total,present;
  float attendance;
  char name[50];
  
  printf("Enter number of students: ");
  scanf("%d", &n);
  
  for(i=1;i<=n;i++){
  
  printf("\n-------Student %d------\n",i);
  
  printf("Enter roll number: ");
  scanf("%d", &roll);
  
  printf("Enter name: ");
  scanf("%s", name);
  
  printf("Enter total classes: ");
  scanf("%d", &total);
  
   if(total<=0){
   printf("total classes must be greater than 0: ");
   continue;}
   
   printf("Enter number of days present: ");
   scanf("%d", &present);
   
   if( present> total)
   {printf("Present days must be 0 or between 0 and total classes: ");
   continue;}
 
   attendance= (present*100.0)/total;
   absent= total-present;
   
   
  printf("\n-----Attendance report-----\n");
  
  printf("\nStudent name: %s\n", name);
  printf("Roll Number: %d\n", roll);
  printf("Days present: %d\n", present);
  printf("days absent: %d\n", absent);
  printf("Attendance: %.2f%%\n", attendance);
  
  if(attendance >=75)
    printf("Status: Eligible for exams\n");
 
  else 
    printf("Status: Not eligible for exams\n");
  }
  return 0;
  }
  
  
