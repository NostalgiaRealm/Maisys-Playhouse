
/* ==== FUN_00448e00 @ 00448e00 ==== 
 * signature: uint __thiscall FUN_00448e00(void * this, undefined4 * param_1)
 * body: 00448e00-00448e31
 */

uint __thiscall FUN_00448e00(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint in_EAX;
  
  if (*(char *)((int)this + 0xf2) != '\0') {
    uVar1 = *(undefined4 *)((int)this + 0xf8);
    *param_1 = *(undefined4 *)((int)this + 0xf4);
    param_1[1] = uVar1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


