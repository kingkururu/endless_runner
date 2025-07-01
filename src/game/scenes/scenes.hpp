//
//  scenes.hpp
//  sfmlgame2
//
//  Created by Sunmyoung Yun on 2024/08
//
#pragma once

#ifndef scenes_hpp
#define scenes_hpp

#include <iostream>
#include <stdexcept>

#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>

#include "sound.hpp"
#include "fonts.hpp"
#include "physics.hpp"
#include "utils.hpp"


class Scene {
public:
    Scene( sf::RenderWindow& gameWindow );
    
    void runScene(float deltaTime, float globalTime); 
    void createAssets();
    void respawnAssets(); 
    void update();
    void draw();
    void handleInput();
    void handleGameEvents();
    void restart();
    void setTime(); 
    void deleteInvisibleSprites(); 
    void setMouseClickedPos(sf::Vector2i mouseClickedPos); 
    void spawnBullets(); 
    void handleGameFlags(); 
    
private:
    // Sprites
    std::unique_ptr<Background> background;
    std::unique_ptr<Player> playerSprite;
    std::vector<std::unique_ptr<Bullet>> bullets;
    std::vector<std::unique_ptr<Obstacle>> bushes;
    std::vector<std::unique_ptr<Obstacle>> slimes;

    // Music and sounds
    std::unique_ptr<MusicClass> backgroundMusic;
    std::unique_ptr<SoundClass> playerDeadSound;
    std::unique_ptr<SoundClass> playerJumpSound;
    std::unique_ptr<SoundClass> bulletSound;
    std::unique_ptr<SoundClass> obstHitSound;

    // Fonts and texts
    std::unique_ptr<TextClass> endingText;

    // other game components 
    sf::RenderWindow& window; 
    unsigned int score = Constants::INITIAL_SCORE;
    float deltaTime {}; 
    float globalTime {}; 
    sf::Vector2i mouseClickedPos {}; 

    float slimeRespTime {};
    float bushRespTime {}; 
    float bulletRespTime {}; 
    std::vector<float> bulletSpawnedTimes; 
    float spacePressedElapsedTime {}; 
    
};


#endif /* scenes_hpp */