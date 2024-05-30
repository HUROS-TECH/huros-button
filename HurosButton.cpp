#include "HurosButton.h"

HurosButton::HurosButton()
{
}

HurosButton::~HurosButton()
{
}

void HurosButton::Init(int pin, uint8_t mode)
{
	m_pin = pin;
	pinMode(m_pin, mode);
}

void HurosButton::Run()
{
	m_val = NORMAL;
	bool btn = digitalRead(m_pin) ? false : true;

	if(btn != m_prev)
	{
		if(btn)
		{
			m_val = PRESSED;
		}
		else
		{
			m_val = RELEASE;
		}

		m_prev = btn;
	}

}

bool HurosButton::IsPressed()
{
	return m_val == PRESSED ? true : false;
}

bool HurosButton::IsRelease()
{
	return m_val == RELEASE ? true : false;
}

