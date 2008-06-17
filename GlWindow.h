#ifndef __GLWINDOW_H__
#define __GLWINDOW_H__


#include "Core.h"


void VisualizerLoop(const char *caption);
void AppDrawFrame();
void AppKeyEvent(int key);
void AppDisplayTexts(bool helpVisible);


namespace GL
{
	void text(const char *text);
	void textf(const char *fmt, ...);
	void SetDistScale(float scale);
	void SetViewOffset(const CVec3 &offset);
	void ResetView();

	extern bool invertXAxis;
};

void DrawTextLeft(const char *text, ...);
void DrawTextRight(const char *text, ...);
void DrawText3D(const CVec3 &pos, const char *text, ...);
void FlushTexts();


#define SPEC_KEY(x)		(SDLK_##x)
#define KEY_CTRL		0x80000000
#define KEY_SHIFT		0x40000000
#define KEY_ALT			0x20000000


#endif // __GLWINDOW_H__
