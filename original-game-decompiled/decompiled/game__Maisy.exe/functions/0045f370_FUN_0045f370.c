
/* ==== FUN_0045f370 @ 0045f370 ==== 
 * signature: undefined __thiscall FUN_0045f370(void * this, tagCREATESTRUCTA * param_1)
 * body: 0045f370-0045f3dd
 */

void __thiscall FUN_0045f370(void *this,tagCREATESTRUCTA *param_1)

{
  uint uVar1;
  
  if (*(int *)(DAT_004d99a8 + 0xd0) == 0) {
    uVar1 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffdff;
    *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffcff;
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar1 & 0xff3fffff;
    *(uint *)(param_1 + 0x20) = uVar1 & 0xff3fffff;
    *(uint *)(param_1 + 0x20) = uVar1 & 0xff3effff;
    *(uint *)(param_1 + 0x20) = uVar1 & 0xff3cffff;
    *(uint *)(param_1 + 0x20) = uVar1 & 0xff38ffff;
    *(uint *)(param_1 + 0x20) = uVar1 & 0xff30ffff;
    FUN_004b700d(this,param_1);
    return;
  }
  FUN_004b700d(this,param_1);
  return;
}


