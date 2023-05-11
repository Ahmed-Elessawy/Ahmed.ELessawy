#include <stdarg.h>

void minimal_printf(char *fmt, ...)
{
   va_list ap; /* points to each unnamed arg in turn */
   char *p, *sval;
   int ival;
   double dval;
   va_start(ap, fmt); /* make ap point to 1st unnamed arg */
   for (p = fmt; *p; p++) 
   {
      if (*p != '%') 
      {
         putchar(*p);
         continue;
      }
      switch (*++p) 
      {
         case 'd':
            ival = va_arg(ap, int);
			char DStr[5];
			tostring(DStr,ival);
            //printf("%d", ival);
			for (sval = va_arg(ap, char *); *sval; sval++)
            putchar(*sval);
            break;
        case 'f':
            dval = va_arg(ap, double);
			char FStr[5];
			tostring(FStr,ival);
			for (sval = va_arg(ap, char *); *sval; sval++)
            putchar(*sval);
            //printf("%f", dval);
            break;
        case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
            putchar(*sval);
            break;
        default:
            putchar(*p);
            break;
      }
   }
   va_end(ap); /* clean up when done */
}



void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}