
/* ==== FUN_004b4055 @ 004b4055 ==== 
 * signature: undefined __thiscall FUN_004b4055(void * this, uint param_1)
 * body: 004b4055-004b4112
 */

void __thiscall FUN_004b4055(void *this,uint param_1)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  
  if (*(int *)((int)this + 8) == 0) {
    _Src = *(void **)((int)this + 0x24);
    if (*(void **)((int)this + 0x2c) < _Src) {
      _Size = *(int *)((int)this + 0x28) - (int)_Src;
      if (0 < (int)_Size) {
        FID_conflict__memcpy(*(void **)((int)this + 0x2c),_Src,_Size);
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x2c);
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) - _Size;
      }
      iVar2 = *(int *)((int)this + 0x1c) - _Size;
      iVar3 = *(int *)((int)this + 0x2c) + _Size;
      do {
        iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x3c))(iVar3,iVar2);
        iVar3 = iVar3 + iVar1;
        _Size = _Size + iVar1;
        iVar2 = iVar2 - iVar1;
        if ((iVar1 == 0) || (iVar2 == 0)) break;
      } while (_Size < param_1);
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x2c);
      *(size_t *)((int)this + 0x28) = *(int *)((int)this + 0x2c) + _Size;
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0x28);
    if (*(int *)((int)this + 0x24) != iVar2) {
      (**(code **)(**(int **)((int)this + 0x20) + 0x30))(*(int *)((int)this + 0x24) - iVar2,1);
    }
    (**(code **)(**(int **)((int)this + 0x20) + 0x58))
              (0,*(undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x2c),
               (int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x2c);
  }
  if ((uint)(*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) < param_1) {
    AfxThrowArchiveException(3,(char *)0x0);
  }
  return;
}


