/*C Code To Print Minion On The Console */
# include <stdio.h>
#include<conio2.h>
#include<dos.h>
#include<windows.h>
int main()
{
int i=0;
while(!kbhit())
{
clrscr();
printf("------------%c%c---%c---%c%c\n",223,220,219,220,223);
printf("-----------%c%c%c%c%c%c%c%c%c%c%c%c%c\n",220,220,220,219,220,220,219,220,220,219,220,220,220);
printf("---------%c%c%c=============%c%c%c\n",220,223,223,223,223,220);
printf("--------%c===================%c\n",219,219);
printf("-------%c=====================%c\n",219,219);
printf("------%c===%c%c%c%c%c%c%c===%c%c%c%c%c%c%c===%c\n",219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
printf("-----%c===%c%c%c%c%c%c%c%c%c=%c%c%c%c%c%c%c%c%c===%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
printf("-----%c==%c%c%c----%c%c%c%c%c%c%c----%c%c%c==%c\n",219,219,219,223,223,219,219,219,219,219,223,223,219,219,219);
if(i%2==0)
printf("----%c%c%c%c%c%c--%c%c%c--%c%c%c--%c%c%c--%c%c%c%c%c%c\n",219,219,219,219,219,219,219,223,219,219,219,219,219,223,219,219,219,219,219,219,219);
else
printf("----%c%c%c%c%c%c--%c%c%c--%c%c%c--%c%c%c--%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,223,219,219,219,219,219,219,219);
i++;
printf("----%c%c%c%c%c%c--%c%c%c--%c%c%c--%c%c%c--%c%c%c%c%c%c\n",219,219,219,219,219,219,223,223,223,219,219,219,223,223,223,219,219,219,219,219,219);
printf("-----%c==%c%c%c----%c%c%c-%c%c%c----%c%c%c==%c\n",219,223,219,220,220,219,219,219,219,220,220,219,223,219);
printf("-----%c====%c%c%c%c%c%c%c---%c%c%c%c%c%c%c====%c\n",219,223,219,219,219,219,219,223,223,219,219,219,219,219,223,219);
printf("-----%c=========================%c\n",219,219);
printf("-----%c=========================%c\n",219,219);
printf("-----%c=======%c%c%c%c%c%c%c%c%c%c%c=======%c\n",219,223,220,220,220,220,220,220,220,220,220,223,219);
printf("-----%c=========================%c\n",219,219);
printf("----%c%c%c%c=====================%c%c%c%c\n",222,178,178,221,222,178,178,221);
printf("----%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",222,222,178,178,221,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,222,178,178,221,221);
printf("----%c==%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c==%c\n",219,222,178,220,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,220,178,221,219);
printf("---%c==%c=%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c=%c==%c\n",219,221,222,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,221,222,219);
printf("---%c==%c=%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c=%c==%c\n",219,219,222,178,178,178,178,178,178,220,220,220,220,220,220,220,178,178,178,178,178,178,221,219,219);
printf("---%c==%c=%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c=%c==%c\n",219,219,222,178,178,178,178,178,178,222,219,219,223,219,219,221,178,178,178,178,178,178,221,219,219);
printf("---%c==%c=%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c=%c==%c\n",219,219,222,178,178,178,178,178,178,178,223,223,223,223,223,178,178,178,178,178,178,178,221,219,219);
printf("---%c==%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c==%c\n",219,219,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,219,219);
printf("--%c%c==%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c==%c%c\n",220,219,219,222,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,221,219,219,220);
printf("--%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c-%c%c%c%c\n",219,219,219,219,219,222,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,221,219,219,219,219,219);
printf("--%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c-%c%c%c%c%c%c\n",219,219,219,219,219,219,222,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,221,219,219,219,219,219,219);
printf("---%c%c%c%c--%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c---%c%c%c%c\n",223,219,223,219,222,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,221,219,223,219,223);
printf("---------%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",222,178,178,178,178,178,178,221,222,178,178,178,178,178,178,221);
printf("-----------%c%c%c%c%c%c--%c%c%c%c%c%c\n",222,178,178,178,178,221,222,178,178,178,178,221);
printf("----------%c%c%c%c%c%c----%c%c%c%c%c%c",220,219,219,219,219,223,223,219,219,219,219,220);
Sleep (1000);
}
getch ();
}
