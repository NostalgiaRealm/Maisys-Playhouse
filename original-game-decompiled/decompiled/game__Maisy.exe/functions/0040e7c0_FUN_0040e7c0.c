
/* ==== FUN_0040e7c0 @ 0040e7c0 ==== 
 * signature: undefined __cdecl FUN_0040e7c0(int param_1, int param_2, int * param_3, short * param_4)
 * body: 0040e7c0-0040e85e
 */

void __cdecl FUN_0040e7c0(int param_1,int param_2,int *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  short *local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4);
  piVar4 = *(int **)(param_1 + 0x1c);
  piVar7 = *(int **)(param_2 + 0x1c);
  iVar2 = *param_3;
  if (param_3[4] == 0) {
    if (0 < local_8) {
      do {
        iVar2 = (int)*param_4;
        piVar6 = piVar7;
        if (0 < iVar2) {
          do {
            piVar7 = piVar6 + 1;
            iVar2 = iVar2 + -1;
            *piVar6 = *piVar4;
            piVar6 = piVar7;
          } while (iVar2 != 0);
        }
        piVar4 = piVar4 + 1;
        param_4 = param_4 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return;
    }
  }
  else if (0 < local_8) {
    local_c = param_4;
    do {
      iVar1 = *piVar4;
      if (iVar1 == iVar2) {
        piVar7 = piVar7 + *local_c;
      }
      else {
        iVar5 = (int)*local_c;
        iVar3 = iVar5;
        piVar6 = piVar7;
        if (0 < iVar5) {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar6 = iVar1;
            piVar6 = piVar6 + 1;
          }
          piVar7 = piVar7 + iVar5;
        }
      }
      local_c = local_c + 1;
      piVar4 = piVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


