#include <stdio.h>
#include <time.h>
 
int main()
{  int answer;
   int userans;
   int wrong=0;
   int score=0;
   char name[20];
   
   time_t start_t, end_t;
   double diff_t;   
   char arithmetic[5]={'+','-','*','/','%'};
   //array of characters that contain arithmetic operations
    printf("***********************************************************************************************\n");sleep(1);
    printf("____________________________MATH BEE__________________\n");
    printf("|/////////////////////////////////////////////////////|\n");  sleep(1.5);
    printf("|_____________________________________________________|\n");
    printf("|   Answer as quick as possible(Under 3 seconds)      |\n");   sleep(2);  
    printf("|                      AND                            |\n"); sleep(0.5);  
    printf("|        Atmost you can make 3 mistakes               |\n"); sleep(1.5);  
    printf("|_____________________________________________________|\n"); sleep(.25);
    printf("|/////////////////////////////////////////////////////|\n");
    printf("|_____________________________________________________|\n");   
   
    
    char ch;
    
    printf("Read the above instructions and press ENTER    \n");

    scanf("%c",&ch);
    
 printf("Enter your name:-   \n");
 
   scanf("%s",name); 
   
  Game:  
    printf("press ENTER to start \n");

    scanf("%c",&ch);
   
  while(1) { srand(time(0));
  
int rand1 = rand()%5;

//generating random integer rand1(0,50)

int num1 =  (rand()%(50-1-0))+1;

//generating random integer rand2(1,10)

int num2 =  (rand()%(10-1-1))+1;

printf("%d %c %d =   \n",num1,arithmetic[rand1],num2);

char c =arithmetic[rand1];

switch(c){
    case '+': answer = num1 + num2;       
              break; 
    case '-':answer =  num1 - num2;
              break;
    case '*':answer=num1 * num2;
             break;
    case '/':answer=num1/num2;
             break;
    case '%':answer=num1 % num2;
             break;
}

time(&start_t);

scanf("%d",&userans);

time(&end_t);

 diff_t = difftime(end_t, start_t);
 
 //diff_t is the time taken by user to answer a question
 
 if(diff_t<3){
 
if(userans == answer){
    score++;
    
}
//terminating if user does 3 mistakes
else if(userans !=answer)
{
    wrong++;
    
    if(wrong==3){
        printf("%s your score is %d",name,score);
    break;
        }
     }
 }
 
 //terminating if user takes more than 3 seconds
if( diff_t>3){
    printf("you are late\n");
    printf("%s your  score is %d\n",name,score);
    break;
  char response;  
  printf("Want to play again?(Y/N)");
  scanf("%c",&response);
  if(response=='y' || response=='Y'){
      goto Game;
      }
else 
break;

  
  
  }}}