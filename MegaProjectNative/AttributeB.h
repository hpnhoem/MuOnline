#pragma once
#include "stdafx.h"
#include "AAttribute.h"

enum AttributeEncoding;
namespace Game
{
class AttributeB : public AAttribute
{
public:
	AttributeB(int id, int defaultValue, int u3, int u4, int u5, string scriptA, string scriptB, string name, AttributeEncoding encodingType, byte u10, int min, int max, int bitCount);
	~AttributeB(void);
};
}