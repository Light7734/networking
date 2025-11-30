#pragma once
// This file will be included MANY times...

// Option A: forward declare on top of the file
class Big;

class IncludedManyTimes
{
public:
	IncludedManyTimes();

private:
	// Option B: forward declare when delcaring the variable
	/* class */ Big *m_large_dependency;
};

