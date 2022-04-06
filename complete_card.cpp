//
// Created by ptrinh8 on 3/14/2022.
//

#include "complete_card.h"

complete_card::complete_card() : complete_card(ACE, HEARTS)
{}

complete_card::complete_card(value_names value, suit_names suit) :
value_top_left(value), value_bottom_right(value), suit_center(suit)
{
    if (suit == SPADES || suit == CLUBS)
    {
        value_bottom_right.set_fill_color(sf::Color::Black);
        value_top_left.set_fill_color(sf::Color::Black);
    }
    else
    {
        value_bottom_right.set_fill_color(sf::Color::Red);
        value_top_left.set_fill_color(sf::Color::Red);
    }
    value_top_left.position_top_left();
    value_bottom_right.rotate();
    value_bottom_right.position_bottom_right();
    suit_center.center();
}

void complete_card::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    states.transform = background.getTransform();
    window.draw(background);
    window.draw(suit_center,states);
    window.draw(value_bottom_right, states);
    window.draw(value_top_left,states);
}

void complete_card::set_position(int x, int y)
{
    background.setPosition(x,y);
}

std::ostream& operator << (std::ostream& out, const complete_card& card)
{
 //switch statement
}