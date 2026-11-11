
/* ==== CImageList::DeleteImageList @ 004ac758 ==== 
 * signature: int __thiscall DeleteImageList(CImageList * this)
 * body: 004ac758-004ac76f
 * note: Library Function - Single Match  public: int __thiscall CImageList::DeleteImageList(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CImageList::DeleteImageList(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CImageList::DeleteImageList(CImageList *this)

{
  int iVar1;
  _IMAGELIST *hMenu;
  
  iVar1 = 0;
  if (*(int *)(this + 4) != 0) {
    hMenu = Detach(this);
    iVar1 = DestroyMenu((HMENU)hMenu);
  }
  return iVar1;
}


