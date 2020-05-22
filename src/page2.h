#pragma once

#include "ofMain.h"

class page2{
    
public:
    void setup(){
        andFont.load("EncodeSans-ExtraLight.ttf",80);
        andImage.load("and.png");
    }
    
    void update(){
        
    }
    
    void draw(){
        ofSetColor(255,0,0);
        ofDrawRectangle(188, 264, 400, 540);
        ofSetColor(255);
        andImage.draw(308, 265, 500, 120);
    }
   ofTrueTypeFont andFont;
    ofImage andImage;
};

