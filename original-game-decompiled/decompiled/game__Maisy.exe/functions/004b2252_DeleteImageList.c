
/* ==== CImageList::DeleteImageList @ 004b2252 ==== 
 * signature: int __thiscall DeleteImageList(CImageList * this)
 * body: 004b2252-004b2269
 * note: Library Function - Single Match  public: int __thiscall CImageList::DeleteImageList(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CImageList::DeleteImageList(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CImageList::DeleteImageList(CImageList *this)

{
  int iVar1;
  _IMAGELIST *ho;
  
  iVar1 = 0;
  if (*(int *)(this + 4) != 0) {
    ho = Detach(this);
    iVar1 = DeleteObject(ho);
  }
  return iVar1;
}


