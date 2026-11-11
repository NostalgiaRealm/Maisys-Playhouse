
/* ==== CArchive::WriteCount @ 004b4113 ==== 
 * signature: void __thiscall WriteCount(CArchive * this, ulong param_1)
 * body: 004b4113-004b4178
 * note: Library Function - Single Match  public: void __thiscall CArchive::WriteCount(unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CArchive::WriteCount(unsigned long)
   
   Library: Visual Studio 1998 Release */

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
  CArchive *pCVar1;
  int iVar2;
  
  pCVar1 = this + 0x24;
  if (param_1 < 0xffff) {
    if (*(uint *)(this + 0x28) < *(int *)pCVar1 + 2U) {
      Flush(this);
    }
    **(undefined2 **)pCVar1 = (short)param_1;
    *(int *)pCVar1 = *(int *)pCVar1 + 2;
  }
  else {
    if (*(uint *)(this + 0x28) < *(int *)pCVar1 + 2U) {
      Flush(this);
    }
    **(undefined2 **)pCVar1 = 0xffff;
    iVar2 = *(int *)pCVar1;
    *(int *)pCVar1 = iVar2 + 2;
    if (*(uint *)(this + 0x28) < iVar2 + 6U) {
      Flush(this);
    }
    **(ulong **)pCVar1 = param_1;
    *(int *)pCVar1 = *(int *)pCVar1 + 4;
  }
  return;
}


