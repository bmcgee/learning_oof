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
    //initialize variables
    pos = _pos;
    gravity = 1;
    drag = ofRandom(.85,.99);
    life = 0;
    int maxVel = 10;
    //set up velocities

    vel.x = ofRandom(-maxVel, maxVel);
    vel.y = ofRandom(-maxVel, maxVel);
    
    //setup look of particle
    dim = _dim;
    color.set(ofRandom(175, 255), 0, ofRandom(100,150));

}

void Ball::update(){
    life++;
    
    //apply gravity and forces
    vel.y += (gravity*(life*.025));
    vel *= drag;
    
    //update position
    pos += vel;

    //Limit the position based on screen edges
    if(pos.x < 0) {
        pos.x = 0;
        vel.x *= -1;
    } else if(pos.x > ofGetWidth()) {
        pos.x = ofGetWidth();
        vel.x *= -1;
    }
    
    if(pos.y < 0) {
        pos.y = 0;
        vel.y *= -1;
    } else if(pos.y > ofGetHeight()) {
        pos.y = ofGetHeight();
        vel.y *= -1;
    }

}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, dim);
}
