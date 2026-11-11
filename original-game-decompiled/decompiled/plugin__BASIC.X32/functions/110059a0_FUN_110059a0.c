
/* ==== FUN_110059a0 @ 110059a0 ==== 
 * signature: undefined __cdecl FUN_110059a0(undefined4 param_1, short * param_2)
 * body: 110059a0-110059dd
 */

void __cdecl FUN_110059a0(undefined4 param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  if (0 < *param_2) {
    do {
      sVar1 = sVar2;
      if (*(short *)(*(int *)(param_2 + 1) + 10 + sVar2 * 0xc) < 1) {
        sVar1 = sVar2 + -1;
        FUN_11005950(param_1,param_2,sVar2);
      }
      sVar2 = sVar1 + 1;
    } while (sVar2 < *param_2);
  }
  return;
}


