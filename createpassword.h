#ifndef CREATEPASSWORD_H
#define CREATEPASSWORD_H

#include <string>
#include <random>
#include <ctime>

struct AllowedCharacters
{
    explicit AllowedCharacters( bool letters, bool numbers, bool specials )
        : letters( letters ), numbers( numbers ), specials( specials )
    {
    }

    bool letters;
    bool numbers;
    bool specials;
};

std::string createPassword( const AllowedCharacters& allowedCharacters, std::size_t length );

#endif // CREATEPASSWORD_H
