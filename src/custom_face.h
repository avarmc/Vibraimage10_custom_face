
#ifdef CUSTOM_FACE_EXPORTS
#define CUSTOM_FACE_API __declspec(dllexport)
#else
#define CUSTOM_FACE_API __declspec(dllimport)
#endif

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// custom_face_detect
// pBits - pointer to image data (w,h,bpp)
// w - image width
// h - image height
// bpp - image bit count
// pFaces - pointer to output face storage
// pFaces - pointer to output face ID
// nMax - max pFaces capacity
// wMin - min face size (from settings)
// wMax - max face size (from settings)
///////////////////////////////////////////////////////////////
// returns face count
///////////////////////////////////////////////////////////////
CUSTOM_FACE_API int __cdecl custom_face_detect(void * pBits, int w, int h, int bpp, RECT * pFaces, int* pID, int nMax,int wMin,int wMax);
