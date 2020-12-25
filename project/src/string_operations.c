#include <stdio.h>
//changes in Tom Repo for Brabch
//changes in Tom Repo For Conflict
//changes in Jerry Repo for Patch
//changes for jerry Repo
--size_t my_strlen(char *s)
//Added code here for String length function
//hange in 
//hange in erry file For the purpose of Resolve conflct
+size_t w_strlen(const wchar_t *s)
+
{
   +
   const wchar_t *p = s;
   +
   +
   while (*p)
   + ++p;
   + return (p - s);
   +
}
+size_t  my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

+char *my_strcpy(char *t, char *s)
+
{
   +
   char *p = t;
   +
   + while (*t++ = *s++)
   + ;
   +
   +
   return p;
   +
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}