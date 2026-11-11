
/* ==== FUN_00441e20 @ 00441e20 ==== 
 * signature: undefined __thiscall FUN_00441e20(void * this, undefined4 * param_1)
 * body: 00441e20-00441e80
 */

void __thiscall FUN_00441e20(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = FUN_0043fd60((int)this);
  if (iVar1 != 0) {
    FUN_0043fd60((int)this);
    iVar1 = FUN_0048d44a();
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x298))(local_14);
      local_8 = CONCAT22(0x12,(undefined2)local_8);
    }
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}


