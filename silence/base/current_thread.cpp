#include "current_thread.h"
#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h>

namespace silence
{

namespace CurrentThread
{

__thread int t_cached_tid = 0;

void CachedTid()
{
    if (t_cached_tid == 0) {
        t_cached_tid = ::syscall(SYS_gettid);
    }
}

bool IsMainThread()
{
    return GetTid() == ::getpid();
}

} // namespace CurrentThread

} // namespace silence