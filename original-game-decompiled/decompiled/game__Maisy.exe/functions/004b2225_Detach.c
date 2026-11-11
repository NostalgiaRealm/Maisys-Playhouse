
/* ==== CImageList::Detach @ 004b2225 ==== 
 * signature: _IMAGELIST * __thiscall Detach(CImageList * this)
 * body: 004b2225-004b2251
 * note: Library Function - Single Match  public: struct _IMAGELIST * __thiscall CImageList::Detach(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct _IMAGELIST * __thiscall CImageList::Detach(void)
   
   Library: Visual Studio 1998 Release */

_IMAGELIST * __thiscall CImageList::Detach(CImageList *this)

{
  CImageList *pCVar1;
  _IMAGELIST *p_Var2;
  CHandleMap *this_00;
  
  pCVar1 = this + 4;
  p_Var2 = *(_IMAGELIST **)pCVar1;
  if (p_Var2 != (_IMAGELIST *)0x0) {
    this_00 = afxMapHIMAGELIST(0);
    if (this_00 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)this_00,*(void **)pCVar1);
    }
  }
  *(int *)pCVar1 = 0;
  return p_Var2;
}


