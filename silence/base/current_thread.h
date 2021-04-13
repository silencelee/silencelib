#ifndef SILENCELIB_BASE_CURRENTTHREAD_H
#define SILENCELIB_BASE_CURRENTTHREAD_H

namespace silence
{

namespace CurrentThread
{

extern __thread int t_cached_tid;

void CachedTid();

inline int GetTid()
{
    if (t_cached_tid == 0) {
        CachedTid();
    }

    return t_cached_tid;
}

} // namespace CurrentThread

} // namespace silence

#endif