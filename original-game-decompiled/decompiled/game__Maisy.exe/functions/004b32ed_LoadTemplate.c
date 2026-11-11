
/* ==== CDocTemplate::LoadTemplate @ 004b32ed ==== 
 * signature: void __thiscall LoadTemplate(CDocTemplate * this)
 * body: 004b32ed-004b339e
 * note: Library Function - Single Match  public: virtual void __thiscall CDocTemplate::LoadTemplate(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocTemplate::LoadTemplate(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocTemplate::LoadTemplate(CDocTemplate *this)

{
  CDocTemplate *pCVar1;
  HINSTANCE pHVar2;
  int iVar3;
  HMENU pHVar4;
  HACCEL pHVar5;
  
  if (*(int *)(*(int *)(this + 0x60) + -8) == 0) {
    CString::LoadStringA((CString *)(this + 0x60),*(uint *)(this + 0x3c));
  }
  pCVar1 = this + 0x44;
  if ((*(int *)pCVar1 != 0) && (*(int *)(this + 0x2c) == 0)) {
    iVar3 = FUN_004bafca();
    pHVar2 = *(HINSTANCE *)(iVar3 + 0xc);
    pHVar4 = LoadMenuA(pHVar2,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HMENU *)(this + 0x2c) = pHVar4;
    pHVar5 = LoadAcceleratorsA(pHVar2,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HACCEL *)(this + 0x30) = pHVar5;
  }
  pCVar1 = this + 0x40;
  if ((*(int *)pCVar1 != 0) && (*(int *)(this + 0x34) == 0)) {
    iVar3 = FUN_004bafca();
    pHVar2 = *(HINSTANCE *)(iVar3 + 0xc);
    pHVar4 = LoadMenuA(pHVar2,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HMENU *)(this + 0x34) = pHVar4;
    pHVar5 = LoadAcceleratorsA(pHVar2,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HACCEL *)(this + 0x38) = pHVar5;
  }
  pCVar1 = this + 0x48;
  if ((*(int *)pCVar1 != 0) && (*(int *)(this + 0x24) == 0)) {
    iVar3 = FUN_004bafca();
    pHVar2 = *(HINSTANCE *)(iVar3 + 0xc);
    pHVar4 = LoadMenuA(pHVar2,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HMENU *)(this + 0x24) = pHVar4;
    pHVar5 = LoadAcceleratorsA(pHVar2,(LPCSTR)(uint)*(ushort *)pCVar1);
    *(HACCEL *)(this + 0x28) = pHVar5;
  }
  return;
}


