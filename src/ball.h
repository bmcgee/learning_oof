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
    
    void setup(ofPoint pos, int dim);
    void update();
    void draw();
   
    ofPoint pos;
    ofPoint vel;
    ofPoint frc;
    
    
    int life;
   
    int dim;
    ofColor color;
    
    float drag;
    float gravity;
    
    Ball();

private:
    
};

#endif /* ball_h */
