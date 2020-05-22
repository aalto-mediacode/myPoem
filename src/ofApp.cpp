#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mypage1.setup();
    pageNum = 1;
    pageTotal = 5;

    


}

//--------------------------------------------------------------
void ofApp::update(){
    switch (pageNum){
        case 1:
            mypage1.update();
            break;
        case 2:
            mypage2.update();
            break;
        case 3:
            mypage3.update();
            break;
        case 4:
            mypage4.update();
            break;
        case 5:
            mypage5.update();
            
        default:
            break;
}
   
}

//--------------------------------------------------------------
    void ofApp::draw(){
    switch (pageNum){
        case 1:
            mypage1.draw();
            break;
        case 2:
            mypage2.draw();
            break;
        case 3:
            mypage3.draw(mouseX, mouseY);
            break;
        case 4:
            mypage4.draw();
            break;
        case 5:
            mypage5.draw();
            
        default:
            break;
            
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
 cout<<mouseX<<"."<<mouseY<<endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    if (pageNum<pageTotal) {
        pageNum++;
        switch (pageNum){
            case 1:
                mypage1.setup();
                break;
            case 2:
                mypage2.setup();
                break;
            case 3:
                mypage3.setup();
                break;
            case 4:
                mypage4.setup();
                break;
            case 5:
                mypage5.setup();
                
            default:
                break;
        }
    }else{
        setup();
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
