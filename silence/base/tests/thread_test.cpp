#include "silence/base/current_thread.h"
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    printf("pid=%d, tid=%d\n", ::getpid(), silence::CurrentThread::GetTid());
    return 0;
}