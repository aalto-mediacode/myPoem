#pragma once

#include "ofMain.h"

class page5{
    
public:
    void setup(){
        ofBackground(255,212,212);
        roseVideo.load("WhiteRose-32800.mp4");
        roseVideo.play();
        petImage.load("pet.png");
    }
    
    void update(){
       roseVideo.update();
    }
    
    void draw(){
        ofSetColor(255);
        roseVideo.draw(0,0,768,500);
        ofSetColor(0,0,0);
        ofDrawBitmapString("i want to be your", 600, 1000);
        ofSetColor(255);
        petImage.draw(40, 225, 500, 400);
        
        
    }
    ofVideoPlayer roseVideo;
    ofImage petImage;
};

