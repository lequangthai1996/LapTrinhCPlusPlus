#ifndef  HasFriend_H
#define HasFriend_H
#include "BasehasVirtual.h"
class Child
{
public:
	friend void BASE::display();
	virtual friend void show();
};
#endif // ! HasFriend_H
