#include "BitcoinExchange.hpp"



int main (int ac, char **av)
{
    BitcoinExchange exchange;
    exchange.set_Map();
    exchange.get_input_Content(ac, av);
    exchange.BitcPrice();
}