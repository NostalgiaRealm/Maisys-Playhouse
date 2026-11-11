
/* ==== AFX_CLASSINIT::AFX_CLASSINIT @ 004ac4a5 ==== 
 * signature: undefined __thiscall AFX_CLASSINIT(AFX_CLASSINIT * this, CRuntimeClass * param_1)
 * body: 004ac4a5-004ac4d0
 * note: Library Function - Single Match  public: __thiscall AFX_CLASSINIT::AFX_CLASSINIT(struct CRuntimeClass *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall AFX_CLASSINIT::AFX_CLASSINIT(struct CRuntimeClass *)
   
   Library: Visual Studio 1998 Release */

AFX_CLASSINIT * __thiscall AFX_CLASSINIT::AFX_CLASSINIT(AFX_CLASSINIT *this,CRuntimeClass *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  AfxLockGlobals(0);
  CSimpleList::AddHead((CSimpleList *)(iVar1 + 0x1c),param_1);
  AfxUnlockGlobals(0);
  return this;
}


