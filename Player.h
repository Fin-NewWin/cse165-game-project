#ifndef PLAYER_H
#define PLAYER_H

#include <GL/glut.h>
#include <SOIL/SOIL.h>
#include <cmath>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>


class Player{
    double velocityBlock, velocityPlayer, maxVelocity;
    public:
    Player() {
        velocityPlayer = 0;
        velocityBlock = 240;
        maxVelocity = 240;
    }
    void showPlayer(GLuint runner){
        glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D, runner);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glMatrixMode(GL_MODELVIEW);
    }

    // Getters
    double getVelocityBlock(){ return velocityBlock; }
    double getMaxVelocity(){ return maxVelocity; }
    double getVelocityPlayer(){ return velocityPlayer; }

    // Setters
    void setVelocityBlock(double vb){ velocityBlock = vb; }
    void setMaxVelocity(double mv){ maxVelocity = mv; }
    void setVelocityPlayer(double vp){ velocityPlayer = vp; }

};
#endif

