
/* ==== CArchive::Write @ 004b3f4e ==== 
 * signature: void __thiscall Write(CArchive * this, void * param_1, uint param_2)
 * body: 004b3f4e-004b3fd9
 * note: Library Function - Single Match  public: void __thiscall CArchive::Write(void const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CArchive::Write(void const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
  uint _Size;
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    _Size = *(int *)(this + 0x28) - (int)*(void **)(this + 0x24);
    if (param_2 <= _Size) {
      _Size = param_2;
    }
    FID_conflict__memcpy(*(void **)(this + 0x24),param_1,_Size);
    *(uint *)(this + 0x24) = *(int *)(this + 0x24) + _Size;
    uVar2 = param_2 - _Size;
    if (uVar2 != 0) {
      Flush(this);
      iVar1 = uVar2 - uVar2 % *(uint *)(this + 0x1c);
      (**(code **)(**(int **)(this + 0x20) + 0x40))((int)param_1 + _Size,iVar1);
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 0x20) + 0x58))
                  (1,*(undefined4 *)(this + 0x1c),this + 0x2c,this + 0x28);
        *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x2c);
      }
      FID_conflict__memcpy
                (*(void **)(this + 0x24),(void *)((int)param_1 + _Size + iVar1),uVar2 - iVar1);
      *(uint *)(this + 0x24) = *(int *)(this + 0x24) + (uVar2 - iVar1);
    }
  }
  return;
}


