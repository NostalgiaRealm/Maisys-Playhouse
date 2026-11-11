
/* ==== CRuntimeClass::CreateObject @ 004ac434 ==== 
 * signature: CObject * __thiscall CreateObject(CRuntimeClass * this)
 * body: 004ac434-004ac479
 * note: Library Function - Single Match  public: class CObject * __thiscall CRuntimeClass::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CObject * __thiscall CRuntimeClass::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CObject * __thiscall CRuntimeClass::CreateObject(CRuntimeClass *this)

{
  code *pcVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  pcVar1 = *(code **)(extraout_ECX + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (pcVar1 == (code *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = (*pcVar1)();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pCVar2 = *(CObject **)(unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar2;
}


