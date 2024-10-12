/* 
 * Copyright HUROS TECH
 * Maintenance Danmirror
 * Year 2024
 * 
*/


#ifndef HUROS_BUTTON_H
#define HUROS_BUTTON_H
#include "Arduino.h"

class HurosButton
{
private:
	int m_pin;
	int m_prev;
	int m_val;
	
	enum
	{
		NORMAL=0,
		PRESSED=1,
		RELEASE=2,
	};
	
public:
	HurosButton();
	~HurosButton();
	void Init(int pin, uint8_t mode);
	bool IsPressed();
	bool IsRelease();
	void Run();
};

#endif 
