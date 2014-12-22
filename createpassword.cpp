#include "createpassword.h"

std::string createPassword( const AllowedCharacters& allowedCharacters, std::size_t length )
{
    std::string password;
    if( !allowedCharacters.letters &&
        !allowedCharacters.numbers &&
        !allowedCharacters.specials ) //nothing allowed
    {
        return password;
    }

    std::mt19937 rng;
    rng.seed( time( nullptr ) );

    while( password.length() != length )
    {
        std::uniform_int_distribution< int32_t > distForChoice( 1, 4 );

        auto choice( distForChoice( rng ) );

        if ( choice == 1 && allowedCharacters.letters ) //small letters
        {
            std::uniform_int_distribution< int32_t > distForSmallLetters( 97, 122 );
            password += static_cast< char >( distForSmallLetters( rng ) );
        }
        if ( choice == 2 && allowedCharacters.letters ) //big letters
        {
            std::uniform_int_distribution< int32_t > distForBigLetters( 65, 90 );
            password += static_cast< char >( distForBigLetters( rng ) );
        }
        if ( choice == 3 && allowedCharacters.numbers ) //numbers 0-9
        {
            std::uniform_int_distribution< int32_t > distForNumbers( 0, 9 );
            password += std::to_string( distForNumbers( rng ) );
        }
        if ( choice == 4 && allowedCharacters.specials ) //special characters
        {
            std::uniform_int_distribution< int32_t > distForSpecialCharacters( 1, 5 );
            auto specialCharactersChoice( distForSpecialCharacters( rng ) );

            if( specialCharactersChoice == 1 )
            {
                password += '!';
            }
            if( specialCharactersChoice == 2 )
            {
                password += '?';
            }
            if( specialCharactersChoice == 3 )
            {
                password += '#';
            }
            if( specialCharactersChoice == 4 )
            {
                password += '$';
            }
            if( specialCharactersChoice == 5 )
            {
                password += '&';
            }
        }
    }

    return password;
}
