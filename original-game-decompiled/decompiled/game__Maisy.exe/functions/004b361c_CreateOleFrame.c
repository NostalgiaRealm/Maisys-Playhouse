
/* ==== CDocTemplate::CreateOleFrame @ 004b361c ==== 
 * signature: CFrameWnd * __thiscall CreateOleFrame(CDocTemplate * this, CWnd * param_1, CDocument * param_2, int param_3)
 * body: 004b361c-004b369f
 * note: Library Function - Single Match  public: class CFrameWnd * __thiscall CDocTemplate::CreateOleFrame(class CWnd *,class CDocument *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CDocTemplate::CreateOleFrame(class CWnd *,class CDocument
   *,int)
   
   Library: Visual Studio 1998 Release */

CFrameWnd * __thiscall
CDocTemplate::CreateOleFrame(CDocTemplate *this,CWnd *param_1,CDocument *param_2,int param_3)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  int iVar3;
  undefined4 local_18;
  CDocument *local_14;
  CDocTemplate *local_10;
  undefined4 local_8;
  
  _memset(&local_18,0,0x14);
  local_8 = 0;
  local_14 = param_2;
  if (param_3 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(this + 0x5c);
  }
  if (*(CRuntimeClass **)(this + 0x58) == (CRuntimeClass *)0x0) {
    pCVar1 = (CFrameWnd *)0x0;
  }
  else {
    local_10 = this;
    pCVar2 = CRuntimeClass::CreateObject(*(CRuntimeClass **)(this + 0x58));
    pCVar1 = (CFrameWnd *)0x0;
    if (pCVar2 != (CObject *)0x0) {
      iVar3 = (**(code **)(*(int *)pCVar2 + 0xbc))
                        (*(undefined4 *)(this + 0x40),0x44000000,param_1,&local_18);
      pCVar1 = (CFrameWnd *)((iVar3 == 0) - 1 & (uint)pCVar2);
    }
  }
  return pCVar1;
}


