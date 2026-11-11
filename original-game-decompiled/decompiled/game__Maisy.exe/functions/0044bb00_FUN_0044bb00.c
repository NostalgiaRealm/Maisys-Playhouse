
/* ==== FUN_0044bb00 @ 0044bb00 ==== 
 * signature: undefined4 __thiscall FUN_0044bb00(void * this, char param_1)
 * body: 0044bb00-0044bb3a
 */

undefined4 __thiscall FUN_0044bb00(void *this,char param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  HWND pHVar3;
  
  if ((*(int *)((int)this + 0x7e) == 0) && (param_1 != '\0')) {
    iVar1 = FUN_0041ed90((int)this);
    uVar2 = FUN_00408550(iVar1);
    this_00 = (void *)(**(code **)(*(int *)this + 0x244))();
    pHVar3 = FUN_00474f90(this_00,uVar2);
    *(HWND *)((int)this + 0x7e) = pHVar3;
  }
  return *(undefined4 *)((int)this + 0x7e);
}


