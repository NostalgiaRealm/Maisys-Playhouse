
/* ==== FUN_004414c0 @ 004414c0 ==== 
 * signature: undefined4 __thiscall FUN_004414c0(void * this, int param_1)
 * body: 004414c0-0044152c
 */

undefined4 __thiscall FUN_004414c0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0043fd60((int)this);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0x7e) != 0) {
      uVar2 = FUN_0048d0e8();
    }
  }
  else {
    FUN_0043fd60((int)this);
    uVar2 = FUN_0048d402();
    if ((param_1 != 0) && (*(int *)((int)this + 0x7e) != 0)) {
      FUN_0048d0e8();
      return uVar2;
    }
  }
  return uVar2;
}


