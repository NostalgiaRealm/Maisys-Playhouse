
/* ==== CString::LoadStringA @ 004ac4ee ==== 
 * signature: int __thiscall LoadStringA(CString * this, uint param_1)
 * body: 004ac4ee-004ac574
 * note: Library Function - Single Match  public: int __thiscall CString::LoadStringA(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CString::LoadStringA(unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_104 [256];
  
  iVar1 = AfxLoadString(param_1,local_104,0x100);
  if (0x100U - iVar1 < 3) {
    uVar3 = 0x100;
    do {
      iVar1 = uVar3 + 0xff;
      uVar3 = uVar3 + 0x100;
      uVar4 = uVar3;
      pcVar2 = (char *)FUN_004ac16a(this,iVar1);
      iVar1 = AfxLoadString(param_1,pcVar2,uVar4);
    } while ((int)(uVar3 - iVar1) < 3);
    ReleaseBuffer(this,-1);
  }
  else {
    operator=(this,local_104);
  }
  return (uint)(0 < iVar1);
}


