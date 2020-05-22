#pragma once

#include "ofMain.h"

class page4{
    
public:
    void setup(){
        ofBackground(255,212,212);
        camWidth = 320;  // try to grab at this size.
        camHeight = 240;
        vector<ofVideoDevice> devices = myVideoGrabber.listDevices();
        //myVideoGrabber.initGrabber(320,240);
        
        for(size_t i = 0; i < devices.size(); i++){
            if(devices[i].bAvailable){
                ofLogNotice() << devices[i].id << ": " << devices[i].deviceName;
            }else{
                ofLogNotice() << devices[i].id << ": " << devices[i].deviceName << " - unavailable ";
            }
        }
        myVideoGrabber.setDeviceID(0);
        myVideoGrabber.setDesiredFrameRate(60);
        myVideoGrabber.initGrabber(camWidth, camHeight);
        videoInverted.allocate(camWidth, camHeight, OF_PIXELS_RGB);
        videoTexture.allocate(videoInverted);
        ofSetVerticalSync(true);
            //bw.allocate(320,240,GL_LUMINANCE);
        
    }
    
    void update(){
        myVideoGrabber.update();
        if(myVideoGrabber.isFrameNew()){
            ofPixels & pixels = myVideoGrabber.getPixels();
            for(size_t i = 0; i < pixels.size(); i++){
                //invert the color of the pixel
                videoInverted[i] = round(pixels[i]/255.f)*255;
            }
        }
        //load the inverted pixels
        videoTexture.loadData(videoInverted);
        bw.loadData(myVideoGrabber.getPixels());
    }
    
    void draw(){
        ofSetColor(255,212,212);
        ofSetHexColor(0xffffff);
        //myVideoGrabber.draw(20, 20);
        videoTexture.draw(0, 0, camWidth, camHeight);
        ofSetColor(0,0,0);
        ofDrawBitmapString("... in you", 670, 1000);
        
    }
    ofVideoGrabber myVideoGrabber;
    ofTexture bw;
    ofImage myImage;
    ofPixels videoInverted;
    ofTexture videoTexture;
    int camWidth;
    int camHeight;
    
};
