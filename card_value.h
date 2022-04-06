//
// Created by ptrinh8 on 3/13/2022.
//

#ifndef CARD_CARD_VALUE_H
#define CARD_CARD_VALUE_H
#include "value.h"
#include "card_shape.h"
#include "card_suit.h"
#include <iostream>
#include <SFML/Graphics.hpp>

class card_value : public sf::Drawable{
private:
    static sf::Font font;
    sf::Text text;
    card_shape temp_card;

public:
    card_value();
    card_value(value_names value);
    void set_up_text();
    void set_value(std::string value);
    void position_top_left();
    void position_bottom_right();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void rotate();
    void set_fill_color(sf::Color color);
};


#endif //CARD_CARD_VALUE_H
