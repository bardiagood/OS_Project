#include "kernel/types.h"
#include "user/user.h"
// user program for testing custom syscall
int main()
{
    trigger(); // called custom syscall
    exit(0);
}