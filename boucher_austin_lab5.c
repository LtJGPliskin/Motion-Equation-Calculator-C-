#include <stdio.h>
#include <math.h>
int user_meau();
double a;//stores the initial position
double b;//stores the time
double c;//stores the acceleration
double d;//stores the initial velocity 
double e;//stores the final position
double f;//stores the final velocity
int h;//stores the user input
double final;//stores the final output
void equation1()//runs equation 1
{
  final = (d + (c * b));
}
int equation2()//runs equation 2
{
  final = (a + (d * b) + (.5 * c * (b * b)));
}
int equation3()//runs equation 3
{
  final = sqrt((d*d) + (2 * c * (e - a)));
}
int equation4()//runs equation 4
{
  final = (a + .5*(f+d)*b);
}
int main (void)//runs the program
{
  printf("Welcome to the MOTION EQUATION CALCULATOR\n\n");//greets the user
  while(h != 5)//runs the program infinitaly 
      {
	user();//asks the user what program wants to be run
	switch(h)//runs a switch loop
	  {
	  case 1 ://runs the first case
	      initial_velocity();
	      acceleration();
	      time();
	      equation1();
	      break;
	  case 2 ://runs the second case
	      initial_position();
	      initial_velocity();
	      time();
	      acceleration();
	      equation2();
	      break;
	  case 3 ://runs the third case
	      initial_velocity();
	      acceleration();
	      final_position();
	      initial_position();
	      equation3();
	      break;
	  case 4 ://runs the fourth case
	      initial_position();
	      final_velocity();
	      initial_velocity();
	      time();
	      equation4();
	      break;
	  case 5 ://ends the program
	      printf("Thank you for using the MOTION EQUATION CALCULATOR. Goodbye. \n");
	      return 0;
	      break;
	  }
	if(h <= 5 && h >=1)//assures that the result will be given
	  {
	printf("Your result is %.4lf\n", final);
	  }
	if(h < 1 || h > 5)//reprompts the user
	  {
	    printf("Invalid option. Please try again.\n");
	  }
}
}
int initial_position(void)//asks initial position
{
  printf("\tEnter initial position > ");
  scanf("%lf", &a);
}
int time(void)//asks time
{
  printf("\tEnter time > ");
  scanf("%lf", &b);
}
int acceleration(void)//asks acceleration
{
  printf("\tEnter acceleration > ");
  scanf("%lf", &c);
}
int initial_velocity(void)//asks initial velocity
{
  printf("\tEnter initial velocity > ");
  scanf("%lf", &d);
}
int final_position(void)//asks final position
{
  printf("\tEnter final position > ");
  scanf("%lf", &e);
}
int final_velocity(void)//asks final velocity
{
  printf("\tEnter final velocity > ");
  scanf("%lf", &f);
}
int user(void)//prompts the user
{
  printf("Choose a motion equation 1-4 or chose 5 to QUIT > ");
  scanf("%d", &h);
}
