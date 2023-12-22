#include <SFML/Graphics.hpp>
#include <iostream>

const int BOARD_SIZE = 8;
const int TILE_SIZE = 80; // Adjust as needed

class ChessboardGUI {
public:
    sf::RenderWindow window;
    sf::RectangleShape squares[BOARD_SIZE][BOARD_SIZE];
    sf::Texture pieceTexture; // Texture for chess pieces
    sf::Sprite pieces[BOARD_SIZE][BOARD_SIZE]; // Sprite for each piece

    ChessboardGUI() : window(sf::VideoMode(BOARD_SIZE * TILE_SIZE, BOARD_SIZE * TILE_SIZE), "Chessboard") {
        // Initialize the chessboard squares
        for (int i = 0; i < BOARD_SIZE; ++i) {
            for (int j = 0; j < BOARD_SIZE; ++j) {
                squares[i][j].setSize(sf::Vector2f(TILE_SIZE, TILE_SIZE));
                squares[i][j].setPosition(i * TILE_SIZE, j * TILE_SIZE);

                // Alternate colors for chessboard
                if ((i + j) % 2 == 0) {
                    squares[i][j].setFillColor(sf::Color(209, 139, 71)); // Light color
                } else {
                    squares[i][j].setFillColor(sf::Color(139, 69, 19)); // Dark color
                }

                // Set initial position for pieces
                pieces[i][j].setPosition(i * TILE_SIZE, j * TILE_SIZE);
            }
        }

        // Load chess piece texture from file
        if (!pieceTexture.loadFromFile("path/to/chess_pieces.png")) {
            // Handle loading error
            std::cerr << "Error loading chess piece texture." << std::endl;
        }
    }

    void draw() {
        window.clear();

        // Draw the chessboard squares
        for (int i = 0; i < BOARD_SIZE; ++i) {
            for (int j = 0; j < BOARD_SIZE; ++j) {
                window.draw(squares[i][j]);

                // Draw the piece if it is set
                if (!pieces[i][j].getTexture()) {
                    window.draw(pieces[i][j]);
                }
            }
        }

        window.display();
    }

    // Set the piece for a specific square
    void setPiece(int x, int y, sf::IntRect textureRect) {
        pieces[x][y].setTexture(pieceTexture);
        pieces[x][y].setTextureRect(textureRect);
    }
};

int main() {
    ChessboardGUI chessboardGUI;

    // Example: Set a pawn on the chessboard
    chessboardGUI.setPiece(1, 2, sf::IntRect(0, 0, TILE_SIZE, TILE_SIZE)); // Assuming the pawn is at the top-left of the texture

    while (chessboardGUI.window.isOpen()) {
        sf::Event event;
        while (chessboardGUI.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                chessboardGUI.window.close();
            }
        }

        chessboardGUI.draw();
    }

    return 0;
}
