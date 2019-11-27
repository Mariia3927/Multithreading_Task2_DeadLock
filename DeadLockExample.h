#pragma once
#include "pch.h"


class DeadLockExample
{
public:
	DeadLockExample();
	DeadLockExample(const DeadLockExample&) = delete;
	DeadLockExample& operator=(const DeadLockExample&) = delete;
	~DeadLockExample();

	void Add(int item);
	void AddRange(const std::vector<int>& range);

	size_t GetSize() const;
private:
	std::vector<int> m_buffer{};
	mutable std::mutex m_mutex;
};

