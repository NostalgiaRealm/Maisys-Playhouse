
/* ==== FUN_004303d0 @ 004303d0 ==== 
 * signature: undefined __thiscall FUN_004303d0(void * this, int param_1, int param_2)
 * body: 004303d0-004304b1
 */

void __thiscall FUN_004303d0(void *this,int param_1,int param_2)

{
  int iVar1;
  SIZE_T SVar2;
  HLOCAL pvVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x2a);
  if ((*(int *)((int)this + 0x42) <= param_1) && (0 < *(int *)((int)this + 0x42))) {
    *(undefined4 *)((int)this + 0x42) = 0;
  }
  iVar4 = *(int *)((int)this + 0x42);
  if ((((iVar4 <= iVar1) && (iVar4 = param_1, param_1 <= iVar1)) &&
      ((iVar4 = iVar1, param_1 == 0 ||
       (((param_1 < iVar1 && (*(int *)((int)this + 0x2e) == 1)) ||
        (param_1 + *(int *)((int)this + 0x2e) * 2 < iVar1)))))) &&
     ((param_2 != 0 ||
      (((*(byte *)((int)this + 0x48) & 2) == 0 && (param_1 < *(int *)((int)this + 0x26))))))) {
    if (param_1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x2e);
      if (*(int *)((int)this + 0x2e) <= param_1) {
        iVar4 = param_1;
      }
    }
  }
  if ((iVar4 != iVar1) || (*(int *)((int)this + 0x36) == 0)) {
    iVar1 = *(int *)((int)this + 0x2e);
    if ((1 < iVar1) && (iVar4 % iVar1 != 0)) {
      iVar4 = (iVar4 - iVar4 % iVar1) + iVar1;
    }
    SVar2 = *(int *)((int)this + 0x32) * iVar4;
    if ((iVar4 == 0) && ((*(byte *)((int)this + 0x48) & 1) != 0)) {
      if (*(HLOCAL *)((int)this + 0x36) != (HLOCAL)0x0) {
        FUN_0043f720(*(HLOCAL *)((int)this + 0x36));
      }
      *(undefined4 *)((int)this + 0x36) = 0;
    }
    else if (*(HLOCAL *)((int)this + 0x36) == (HLOCAL)0x0) {
      pvVar3 = FUN_0043f6f0(SVar2);
      *(HLOCAL *)((int)this + 0x36) = pvVar3;
    }
    else {
      FUN_0043f730(*(HLOCAL *)((int)this + 0x36),SVar2);
    }
    *(int *)((int)this + 0x2a) = iVar4;
  }
  *(int *)((int)this + 0x26) = param_1;
  return;
}


