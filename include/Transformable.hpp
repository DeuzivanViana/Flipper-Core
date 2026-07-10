#ifndef TRANSFORMABLE_HPP
#define TRANSFORMABLE_HPP

#include <Arduino.h>

class Transformable
{
public:
	Transformable() noexcept;

	void setX(const uint8_t) noexcept;
	void setY(const uint8_t) noexcept;
	const uint8_t &getX() const noexcept;
	const uint8_t &getY() const noexcept;

	virtual ~Transformable() noexcept;
	
private:
	uint8_t __x, __y;
};

#endif
