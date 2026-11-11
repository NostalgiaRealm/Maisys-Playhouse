
/* ==== FUN_00469950 @ 00469950 ==== 
 * signature: undefined __thiscall FUN_00469950(void * this, undefined4 * param_1)
 * body: 00469950-00469967
 */

void __thiscall FUN_00469950(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x7e) = *param_1;
  *(undefined4 *)((int)this + 0x82) = uVar1;
  return;
}


