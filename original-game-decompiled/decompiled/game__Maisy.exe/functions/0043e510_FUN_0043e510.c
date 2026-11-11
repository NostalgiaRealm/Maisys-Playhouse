
/* ==== FUN_0043e510 @ 0043e510 ==== 
 * signature: int * __cdecl FUN_0043e510(int * param_1, short param_2, int param_3, int * param_4, int * param_5)
 * body: 0043e510-0043e604
 */

int * __cdecl FUN_0043e510(int *param_1,short param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int local_10;
  void *local_c;
  short local_6;
  
  local_c = (void *)FUN_00466a80(param_1[1]);
  piVar3 = (int *)0x0;
  if ((param_4 != (int *)0x0) && ((int *)*param_4 != (int *)0x0)) {
    piVar3 = (int *)*param_4;
  }
  local_6 = 0;
  while( true ) {
    sVar2 = *(short *)((int)param_1 + 0x36);
    if (param_2 <= local_6) {
      if (sVar2 != 0) {
        piVar3 = (int *)FUN_00450230(local_c,sVar2);
      }
      if ((param_4 != (int *)0x0) && (piVar3 != (int *)0x0)) {
        *param_4 = (int)piVar3;
      }
      return param_1;
    }
    if (sVar2 != 0) {
      piVar3 = (int *)FUN_00450230(local_c,sVar2);
    }
    iVar1 = local_6 * 4;
    if (piVar3 == (int *)0x0) {
      param_1 = FUN_0043e460(param_1,*(int *)(iVar1 + param_3));
    }
    else {
      piVar3 = FUN_0043e4b0(piVar3,*(int *)(iVar1 + param_3),&local_10);
      param_1 = (int *)(**(code **)(*param_1 + 400))(local_10);
      if (param_5 != (int *)0x0) {
        *param_5 = piVar3[3];
      }
    }
    if (param_1 == (int *)0x0) break;
    if (*(int *)(param_3 + iVar1) == 0) {
      *(int *)(param_3 + iVar1) = param_1[3];
    }
    local_6 = local_6 + 1;
  }
  return (int *)0x0;
}


