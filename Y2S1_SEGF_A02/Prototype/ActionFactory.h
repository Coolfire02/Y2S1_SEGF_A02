#pragma once

#include "Action.h"
#include "../Y2S1_SEGF_A02/SingletonTemplate.h"

#include "Batman.h"
#include "Ironman.h"
#include "Superman.h"

class ActionFactory : public SingletonTemplate<ActionFactory> {
	friend SingletonTemplate<ActionFactory>;

public:
	Action* BuildAction(int id)
	{
		return s_prototypes[id]->clone();
	}

	bool Init() {
		s_prototypes[0] = 0;
		s_prototypes[1] = new Batman();
		s_prototypes[2] = new Superman();
		s_prototypes[3] = new Ironman();
		return true;
	};

protected:
	ActionFactory() {};
	~ActionFactory() {
		for (int i = 0; i < 4; i++)
		{
			delete s_prototypes[i];
		}
	}


private:
	Action* s_prototypes[4];
};
