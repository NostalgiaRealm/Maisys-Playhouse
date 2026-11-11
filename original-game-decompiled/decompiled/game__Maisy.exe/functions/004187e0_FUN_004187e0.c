
/* ==== FUN_004187e0 @ 004187e0 ==== 
 * signature: undefined __thiscall FUN_004187e0(void * this, undefined4 * param_1)
 * body: 004187e0-00418801
 */

void __thiscall FUN_004187e0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0xb6);
  *param_1 = *(undefined4 *)((int)this + 0xb2);
  param_1[1] = uVar1;
  return;
}


