//Student attendance analyser.

# include <stdio.h>
int main()
{
  int n,i, absent,roll,total,present;
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
  
  printf("Enter number of days present: ");
  scanf("%d", &present);
  
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
  
  
