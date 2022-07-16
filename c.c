// ASSIGNMENT 3

//  1....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1;
//     while(i<=5)
//     {
//         printf("mysirG\n");
//         i++;
//     }
//     return 0;
// }

// 2....
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }
// 3.....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1;
//     for(i=10;i>=1;i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }
// 3....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=10;
//     while(i>=1)
//     {
//         printf("%d\n",i);
//         i--;
//     }
//     return 0;
// }
// 4....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1;
//     while(i<=20)
//     {
//         if(i%2!=0)
//         {
//             printf("%d\n",i);
//         }
//         i++;
//         }
//     return 0;
// }
// 5....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=20;
//     while(i>=1)
//     {
//       if(i%2!=0)
//       printf("%d\n",i);
//       i--;
//     }
//     return 0;
// }

// 6....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
    
//     int i=1;
//     while(i<=20)
//     {
//         if(i%2==0)
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
// 7....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=20;
//     while(i>=1)
//     {
//         if(i%2==0)
//         printf("%d\n",i);
//         i--;
//     }
//     return 0;
// }


// 8....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d\n",i*i);
//         i++;
//     }
//     return 0;
// }


// 9....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1;
//     while(i<=10)
//     {
//        printf("%d\n",i*i*i);
//        i++;
//     }
//     return 0;
// }

// 10....
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,n=1;
    while(i<=10 && n<=10)
    {
        printf("%dX%d=%d\n",i,n,n*i);
        i++;
        n++;
    }
    return 0;
}
