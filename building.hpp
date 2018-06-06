#ifndef BUILDING_HPP
#define BUILDING_HPP

class Building{
public:
    Building(void);
    void setWidth(unsigned);
    unsigned getWidth(void);
    void setHeight(unsigned);
    unsigned getHeight(void);
    void setLevel(unsigned);
	//decrease level by given value
	void decrLevel(unsigned);
    unsigned getLevel(void);
    void setDestroyed(bool);
    unsigned getDestroyed(void);

private:
    unsigned width;
    unsigned height;
    unsigned level;
    bool destroyed;
};
#endif
