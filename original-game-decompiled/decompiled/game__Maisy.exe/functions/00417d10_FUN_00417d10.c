
/* ==== FUN_00417d10 @ 00417d10 ==== 
 * signature: undefined4 __fastcall FUN_00417d10(int * param_1)
 * body: 00417d10-00417d1c
 */

undefined4 __fastcall FUN_00417d10(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x15c))(0xb);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


