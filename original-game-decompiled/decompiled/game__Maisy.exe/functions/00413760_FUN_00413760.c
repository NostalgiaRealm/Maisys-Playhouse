
/* ==== FUN_00413760 @ 00413760 ==== 
 * signature: uint __thiscall FUN_00413760(void * this, short param_1, undefined * param_2, undefined4 param_3)
 * body: 00413760-00413785
 */

uint __thiscall FUN_00413760(void *this,short param_1,undefined *param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(void **)((int)this + 0x12) != (void *)0x0) {
    uVar1 = FUN_00413b00(*(void **)((int)this + 0x12),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


