
/* ==== FUN_0048c900 @ 0048c900 ==== 
 * signature: undefined4 __cdecl FUN_0048c900(int param_1, int * param_2, char param_3)
 * body: 0048c900-0048c9c2
 */

undefined4 __cdecl FUN_0048c900(int param_1,int *param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  char local_204 [256];
  char local_104 [256];
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return 0x10000;
  }
  *param_2 = 0;
  piVar2 = (int *)FUN_0048c050(param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0x1e) & 1) == 0)) {
    return 0x10000;
  }
  do {
    if (piVar2 == (int *)0x0) {
      *param_2 = *param_2 + 1;
      return 0;
    }
    if (*(short *)((int)piVar2 + 0x22) == 0x43) {
      if (param_3 == '\0') {
        pcVar4 = s_<project>_004dd188;
      }
      else {
        pcVar4 = local_204;
        (**(code **)(*piVar2 + 0x70))(local_204);
      }
    }
    else {
      pcVar4 = local_104;
      (**(code **)(*piVar2 + 0x70))(local_104);
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *param_2 = *param_2 + (~uVar3 - 1);
    *param_2 = *param_2 + 1;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))();
  } while( true );
}


