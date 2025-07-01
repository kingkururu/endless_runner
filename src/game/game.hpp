//
//  game.hpp
//  sfmlgame3
//
//  Created by Sunmyoung Yun on 2024/08

#pragma once

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <stdexcept>

#include <SFML/Graphics.hpp>

#include "scenes.hpp"

class GameManager {
public:
    GameManager();
    void runGame();

private:
    void countTime();
    void handleEventInput();

    //game components (not accesible from anywhere else otherthan game manager)
    sf::RenderWindow window;
    sf::Clock clock;
    float globalTime {};
    float deltaTime {}; 
    
    // Scene
    std::unique_ptr<Scene> scene;
};

#endif // GAME_HPP
