
/* ==== FUN_0044e610 @ 0044e610 ==== 
 * signature: undefined4 __thiscall FUN_0044e610(void * this, int param_1)
 * body: 0044e610-0044e649
 */

undefined4 __thiscall FUN_0044e610(void *this,int param_1)

{
  undefined4 local_20 [6];
  byte local_8;
  
  FUN_00430370(*(void **)((int)this + 0x30),param_1,local_20);
  local_8 = local_8 | 1;
  FUN_0042ff10(*(void **)((int)this + 0x30),param_1,local_20);
  return local_20[0];
}


