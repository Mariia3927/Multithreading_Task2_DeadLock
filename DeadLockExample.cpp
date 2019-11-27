#include "pch.h"
#include "DeadLockExample.h"


DeadLockExample::DeadLockExample()
{
}


DeadLockExample::~DeadLockExample()
{
}

void DeadLockExample::Add(int item)
{
	std::lock_guard<std::mutex> lock(m_mutex);
	m_buffer.push_back(item);
}

void DeadLockExample::AddRange(const std::vector<int>& range)
{
	std::lock_guard<std::mutex> lock(m_mutex);  
	std::for_each(range.begin(), range.end(), [&](int value) { Add(value); });
}

size_t DeadLockExample::GetSize() const
{
	std::lock_guard<std::mutex> lock(m_mutex);
	return m_buffer.size();
}
