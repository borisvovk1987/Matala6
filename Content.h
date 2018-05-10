#ifndef CONTENT_H
#define CONTENT_H

#include"IllegalCharException.h"

#include<iostream>

class Content
{
    char m_content;

public:
    Content();
    Content(const Content& other);

    friend std::ostream& operator<<(std::ostream &out,const Content &other);
    Content& operator=(char content);
    Content& operator=(const Content& content);
    operator char();


};

#endif
