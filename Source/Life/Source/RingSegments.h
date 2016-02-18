#ifndef RINGSEGMENTS_H
#define RINGSEGMENTS_H

#include "GameObject.h"

class RingSegments : public GameObject
{

public:
	RingSegments();
	~RingSegments();

	void Init(Vector3 position);
	void Update(double dt);

	Vector3 posStart, posEnd;
	
	Vector3 endTrans, startTrans;

private:

};

#endif