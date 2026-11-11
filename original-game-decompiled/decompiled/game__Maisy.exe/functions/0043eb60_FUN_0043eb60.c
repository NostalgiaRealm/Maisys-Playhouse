
/* ==== FUN_0043eb60 @ 0043eb60 ==== 
 * signature: int * __cdecl FUN_0043eb60(int param_1, int * param_2, char * param_3)
 * body: 0043eb60-0043ec70
 */

int * __cdecl FUN_0043eb60(int param_1,int *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  char local_104 [256];
  
  piVar4 = *(int **)(param_1 + 0x3a);
  if ((param_3 == (char *)0x0) || (piVar4 == (int *)0x0)) {
    return (int *)0x0;
  }
  (**(code **)(*piVar4 + 0x70))(local_104);
  if (((*(byte *)((int)piVar4 + 0x29) & 0x80) == 0) &&
     (uVar2 = FUN_0043d430(local_104,param_3), uVar2 == 0)) {
    *param_2 = piVar4[3];
    return piVar4;
  }
  if (*(int **)((int)piVar4 + 0x62) != (int *)0x0) {
    for (piVar3 = (int *)FUN_00469fb0(*(int **)((int)piVar4 + 0x62)); piVar3 != (int *)0x0;
        piVar3 = *(int **)((int)piVar3 + 0x6a)) {
      (**(code **)(*piVar3 + 0x70))(local_104);
      if (((*(byte *)((int)piVar3 + 0x29) & 0x80) == 0) &&
         (uVar2 = FUN_0043d430(local_104,param_3), uVar2 == 0)) {
        *param_2 = piVar3[3];
        return piVar3;
      }
    }
    piVar4 = *(int **)((int)piVar4 + 0x62);
    while (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      (**(code **)(iVar1 + 0x70))(local_104);
      if (((*(byte *)((int)piVar4 + 0x29) & 0x80) == 0) &&
         (uVar2 = FUN_0043d430(local_104,param_3), uVar2 == 0)) {
        *param_2 = piVar4[3];
        return piVar4;
      }
      piVar4 = (int *)(**(code **)(iVar1 + 0x16c))();
    }
  }
  return (int *)0x0;
}


