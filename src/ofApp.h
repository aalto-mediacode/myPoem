#pragma once

#include "ofMain.h"
#include "page1.h"
#include "page2.h"
#include "page3.h"
#include "page4.h"
#include "page5.h"



class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    page1 mypage1;
    page2 mypage2;
    page3 mypage3;
    page4 mypage4;
    page5 mypage5;
    int pageNum;
    int pageTotal;

};
