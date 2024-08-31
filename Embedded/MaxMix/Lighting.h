#pragma once

#include "Config.h"
#include "src/Adafruit_NeoPixel/Adafruit_NeoPixel.h"

namespace Lighting
{
    void Initialize(void);
    void UpdateLighting();
    void LightingVolume(SessionData *item, Color *c1, Color *c2);
    void LightingBlackOut();
    void LightingCircularFunk();
    Color LerpColor(Color *c1, Color *c2, uint8_t coeff);
}; // namespace Lighting