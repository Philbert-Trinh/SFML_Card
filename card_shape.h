//
// Created by ptrinh8 on 3/13/2022.
//

#ifndef CARD_CARD_SHAPE_H
#define CARD_CARD_SHAPE_H
#include <SFML/Graphics.hpp>

class card_shape : public sf::RectangleShape
{
private:
    sf::RectangleShape rectangle;
public:
    card_shape();
    card_shape(float width, float height);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    sf::FloatRect getGlobalBounds();
};


#endif //CARD_CARD_SHAPE_H
