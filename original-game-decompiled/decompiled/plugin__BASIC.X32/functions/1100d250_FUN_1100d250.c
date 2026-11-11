
/* ==== FUN_1100d250 @ 1100d250 ==== 
 * signature: undefined __cdecl FUN_1100d250(int param_1, int param_2, int * param_3, short * param_4)
 * body: 1100d250-1100d2f4
 */

void __cdecl FUN_1100d250(int param_1,int param_2,int *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(param_1 + 0x1c);
  piVar6 = *(int **)(param_2 + 0x1c);
  iVar7 = *param_3;
  if (param_3[4] == 0) {
    if (0 < local_8) {
      do {
        iVar7 = (int)*param_4;
        piVar5 = piVar6;
        if (0 < iVar7) {
          do {
            piVar6 = piVar5 + 1;
            iVar7 = iVar7 + -1;
            *piVar5 = *piVar3;
            piVar5 = piVar6;
          } while (iVar7 != 0);
        }
        piVar3 = piVar3 + 1;
        param_4 = param_4 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return;
    }
  }
  else if (0 < local_8) {
    do {
      iVar1 = *piVar3;
      if (iVar1 == iVar7) {
        piVar6 = piVar6 + *param_4;
      }
      else {
        iVar4 = (int)*param_4;
        iVar2 = iVar4;
        piVar5 = piVar6;
        if (0 < iVar4) {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = iVar1;
            piVar5 = piVar5 + 1;
          }
          piVar6 = piVar6 + iVar4;
        }
      }
      piVar3 = piVar3 + 1;
      param_4 = param_4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


