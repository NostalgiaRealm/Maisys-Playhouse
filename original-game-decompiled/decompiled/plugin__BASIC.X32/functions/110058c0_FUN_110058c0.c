
/* ==== FUN_110058c0 @ 110058c0 ==== 
 * signature: undefined __cdecl FUN_110058c0(undefined4 param_1, short * param_2, short * param_3, short param_4)
 * body: 110058c0-11005943
 */

void __cdecl FUN_110058c0(undefined4 param_1,short *param_2,short *param_3,short param_4)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = 0;
  if (0 < *param_2) {
    do {
      piVar1 = (int *)(sVar3 * 0xc + *(int *)(param_2 + 1));
      sVar2 = sVar3;
      if ((short)piVar1[2] == param_4) {
        sVar2 = 0;
        if (0 < *param_3) {
          do {
            if (*piVar1 < *(int *)(*(int *)(param_3 + 1) + sVar2 * 0xc)) break;
            sVar2 = sVar2 + 1;
          } while (sVar2 < *param_3);
        }
        FUN_11005850(param_1,piVar1,param_3,sVar2);
        sVar2 = sVar3 + -1;
        FUN_11005950(param_1,param_2,sVar3);
      }
      sVar3 = sVar2 + 1;
    } while (sVar3 < *param_2);
  }
  return;
}


