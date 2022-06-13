#pragma once

#include "Soldier.h"

class Lieutenant : public Soldier
{
public:
	Lieutenant(const Soldier*);

	String getRank() const override;

	Soldier* clone() const override;

	bool command(const Soldier*) const;
};