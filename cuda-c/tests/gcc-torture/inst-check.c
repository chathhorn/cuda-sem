#include <stdarg.h>

int f(m)
{
  int i,s=0;
  for(i=0;i<m;i++)
    s+=i;
  return s;
}

int main()
{
  exit (0);
}
