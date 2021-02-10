cmake_minimum_required( VERSION 3.7 )

project( sea-command CXX )

if ( UNIX )
    list( APPEND CXX_FLAGS -Wall -Wextra -Werror )
elseif( WIN32 )
    list( APPEND CXX_FLAGS /W4 /WX )
endif( )
add_subdirectory( src )