
/* ==== CDocTemplate::CreateNewFrame @ 004b35a5 ==== 
 * signature: CFrameWnd * __thiscall CreateNewFrame(CDocTemplate * this, CDocument * param_1, CFrameWnd * param_2)
 * body: 004b35a5-004b361b
 * note: Library Function - Single Match  public: virtual class CFrameWnd * __thiscall CDocTemplate::CreateNewFrame(class CDocument *,class CFrameWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CFrameWnd * __thiscall CDocTemplate::CreateNewFrame(class CDocument
   *,class CFrameWnd *)
   
   Library: Visual Studio 1998 Release */

CFrameWnd * __thiscall
CDocTemplate::CreateNewFrame(CDocTemplate *this,CDocument *param_1,CFrameWnd *param_2)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  int iVar3;
  undefined4 local_18;
  CDocument *local_14;
  CDocTemplate *local_10;
  CFrameWnd *local_8;
  
  _memset(&local_18,0,0x14);
  local_18 = *(undefined4 *)(this + 0x54);
  local_8 = param_2;
  local_14 = param_1;
  if (*(CRuntimeClass **)(this + 0x50) == (CRuntimeClass *)0x0) {
    pCVar1 = (CFrameWnd *)0x0;
  }
  else {
    local_10 = this;
    pCVar2 = CRuntimeClass::CreateObject(*(CRuntimeClass **)(this + 0x50));
    pCVar1 = (CFrameWnd *)0x0;
    if (pCVar2 != (CObject *)0x0) {
      iVar3 = (**(code **)(*(int *)pCVar2 + 0xbc))
                        (*(undefined4 *)(this + 0x3c),0xcf8000,0,&local_18);
      pCVar1 = (CFrameWnd *)((iVar3 == 0) - 1 & (uint)pCVar2);
    }
  }
  return pCVar1;
}


