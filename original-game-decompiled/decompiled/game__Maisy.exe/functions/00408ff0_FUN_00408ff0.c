
/* ==== FUN_00408ff0 @ 00408ff0 ==== 
 * signature: undefined __thiscall FUN_00408ff0(void * this, undefined4 * param_1)
 * body: 00408ff0-00409011
 */

void __thiscall FUN_00408ff0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0xd6);
  *param_1 = *(undefined4 *)((int)this + 0xd2);
  param_1[1] = uVar1;
  return;
}


