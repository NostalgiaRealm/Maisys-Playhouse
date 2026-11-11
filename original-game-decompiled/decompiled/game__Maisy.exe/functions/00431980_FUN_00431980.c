
/* ==== FUN_00431980 @ 00431980 ==== 
 * signature: undefined4 __thiscall FUN_00431980(void * this, undefined1 * param_1)
 * body: 00431980-004319b2
 */

undefined4 __thiscall FUN_00431980(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  undefined2 local_10 [6];
  
  FUN_00431900(param_1,local_10,2);
  uVar1 = FUN_0040ad50(*(void **)((int)this + 0x90),local_10);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


