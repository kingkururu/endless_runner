# Endless Runner 🎮

A 2D endless runner game built with C++ and SFML, inspired by the Chrome dinosaur game. Features dynamic obstacle spawning, shooting mechanics, and challenging gameplay.

## GAMEPLAY SCREENSHOT

<img width="1470" alt="Screenshot 2024-09-01 at 8 31 22 PM" src="https://github.com/user-attachments/assets/0e67357e-c94d-4c67-95ca-f2b09813ca46">

## 🎯 Objective

Dodge as many slimes and bushes as possible while scoring points. The player can jump by pressing the spacebar and move up or down on the grass using the W and S keys. Bullets are fired with a mouse click and travel in the direction of the cursor, continuing off-screen. Successfully avoiding a bush or hitting a slime with a bullet increases the score by one point. The game ends if the player is hit by either a slime or a bush.

## 🎮 How to Play

- **Movement**: Use `W` key to move up, `S` key to move down
- **Jumping**: Press `spacebar` to jump over obstacles
- **Shooting**: Click on screen to shoot bullets toward your cursor
- **Goal**: Avoid or destroy obstacles to score points
- **Scoring**: Each obstacle avoided or destroyed = 1 point
- **Restart**: Press `B` after game over to play again

## 🛠️ Technical Features

- **Engine**: SFML (Simple and Fast Multimedia Library)
- **Language**: C++
- **Architecture**: Modular design with scenes system for improved organization
- **Physics**: Circle-based collision detection, 2D raycasting, AABB, and pixel-perfect collisions
- **Memory Management**: Smart pointers with unique_ptr & shared_ptr for safer memory handling
- **Audio**: Integrated sound effects and background music
- **Sprites**: Sprite bitmask generation and class hierarchy modifications

## 🚀 Building & Running

### Prerequisites
- SFML 2.x library
- C++ compiler (GCC/Clang)
- Make

### Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/endless_runner_sfml_game
   cd endless_runner_sfml_game
   ```

2. **Build the game**:
   ```bash
   make
   ```

3. **Run the game**:
   ```bash
   ./run
   ```

### Alternative Setup (macOS with Homebrew)

1. **Install SFML**:
   ```bash
   # Install Homebrew if not already installed
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   
   # Install SFML
   brew install sfml
   ```

2. **Configure PATH** (add to ~/.zshrc or ~/.bash_profile):
   ```bash
   export PATH="/opt/homebrew/bin:$PATH"
   export PATH="/opt/homebrew/opt/sfml/bin:$PATH"
   ```

## 📁 Project Structure

```
endless_runner_sfml_game/
├── src/
│   ├── main.cpp
│   ├── game/
│   │   ├── game.cpp
│   │   ├── flags/
│   │   ├── physics/
│   │   ├── scenes/
│   │   ├── utils/
│   │   └── constants/
│   └── assets/
│       ├── fonts/
│       ├── sounds/
│       └── sprites/
├── Makefile
├── .gitignore
└── README.md
```

## 🎨 Assets

### Sprites
- **Main player sprite**: [Free Pixel Art Tiny Hero Sprites](https://craftpix.net/freebies/free-pixel-art-tiny-hero-sprites/)
- **Bushes**: [Free Top Down Bushes Pixel Art](https://craftpix.net/freebies/free-top-down-bushes-pixel-art/)
- **Slime**: [Free Slime Sprite Sheets Pixel Art](https://craftpix.net/freebies/free-slime-sprite-sheets-pixel-art/)
- **Forest background**: [Free Cartoon Forest Game Backgrounds](https://craftpix.net/freebies/free-cartoon-forest-game-backgrounds/)

### Sound Effects
- **Background music**: [Retro Game Arcade Music](https://pixabay.com/music/video-games-retro-game-arcade-236133/)
- **Player dead sound**: [Game Over Sound Effect](https://freesound.org/people/Soundholder/sounds/425341/)
- **Bullet sound**: [Bullet Firing Sound](https://freesound.org/people/andersmmg/sounds/523425/)

### Font
- **Pixel font**: [Pixel Font Collection](https://www.dafont.com/search.php?q=pixel&page=1)

## 🎯 Key Learning Outcomes

- Game development fundamentals with SFML
- Object-oriented programming in C++
- Advanced C++ features (smart pointers, template metaprogramming)
- 2D graphics rendering and sprite management
- Real-time input handling and game loops
- Multiple collision detection algorithms (AABB, circle-based, pixel-perfect)
- Audio system integration
- Scene management and modular architecture
- Physics simulation and raycasting

## 🎮 Game Mechanics

This Chrome dinosaur-inspired endless runner features:
- **Dynamic Difficulty**: Slimes and bushes spawn at decreasing time intervals
- **Dual Combat System**: Jump over obstacles or shoot them with bullets
- **Scoring System**: 1 point per obstacle avoided or destroyed
- **Multi-directional Movement**: Up/down movement plus jumping mechanics
- **Responsive Controls**: Smooth movement and precise bullet targeting

## 🏆 Advanced Features

- **New scenes system**: Flags/utils/constants class organization
- **Enhanced physics**: Circle-based, 2D raycasting, and pixel-perfect collision detection
- **Sprite bitmask generation**: Optimized collision detection
- **Smart pointer implementation**: Modern C++ memory management
- **Template metaprogramming**: Advanced C++ techniques for generic collision handling
- **Modular architecture**: Cleaner code separation with improved maintainability
