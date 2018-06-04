#ifndef BUILDING_HPP
#define BUILDING_HPP

class Building{
public:
    Building(void);
    void setWidth(unsigned);
    unsigned getWidth(void);
    void setHeight(unsigned);
    unsigned getHeight(void);
    void setBLevel(unsigned);
    unsigned getBLevel(void);
    void setDestroyed(unsigned);
    unsigned getDestroyed(void);

private:
    unsigned width;
    unsigned height;
    unsigned bLevel;
    bool destroyed;
};
#endif
