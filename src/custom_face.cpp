// custom_face.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "custom_face.h"


CUSTOM_FACE_API int __cdecl custom_face_detect(void * pBits, int w, int h, int bpp, RECT * pFaces,int *pID, int nMax, int wMin, int wMax)
{
	if (pFaces && nMax >= 1)
	{
		int r = min(w, h) / 6;
		pFaces[0].left = w / 2 - r;
		pFaces[0].right = w / 2 + r;
		pFaces[0].top = h / 2 - r;
		pFaces[0].bottom = h / 2 + r;
	}
	if (pID && nMax >= 1) {
		pID[0] = 12345;
	}
    return 1;
}


