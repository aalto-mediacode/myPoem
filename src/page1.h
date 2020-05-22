#pragma once

#include "ofMain.h"
#include "ofApp.h"

class page1{
    
public:
    void setup(){
        ofBackground(255);
        touchmeImage.load("touchme.png");
        
    }
    
    void update(){

    }
    
    void draw(){
        ofSetColor(255,0,0);
        ofDrawRectangle(188, 264, 400, 540);
        ofSetColor(128,128,128);
        ofDrawRectangle(510,634, 160, 330);
        ofDrawRectangle(109, 767, 170, 150);
        ofDrawRectangle(262, 630, 40, 170);
        ofDrawRectangle(170, 500, 170, 170);
        ofDrawRectangle(67, 420, 150, 150);
        if(ofGetFrameNum()%20<10){
        touchmeImage.draw(100, 300, 600, 80);
        }
    }
    ofTrueTypeFont touchmeFont;
    ofImage touchmeImage;
};

