
/* ==== CMultiDocTemplate::LoadTemplate @ 004af643 ==== 
 * signature: void __thiscall LoadTemplate(CMultiDocTemplate * this)
 * body: 004af643-004af682
 * note: Library Function - Single Match  public: virtual void __thiscall CMultiDocTemplate::LoadTemplate(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMultiDocTemplate::LoadTemplate(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMultiDocTemplate::LoadTemplate(CMultiDocTemplate *this)

{
  CMultiDocTemplate *pCVar1;
  HINSTANCE hInstance;
  int iVar2;
  HMENU pHVar3;
  HACCEL pHVar4;
  
  pCVar1 = this + 0x3c;
  CDocTemplate::LoadTemplate((CDocTemplate *)this);
  if ((*(int *)pCVar1 != 0) && (*(int *)(this + 100) == 0)) {
    iVar2 = FUN_004bafca();
    hInstance = *(HINSTANCE *)(iVar2 + 0xc);
    pHVar3 = LoadMenuA(hInstance,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HMENU *)(this + 100) = pHVar3;
    pHVar4 = LoadAcceleratorsA(hInstance,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HACCEL *)(this + 0x68) = pHVar4;
  }
  return;
}


