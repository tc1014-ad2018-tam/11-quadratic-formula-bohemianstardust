// Write a program that helps the user to solve a quadratic formula.
// The general quadratic equation is ax²+bx+c=0.
// Your program should:
//
// -Ask the user for the values of the three constants a, b and c.
// -Validate that a is never 0.
// -Validate that the values received are numeric.
// -Make sure that you are able to compute the square root.
// -If that is not possible, report that to the user.
// -Report the values for x (both values).
// -Make use of the standard library functions to solve this problem.
//
// Made by Jim Holguín on October 3rd, 2018.

#include <stdio.h>
#include <math.h>

double a,b,c,x1,x2=0;

// Getting value of x when sqrtb²-4ac is added.
double promax(double g, double h, double j)
{
  double x1=(0-h+sqrt((h*h)-(4*g*j)))/(2*g);
  return x1;
}

// Getting value of x when sqrtb²-4ac is subtracted.
double promin(double g, double h, double j)
{
  double x2=(0-h-sqrt((h*h)-(4*g*j)))/(2*g);
  return x2;
}

// --- --- MAIN FUNCTION --- ---

int main(void)
{
  printf("Give me values of 'a', 'b' and 'c'.\n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a==0)
  {
    // Can't divide by zero.
    printf("\nValue of 'a' can't be zero.");
    return 0;
  }

  else
  {
    x1=promax(a, b, c);

    // Can't compute a negative root.
    if((b*b)-(4*a*c)<0)
    {
      printf("\nThere's no solution for X1\n");
    }
    else
    {
      printf("\nX1 equals %lf\n", x1);
    }

    x2=promin(a, b, c);
    if((b*b)-(4*a*c)<0)
    {
      printf("There's no solution for X2");
    }
    else
    {
      printf("X2 equals %lf", x2);
    }
  }
  return 0;
}