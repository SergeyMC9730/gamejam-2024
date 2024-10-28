#pragma once

#include <raylib.h>

#ifdef __cplusplus
extern "C" {
#endif

struct ftilemap;

#include "ftext.h"

struct connections_state {
    struct ftilemap *tilemap;
    RenderTexture2D framebuffer;

    int intro_stage;
};

extern struct connections_state __state;

#ifdef __cplusplus
}
#endif