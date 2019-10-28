#pragma once
#include "Module.h"


class OffhandFixer :
	public IModule
{
public:
	OffhandFixer();
	~OffhandFixer();

	void OffhandFixer::onTick(C_GameMode* gm);
	const char* OffhandFixer::getModuleName();
};

