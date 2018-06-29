//
//  ball.h
//  learning_oof
//
//  Created by Brian McGee on 6/29/18.
//

#ifndef ball_hpp
#define ball_hpp

#include <stdio.h>
#include "ofMain.h"

class Ball {
public:
    
    void setup();
    void update();
    void draw();
    
    float x;
    float y;
    float speedY;
    float speedX;
    int diam;
    ofColor color;
    
    Ball();

private:
    
};

#endif /* ball_h */
