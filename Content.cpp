#include"Content.h"

Content::Content()
{
    m_content='.';
}
Content::Content(const Content &other)
{
    m_content=other.m_content;
}


std::ostream& operator<<(std::ostream &out,const Content &other)
{
   return  out<<other.m_content;
}



Content& Content::operator=(char content)
{

        if(content!='X' && content !='O' && content!='.')
            throw IllegalCharException(content);
        m_content=content;
        return *this;


    return *this;
}

Content::operator char()
{
    return m_content;
}



Content& Content::operator=( const Content& other)
{
    if(this==&other)
        return *this;
    m_content=other.m_content;
    return *this;
}

