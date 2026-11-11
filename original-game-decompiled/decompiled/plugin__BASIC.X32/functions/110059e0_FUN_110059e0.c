
/* ==== FUN_110059e0 @ 110059e0 ==== 
 * signature: undefined __cdecl FUN_110059e0(undefined4 param_1, short * param_2)
 * body: 110059e0-11005a14
 */

void __cdecl FUN_110059e0(undefined4 param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  
  sVar4 = 0;
  if (0 < *param_2) {
    do {
      iVar2 = (int)sVar4;
      sVar4 = sVar4 + 1;
      psVar1 = (short *)(*(int *)(param_2 + 1) + 10 + iVar2 * 0xc);
      *psVar1 = *psVar1 + -1;
      piVar3 = (int *)(*(int *)(param_2 + 1) + iVar2 * 0xc);
      *piVar3 = *piVar3 + piVar3[1];
    } while (sVar4 < *param_2);
  }
  return;
}


