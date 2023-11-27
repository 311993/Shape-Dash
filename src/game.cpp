#include "game.h"
#include "math.h"

//Construct game object and initialize game variables - Written by David Stuckey
Game::Game(){
    for(int j = 0; j < 12; j++){
        for(int i = 0; i < 240; i++){
            tiles[j][i] = (j == 11);
        }
    }

    t = 0;
    cameraX  = 0;
    player = Player(40, 0, 20, 20);
}

int Game::update(){
    
    //Clear Screen
    LCD.Clear();

    //Draw tiles within screen
    LCD.SetFontColor(LCD.White);
    
     for(int j = 0; j < 12; j++){
        for(int i = 0; i < 16; i++){
            if(tiles[j][i] > 0){
                LCD.FillRectangle(i*20, j*20, 20, 20);

                player.collide(i*20,j*20,20,20);
            }
        }
    }

    //Draw Player
    player.draw();

    //Update player
    player.update();

    LCD.SetFontColor(LCD.Black);
    LCD.WriteAt("Play Game Here",120, 80);
    LCD.WriteAt("(Touch to return to menu)",20, 104);

    if(LCD.KeyState('W')){LCD.WriteLine('W');}
    else if(LCD.KeyState('A')){LCD.WriteLine('A');}
    else if(LCD.KeyState('S')){LCD.WriteLine('S');}
    else if(LCD.KeyState('D')){LCD.WriteLine('D');}    

    scrollScreen();
    t++;
    //int x,y;
    return 0; //LCD.Touch(&x, &y);
}

void Game::drawTile(){

}

void Game::collideTile(){

}

void Game::collideEnemy(){

}

void Game::collideProjectile(){

}

void Game::collideItem(){

}

void Game::cullEntities(){

}

void Game::scrollScreen(){

}

void Game::saveStats(){

}

void Game::displayGameEnd(int condition){

}