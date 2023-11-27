#include "entity.h"

#define g 0.2

Entity::Entity(int x, int y, int w, int h) : x{x}, y{y}, w{w}, h{h} {
    vx = 0;
    vy = 0;
}

Entity::Entity() : Entity(0,0,0,0) {}

void Entity::update(){
    prevX = x;
    prevY = y;

    x += vx;
    y += vy;

    vy += g;

    if( y + h > 240){y = 240 - h;}
}

void Entity::draw(){
    LCD.SetFontColor(LCD.Green);
    LCD.FillRectangle(x,y,w,h);
}

int Entity::isKillFlagged(){
    return 0;
}

void Entity::kill(){
}

bool Entity::isColliding(int x, int y, int w, int h){
    return false;
}

bool Entity::isColliding(Entity){
    return false;
}

int Entity::getX(){

}

int Entity::getY(){

}

int Entity::getW(){

}

int Entity::getH(){

}