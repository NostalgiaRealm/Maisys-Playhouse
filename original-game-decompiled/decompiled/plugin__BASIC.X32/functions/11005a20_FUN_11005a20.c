
/* ==== FUN_11005a20 @ 11005a20 ==== 
 * signature: undefined __cdecl FUN_11005a20(undefined4 param_1, short * param_2)
 * body: 11005a20-11005a89
 */

void __cdecl FUN_11005a20(undefined4 param_1,short *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int *piVar7;
  
  sVar6 = 0;
  sVar2 = *param_2;
  piVar7 = *(int **)(param_2 + 1);
  if (0 < sVar2 + -1) {
    do {
      piVar1 = piVar7 + 3;
      iVar3 = *piVar7;
      if (*piVar1 < iVar3) {
        iVar4 = piVar7[1];
        iVar5 = piVar7[2];
        *piVar7 = *piVar1;
        piVar7[1] = piVar7[4];
        piVar7[2] = piVar7[5];
        *piVar1 = iVar3;
        piVar7[4] = iVar4;
        piVar7[5] = iVar5;
      }
      sVar6 = sVar6 + 1;
      piVar7 = piVar1;
    } while ((int)sVar6 < sVar2 + -1);
  }
  return;
}


