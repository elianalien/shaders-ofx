#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < NBALLS; ++i)
	{
		myBall[i].setup();
	}
	
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < NBALLS; ++i)
	{
		myBall[i].update();
	}

	for (int i = 0; i < otherBall.size(); ++i)
	{
		otherBall[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	shader.load("","hello2.frag");

	shader.begin();

	shader.setUniform1f("u_time", ofGetElapsedTimef());
	shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
	// ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
	for (int i = 0; i < NBALLS; ++i)
	{
		myBall[i].draw();
	}

	for (int i = 0; i < otherBall.size(); ++i)
	{
		otherBall[i].draw();
	}

	shader.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	Ball tempBall;
	tempBall.setup();
	otherBall.push_back(tempBall);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
