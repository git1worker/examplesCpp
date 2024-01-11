/*
////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////

#include <stdio.h>
#include <stdalign.h>

typedef struct
{
  int a [10];
  int b;
} A;

int
main ()
{
  A *str = new A;
  printf ("Hello World %ld", sizeof(*str)); // Hello World 44

  return 0;
}
///////////////////////////////////////////////////
#include <stdio.h>
typedef struct
{
  int a[10];
} A;

int main ()
{
  A *str = new A;
  for (int i = 0; i < sizeof(*str) / sizeof(str->a[0]); ++i) {
    str->a[i] = i;
    printf ("%d ", str->a[i]); // Hello World 44
  }

  return 0;
}
///////////////////////////////////////////////////
#include <iostream>

typedef struct {
  int a[10];
} A;

int main ()
{
  A *a = new A;
  for (auto &i : a->a)
    std::cout << i << std::endl;
  return 0;
}
////////////////////////////////////////////////////////
void foo() {}
int main()
{
    printf("%p, %p\n", foo, &foo);
    return 0;
}
// 0x5590e6278189, 0x5590e6278189 adresses is equally
//////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

struct A {
    //virtual ~A() = default;
    size_t a = 10, b = 22;
};

struct B : public A {
    int c;
};

int main()
{
    A* a = new A;
    
    unsigned char * ptr = reinterpret_cast<unsigned char*>(a);
    cout << *reinterpret_cast<size_t*>(ptr) << ' ' << *reinterpret_cast<size_t*>(ptr+8) << endl;
    cout << sizeof (B) ;
  
    delete a;
    return 0;
}
//////////////////////////////////////////////////////////////

*/

