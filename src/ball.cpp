//
//  ball.cpp
//  learning_oof
//
//  Created by Brian McGee on 6/29/18.
//

#include "ball.h"
Ball::Ball(){
}

void Ball::setup(ofPoint _pos, int _dim){
    pos = _pos;
    gravity = -3;
    
    int maxSpeed = 1;

    vel.x = ofRandom(-maxSpeed, maxSpeed);
    vel.y = ofRandom(-maxSpeed, maxSpeed);
    
    dim = _dim;
    
    color.set(ofRandom(175, 255), 0, ofRandom(100,150));

}

void Ball::update(){
    
    
    if(pos.x < 0) {
        pos.x = 0;
        vel.x *= -1;
    } else if(pos.x > ofGetWidth()) {
        pos.x = ofGetWidth();
        vel.x *= -1;
    }
    cout << "Velocity Y: "<< vel.y << endl;

    
    if(pos.y < 0) {
        pos.y = 0;
        vel.y *= -1;
    } else if(pos.y > ofGetHeight()) {
        pos.y = ofGetHeight();
        vel.y *= -1;
    }
    
    cout << "Velocity Y: "<< vel.y << endl;
    
    int t = ofGetFrameNum() + 123;
    int s = .2;
    
    cout << "TX: " << t << endl;
    
    pos += vel;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, dim);
}
