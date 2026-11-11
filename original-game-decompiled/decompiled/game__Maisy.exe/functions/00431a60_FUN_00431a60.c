
/* ==== FUN_00431a60 @ 00431a60 ==== 
 * signature: undefined __cdecl FUN_00431a60(int param_1, int param_2, int param_3, int * param_4, int * param_5)
 * body: 00431a60-00431b10
 */

void __cdecl FUN_00431a60(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) && (param_2 == 0)) || (param_3 < 1)) {
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    iVar2 = param_3 + 1;
    if (iVar2 < param_1) {
      param_1 = iVar2;
    }
    iVar1 = -param_3;
    if (param_1 < iVar1) {
      param_1 = iVar1;
    }
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
    if (param_1 < 0) {
      param_1 = param_3 + 1 + param_1;
    }
    if (param_2 < 0) {
      param_2 = param_3 + 1 + param_2;
    }
    if (param_2 == 0) {
      *param_5 = 0;
      *param_4 = param_1 + -1;
    }
    else {
      if (param_1 == 0) {
        param_1 = 1;
      }
      iVar2 = param_1;
      if (param_2 < param_1) {
        iVar2 = param_2;
        param_2 = param_1;
      }
      *param_4 = iVar2 + -1;
      *param_5 = (param_2 - iVar2) + 1;
    }
    if (param_3 < *param_5 + *param_4) {
      *param_5 = param_3 - *param_4;
      return;
    }
  }
  return;
}


