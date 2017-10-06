
#ifndef __DEFINE_H
#define __DEFINE_H

class Player : Circle {

	Net net;
	float vx, vy;
	float xInput, jumpInput;

public:
	Player(Net _net, float _startX, float _startY);

	float startX, startY;

	void input(float _xInput, float _jumpInput);
	void update(float dTime);
	void resetPosition();

};

#endif // __DEFINE_H
