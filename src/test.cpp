#include "test.h"

static int* a;

int *get()
{
  return a;
}

void aa()
{
  ::a = new int(10);
}