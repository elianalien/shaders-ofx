#ifndef _BALL
#define _BALL
#include "ofMain.h"

class Ball
{
public:
	Ball();
	~Ball();

	void setup();
	void update();
	void draw();

	// variables 
	float x;
	float y;
	float speedX;
	float speedY;
	int dim;
	ofColor color;

private:

};
#endif