#include <unistd.h>
#include <stdarg.h>

int print_format(char* specifier, va_list args)
{
  //TODO
}

int my_printf(char* formatString, ...)
{
  int count = 0;
  va_list args;

  va_start(args, formatString);

  while(*formatString != '\0') {
    if(*formatString == '%') {
      print_format(*++formatString, args);
    }
    else {
      write(1, formatString, 1);
    }

    ++formatString;
  }
}

int main()
{
  my_printf("test\n");
}
