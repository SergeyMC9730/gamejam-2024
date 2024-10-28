#pragma once

#include "intvec.h"
#include <raylib.h>

#ifdef __cplusplus
extern "C" {
#endif

struct ftilemap {
    IVector2 tile_size;
    Texture2D texture;
};

void _fTilemapDraw(struct ftilemap tilemap, IVector2 render_pos, IVector2 tile_pos, unsigned char fliped_x, unsigned char fliped_y, Color tint);
void _fTilemapDrawMegatile(struct ftilemap tilemap, IVector2 render_pos, IVector2 start_pos, IVector2 tiles, unsigned char fliped_x, unsigned char fliped_y, Color tint);

struct ftilemap _fTilemapCreate(const char *path, IVector2 tile_size);
void _fTilemapUnload(struct ftilemap tilemap);

Texture2D _fTilemapExportTile(struct ftilemap tilemap, IVector2 tile_pos);
Rectangle _fTilemapGetTileRect(struct ftilemap tilemap, IVector2 tile_pos);

#ifdef __cplusplus
}
#endif
