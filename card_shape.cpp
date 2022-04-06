//
// Created by ptrinh8 on 3/13/2022.
//

#include "card_shape.h"

card_shape::card_shape() : card_shape(260, 336)
{}

card_shape::card_shape(float width, float height)
{
    rectangle.setSize(sf::Vector2f(width, height));
    rectangle.setOutlineColor(sf::Color::Black);
    rectangle.setFillColor(sf::Color::White);
    rectangle.setOutlineThickness(5);
    rectangle.setPosition(5, 5);
}

void card_shape::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(rectangle);
}

sf::FloatRect card_shape::getGlobalBounds()
{
    return rectangle.getGlobalBounds();
}

