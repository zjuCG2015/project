
#ifndef MonitorModel_hpp
#define MonitorModel_hpp

#include <stdio.h>
#include "ObjModel.hpp"


class MonitorModel:public ObjModel {
private:
    bool playing = false;
    
public:
    void    setVideo(string mtl, int nFrame, string pic);
    void    play(){ playing = true; }
    void    pause(){ playing = false; }
    void    draw();
};

#endif /* MonitorModel_hpp */
