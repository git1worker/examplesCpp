/*
#include <stdio.h>
#include <stdalign.h>

typedef struct
{
  unsigned int a:4;
  unsigned int a2:4;
  unsigned int a3:4;
  unsigned int a4:4;
  unsigned int a5:4;
} A;

int
main ()
{
  A str;
  str.a = 15;
  str.a2 = 15;
  str.a3 = 15;
  str.a4 = 15;
  str.a5 = 15;
  printf ("Hello World %d %d %d %d %d\n"
	  "%ld %ld\n", str.a, str.a2, str.a3, str.a4, str.a5, sizeof (str),
	  alignof (str));

  return 0;
}
*/


