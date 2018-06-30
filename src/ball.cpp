//
//  ball.cpp
//  learning_oof
//
//  Created by Brian McGee on 6/29/18.
//

#include "ball.h"
Ball::Ball(){
}

void Ball::setup(float _x, float _y, int _dim){
    x = _x;
    y = _y;
    gravity = -3;
    
    speedX = ofRandom(-10, 10);
    speedY = ofRandom(-10, 10);
    
    dim = _dim;
    
    color.set(ofRandom(175, 255), 0, ofRandom(100,150));

}

void Ball::update(){
    if(x < 0) {
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()) {
        x = ofGetWidth();
        speedX *= -1;
    }
    cout << "SpeedX: "<< speedX << endl;

    
    if(y < 0) {
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()) {
        y = ofGetHeight();
        speedY *= -1;
    }
    
    cout << "SpeedY: "<< speedX << endl;

    x+=speedX;
    y+=speedY;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}
