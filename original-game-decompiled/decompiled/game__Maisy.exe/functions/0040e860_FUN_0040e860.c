
/* ==== FUN_0040e860 @ 0040e860 ==== 
 * signature: undefined __cdecl FUN_0040e860(int param_1, int param_2, int * param_3, int param_4)
 * body: 0040e860-0040e8fb
 */

void __cdecl FUN_0040e860(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 4);
  piVar5 = *(int **)(param_1 + 0x1c);
  piVar6 = *(int **)(param_2 + 0x1c);
  iVar1 = *param_3;
  if (param_3[4] == 0) {
    if (0 < iVar3) {
      do {
        iVar1 = (int)*(short *)(param_4 + iVar4 * 2);
        if (0 < iVar1) {
          iVar3 = iVar3 - iVar1;
          do {
            iVar2 = *piVar5;
            piVar5 = piVar5 + 1;
            *piVar6 = iVar2;
            piVar6 = piVar6 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        iVar1 = (int)*(short *)(param_4 + (iVar4 + 1) * 2);
        iVar3 = iVar3 - iVar1;
        iVar4 = iVar4 + 2;
        piVar5 = piVar5 + iVar1;
      } while (0 < iVar3);
      return;
    }
  }
  else {
    for (; 0 < iVar3; iVar3 = iVar3 - iVar2) {
      iVar2 = (int)*(short *)(param_4 + iVar4 * 2);
      if (0 < iVar2) {
        iVar3 = iVar3 - iVar2;
        do {
          if (iVar1 != *piVar5) {
            *piVar6 = *piVar5;
          }
          piVar6 = piVar6 + 1;
          piVar5 = piVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (int)*(short *)(param_4 + (iVar4 + 1) * 2);
      iVar4 = iVar4 + 2;
      piVar5 = piVar5 + iVar2;
    }
  }
  return;
}


