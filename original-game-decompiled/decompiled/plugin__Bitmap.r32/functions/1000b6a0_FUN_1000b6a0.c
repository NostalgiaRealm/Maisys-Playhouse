
/* ==== FUN_1000b6a0 @ 1000b6a0 ==== 
 * signature: uint __thiscall FUN_1000b6a0(void * this, uint param_1, uint param_2)
 * body: 1000b6a0-1000b6da
 */

uint __thiscall FUN_1000b6a0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000b700(local_8);
  FUN_1000b7a0();
  return param_2 & param_1 | ~param_2 & uVar1;
}


