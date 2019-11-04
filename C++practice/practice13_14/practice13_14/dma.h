// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// Base Class Using DMA
class  baseDMA
{
private:
	char * label;
	int rating;

public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);     //复制构造函数
	virtual ~ baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};


// derived class without DMA
// no destuctor needed 
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public baseDMA
{
private:
	enum {COL_LEN = 40};
	char color[COL_LEN];

public:
	lacksDMA(const char * c = "blank", const char *l = "null", int r = 0);
	lacksDMA(const char * c, const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA & ls);  // 需要重点注意一下
};


// derived class with DMA
class hasDMA : public baseDMA
{
private:
	char * style;

public:
	hasDMA(const char * s = "none", const char *l = "null", int r = 0);
	hasDMA(const char * s, const baseDMA & rs);
	hasDMA(const hasDMA &  hs);  // 复制构造函数
	~hasDMA();
	hasDMA & operator=(const hasDMA & hs);
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & hs);
};

#endif