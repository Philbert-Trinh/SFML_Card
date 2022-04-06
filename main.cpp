#include "complete_card.h"
#include "Work on it/deck.h"
#include <SFML\Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode{1920, 1080, 32}, "Card");
    window.setFramerateLimit(60);
    deck test_deck;

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        window.draw(test_deck);
        window.display();
    }
}

