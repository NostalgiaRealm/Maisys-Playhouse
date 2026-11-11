
/* ==== Attach @ 004b21f3 ==== 
 * signature: bool __thiscall Attach(void * this, void * param_1)
 * body: 004b21f3-004b2224
 * note: Library Function - Multiple Matches With Same Base Name  public: int __thiscall CGdiObject::Attach(void *)  public: int __thiscall CImageList::Attach(struct _IMAGELIST *)  public: int __thiscall CMenu::Attach(struct HMENU__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CGdiObject::Attach(void *)
    public: int __thiscall CImageList::Attach(struct _IMAGELIST *)
    public: int __thiscall CMenu::Attach(struct HMENU__ *)
   
   Library: Visual Studio 1998 Release */

bool __thiscall Attach(void *this,void *param_1)

{
  CHandleMap *this_00;
  CAssoc *pCVar1;
  
  if (param_1 != (void *)0x0) {
    this_00 = afxMapHIMAGELIST(1);
    *(void **)((int)this + 4) = param_1;
    pCVar1 = FUN_004a5ab8(this_00,param_1);
    *(void **)pCVar1 = this;
  }
  return param_1 != (void *)0x0;
}


