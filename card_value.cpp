//
// Created by ptrinh8 on 3/13/2022.
//
#include "card_value.h"

sf::Font card_value::font;

card_value::card_value(): card_value (ACE)
{}

card_value::card_value(value_names value)
{
    set_up_text();
    set_value(value::create_value(value));
}

void card_value::set_up_text()
{
    if(!font.loadFromFile("Font/OpenSans-Bold.ttf"))
        exit (2);
    text.setFont(font);
    text.setCharacterSize(40);
}

void card_value::set_value(std::string value)
{
    text.setString(value);
}

void card_value::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(text, states);
}

void card_value::position_top_left()
{
    float x = (temp_card.getGlobalBounds().left + text.getCharacterSize()/4);
    float y = (temp_card.getGlobalBounds().top);
    text.setPosition(x,y);
}

void card_value::position_bottom_right()
{
    float x = ((temp_card.getGlobalBounds().left + temp_card.getGlobalBounds().width) - text.getCharacterSize()/4);
    float y = ((temp_card.getGlobalBounds().top + temp_card.getGlobalBounds().height));
    text.setPosition(x,y);
}

void card_value::rotate()
{
    text.rotate(180.f);
}

void card_value::set_fill_color(sf::Color color)
{
    text.setFillColor(color);
}


