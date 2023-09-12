#ifndef NXMP_VOUT_H
#define NXMP_VOUT_H

#include <glad/glad.h>
#include "imgui.h"
#include "imgui_internal.h"
#include "logger.h"
#include "imgui_impl_sdl.h"

class CVOUT{
public:
	CVOUT();
	~CVOUT();
	
	
	void Create_Framebuffer(float w,float h);
	void Rescale_Framebuffer(float width, float height);
	
	void SetFullScreen(bool fullscreen);
	
	
	void Draw();
	void Resize(float w,float h);
	
	
	GLuint mpv_fbo;
	GLuint mpv_fbotexture;
	GLuint mpv_rbo;
	
	float width=0.0f;
	float height=0.0f;
	
	float windowed_width=200.0f;
	float windowed_height=112.0f;
	
	
	ImVec2 fullscreen_videopos = ImVec2(0,0);
	ImVec2 windowed_videopos = ImVec2(1000.0f,500.0f);
	
	
	
	bool fullscreen = true;
	
	bool changevis = true;
	
};


#endif