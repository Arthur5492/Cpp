#ifndef CANDYBOX_HPP
#define CANDYBOX_HPP


#include "box.hpp"

class CandyBox : public Box
{
private:

protected:
    string m_content;

public:
    CandyBox();

    ~CandyBox
};

#endif
