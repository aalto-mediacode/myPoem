#pragma once

#include "ofMain.h"

class page3{
    
public:
    void setup(){
        ofBackground(255);
        seeImage.load("see.png");
        slashImage.load("slash.png");
        hearImage.load("hear.png");


    }
    
    void update(){
 
    }
    
    void draw(float x, float y){
        ofSetColor(255);
        slashImage.draw(280, 380, 200, 200);
        hearImage.draw(100, 600, 600, 400);
        if(x-prevx!=0 && y-prevy!=0){
            seeImage.draw(x, y, 500, 400);
        }
        prevx=x;
        prevy=y;
        ofSetColor(0,0,0);
        ofDrawBitmapString("me", 740, 1020);
    }

    ofImage seeImage;
    ofImage slashImage;
    ofImage hearImage;
    float prevx, prevy;
};

