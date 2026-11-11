
/* ==== FUN_00448b70 @ 00448b70 ==== 
 * signature: uint __thiscall FUN_00448b70(void * this, int param_1, short * param_2, undefined4 param_3, int param_4)
 * body: 00448b70-00448b9a
 */

uint __thiscall FUN_00448b70(void *this,int param_1,short *param_2,undefined4 param_3,int param_4)

{
  undefined4 in_EAX;
  uint uVar1;
  
  if (*(char *)((int)this + 0x17d) == '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar1 = FUN_0041e430(this,param_1,param_2,param_3,param_4);
  return uVar1;
}


