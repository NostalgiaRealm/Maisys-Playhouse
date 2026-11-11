
/* ==== CRuntimeClass::Store @ 004b3c12 ==== 
 * signature: void __thiscall Store(CRuntimeClass * this, CArchive * param_1)
 * body: 004b3c12-004b3c78
 * note: Library Function - Single Match  public: void __thiscall CRuntimeClass::Store(class CArchive &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CRuntimeClass::Store(class CArchive &)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CRuntimeClass::Store(CRuntimeClass *this,CArchive *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = lstrlenA(*(LPCSTR *)this);
  uVar1 = *(undefined2 *)(this + 8);
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
    CArchive::Flush(param_1);
  }
  **(undefined2 **)(param_1 + 0x24) = uVar1;
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar2 + 2;
  if (*(uint *)(param_1 + 0x28) < iVar2 + 4U) {
    CArchive::Flush(param_1);
  }
  **(undefined2 **)(param_1 + 0x24) = (short)uVar3;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
  CArchive::Write(param_1,*(void **)this,uVar3 & 0xffff);
  return;
}


