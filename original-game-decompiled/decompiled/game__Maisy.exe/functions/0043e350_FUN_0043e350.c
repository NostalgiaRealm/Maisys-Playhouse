
/* ==== FUN_0043e350 @ 0043e350 ==== 
 * signature: int * __cdecl FUN_0043e350(int * param_1, int param_2, int * param_3)
 * body: 0043e350-0043e450
 */

int * __cdecl FUN_0043e350(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  void *this;
  int *piVar2;
  int *piVar3;
  int **ppiVar4;
  int *local_8;
  
  piVar3 = (int *)0x0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x184))();
  this = (void *)FUN_00466a80(param_1[1]);
  local_8 = (int *)0x0;
  if ((param_3 != (int *)0x0) && ((int *)*param_3 != (int *)0x0)) {
    local_8 = (int *)*param_3;
  }
  if (param_2 != 0) {
    if (*(int *)((int)param_1 + 0x2a) != 0) {
      local_8 = (int *)FUN_00450230(this,*(short *)((int)param_1 + 0x36));
    }
    piVar2 = (int *)0x0;
    if (local_8 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*local_8 + 0x184))();
    }
    while (local_8 = piVar2, piVar1 != (int *)0x0) {
      if (param_3 == (int *)0x0) {
LAB_0043e3dc:
        if (local_8 == (int *)0x0) goto LAB_0043e3e2;
        if (local_8[3] == param_2) {
          return piVar1;
        }
      }
      else {
        if (local_8 != (int *)0x0) {
          *param_3 = (int)local_8;
          goto LAB_0043e3dc;
        }
LAB_0043e3e2:
        if (piVar1[3] == param_2) {
          return piVar1;
        }
      }
      if (local_8 == (int *)0x0) {
        ppiVar4 = (int **)0x0;
      }
      else {
        ppiVar4 = &local_8;
        piVar3 = local_8;
      }
      piVar2 = FUN_0043e350(piVar1,param_2,(int *)ppiVar4);
      if (piVar2 != (int *)0x0) {
        return piVar2;
      }
      local_8 = piVar3;
      if ((piVar3 != (int *)0x0) &&
         (local_8 = (int *)(**(code **)(*piVar3 + 0x17c))(), local_8 == (int *)0x0)) {
        return (int *)0x0;
      }
      piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))();
      piVar2 = local_8;
    }
  }
  return (int *)0x0;
}


