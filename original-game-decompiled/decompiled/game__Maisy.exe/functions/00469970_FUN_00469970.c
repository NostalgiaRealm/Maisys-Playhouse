
/* ==== FUN_00469970 @ 00469970 ==== 
 * signature: undefined __thiscall FUN_00469970(void * this, undefined4 * param_1)
 * body: 00469970-00469991
 */

void __thiscall FUN_00469970(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x8a);
  *param_1 = *(undefined4 *)((int)this + 0x86);
  param_1[1] = uVar1;
  return;
}


