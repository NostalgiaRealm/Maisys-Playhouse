
/* ==== CArchive::Flush @ 004b3fda ==== 
 * signature: void __thiscall Flush(CArchive * this)
 * body: 004b3fda-004b4054
 * note: Library Function - Single Match  public: void __thiscall CArchive::Flush(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CArchive::Flush(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CArchive::Flush(CArchive *this)

{
  CArchive *pCVar1;
  CArchive *pCVar2;
  int iVar3;
  
  if (((byte)this[0x14] & 1) == 0) {
    pCVar1 = this + 0x2c;
    iVar3 = *(int *)pCVar1;
    if ((iVar3 == 0) || (*(int *)(this + 0x24) != iVar3)) {
      pCVar2 = this + 0x24;
      if (*(int *)(this + 8) == 0) {
        (**(code **)(**(int **)(this + 0x20) + 0x40))(iVar3,*(int *)pCVar2 - iVar3);
      }
      else {
        (**(code **)(**(int **)(this + 0x20) + 0x58))(2,*(int *)pCVar2 - iVar3,0,0);
        (**(code **)(**(int **)(this + 0x20) + 0x58))
                  (1,*(undefined4 *)(this + 0x1c),pCVar1,this + 0x28);
      }
      *(int *)pCVar2 = *(int *)pCVar1;
    }
  }
  else {
    if (*(int *)(this + 0x24) != *(int *)(this + 0x28)) {
      (**(code **)(**(int **)(this + 0x20) + 0x30))(*(int *)(this + 0x24) - *(int *)(this + 0x28),1)
      ;
    }
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x28);
  }
  return;
}


