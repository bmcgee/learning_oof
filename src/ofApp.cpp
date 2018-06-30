#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i<groupOfBalls.size(); i++) {
        groupOfBalls[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<groupOfBalls.size(); i++) {
        groupOfBalls[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'x'){
        groupOfBalls.clear();
    }

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
    ofPoint mousePoint;
    mousePoint.set(x,y);
    tempBall.setup(mousePoint, ofRandom(10, 40));
    groupOfBalls.push_back(tempBall);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for (int i=0; i < groupOfBalls.size(); i++){
        float distance = ofDist(x, y, groupOfBalls[i].pos.x, groupOfBalls[i].pos.y);
        
        if (distance < groupOfBalls[i].dim) {
            groupOfBalls.erase(groupOfBalls.begin()+i);
        }
    }
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
