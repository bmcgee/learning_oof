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
    
    void setup(float _x, float _y, int dim);
    void update();
    void draw();
    
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    ofColor color;
    
    float gravity;
    
    Ball();

private:
    
};

#endif /* ball_h */
