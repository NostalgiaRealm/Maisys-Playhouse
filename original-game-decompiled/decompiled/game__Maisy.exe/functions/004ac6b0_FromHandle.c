
/* ==== FromHandle @ 004ac6b0 ==== 
 * signature: undefined __stdcall FromHandle(void * param_1)
 * body: 004ac6b0-004ac6c7
 * note: Library Function - Multiple Matches With Same Base Name  public: static class CDC * __stdcall CDC::FromHandle(struct HDC__ *)  public: static class CGdiObject * __stdcall CGdiObject::FromHandle(void *)  public: static class CImageList * __stdcall CImageList::FromHandle(struct _IMAGELIST *)  public: static class CMenu * __stdcall CMenu::FromHandle(struct HMENU__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CDC * __stdcall CDC::FromHandle(struct HDC__ *)
    public: static class CGdiObject * __stdcall CGdiObject::FromHandle(void *)
    public: static class CImageList * __stdcall CImageList::FromHandle(struct _IMAGELIST *)
    public: static class CMenu * __stdcall CMenu::FromHandle(struct HMENU__ *)
   
   Library: Visual Studio 1998 Release */

void FromHandle(void *param_1)

{
  CHandleMap *this;
  
  this = afxMapHIMAGELIST(1);
  FUN_004ae7e2(this,param_1);
  return;
}


