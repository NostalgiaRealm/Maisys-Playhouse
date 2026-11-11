
/* ==== CArchive::ReadCount @ 004b4179 ==== 
 * signature: ulong __thiscall ReadCount(CArchive * this)
 * body: 004b4179-004b41db
 * note: Library Function - Single Match  public: unsigned long __thiscall CArchive::ReadCount(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: unsigned long __thiscall CArchive::ReadCount(void)
   
   Library: Visual Studio 1998 Release */

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  CArchive *pCVar1;
  ushort uVar2;
  ushort *puVar3;
  ulong uVar4;
  
  pCVar1 = this + 0x24;
  if (*(uint *)(this + 0x28) < *(int *)pCVar1 + 2U) {
    FUN_004b4055(this,(*(int *)pCVar1 - *(uint *)(this + 0x28)) + 2);
  }
  puVar3 = *(ushort **)pCVar1;
  uVar2 = *puVar3;
  *(ushort **)pCVar1 = puVar3 + 1;
  if (uVar2 == 0xffff) {
    if (*(ushort **)(this + 0x28) < puVar3 + 3) {
      FUN_004b4055(this,(int)(puVar3 + 1) + (4 - (int)*(ushort **)(this + 0x28)));
    }
    uVar4 = **(ulong **)pCVar1;
    *(ulong **)pCVar1 = *(ulong **)pCVar1 + 1;
  }
  else {
    uVar4 = (ulong)uVar2;
  }
  return uVar4;
}


