#ifndef SILENCELIB_BASE_NONCOPYABLE_H
#define SILENCELIB_BASE_NONCOPYABLE_H

namespace silence
{

class noncopyable {
public:
	noncopyable(const noncopyable&) = delete;
	void operator=(const noncopyable&) = delete;

protected:
	noncopyable() = default;
	~noncopyalbe() = default;
};

} // namespace silence

#endif
