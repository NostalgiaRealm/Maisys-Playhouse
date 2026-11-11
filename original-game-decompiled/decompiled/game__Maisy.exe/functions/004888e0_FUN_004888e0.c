
/* ==== FUN_004888e0 @ 004888e0 ==== 
 * signature: undefined4 __fastcall FUN_004888e0(int * param_1)
 * body: 004888e0-004888f6
 */

uint __fastcall FUN_004888e0(int *param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (DAT_004dc57c != '\0') {
    return in_EAX & 0xffffff00;
  }
  uVar1 = (**(code **)(*param_1 + 0x10c))();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


