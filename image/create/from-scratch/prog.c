#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>

int main() {
   printf("This program runs in (or as?) a container\n");
   printf("The processid (PID) is %d\n", getpid());

   struct utsname unam;
   if (uname(&unam) != -1) {
       printf("Kernel version and release:\n  %s\n  %s\n", unam.version, unam.release);
   } else {
       printf("Failed to retrieve kernel information.\n");
   }
}
