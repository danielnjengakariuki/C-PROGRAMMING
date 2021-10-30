//program forf the nested if ladder
#include <stdio.h>

int main()
{
    int maths, english, kiswahili, biology, computer_studies, average_score;
    printf("enter the marks for the five subjects\n");
    scanf("%d\n%d\n%d\n%d\n%d\n", &maths,&english,&kiswahili,&biology,&computer_studies);
  average_score=(maths+english+kiswahili+biology+computer_studies)/5;
  printf("the average score is =%d",average_score);
  
  if(average_score>=90 && average_score<=100)
  {
  
      printf("Grade is A");
  }
      else if(average_score>=80 && average_score<90)
   {
      printf("Grade B");
   }
      else if(average_score>=70 && average_score<80)
      {
          printf("Grade C");
      }
      else if(average_score>=60 && average_score<70)
      {
          printf("Grade D");
      }
      else if(average_score>=50 && average_score<60)
{
    printf("Grade E");
}
else if(average_score<50)
{
    printf("Fail");

  }
  }