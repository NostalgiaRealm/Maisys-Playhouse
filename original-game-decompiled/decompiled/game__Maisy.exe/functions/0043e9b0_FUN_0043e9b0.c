
/* ==== FUN_0043e9b0 @ 0043e9b0 ==== 
 * signature: int * __cdecl FUN_0043e9b0(int * param_1, int * param_2, char * param_3)
 * body: 0043e9b0-0043ea45
 */

int * __cdecl FUN_0043e9b0(int *param_1,int *param_2,char *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char local_104 [256];
  
  if (param_3 == (char *)0x0) {
    return (int *)0x0;
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0x16c))();
  do {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    for (piVar2 = (int *)(**(code **)(*piVar1 + 0x188))(); piVar2 != (int *)0x0;
        piVar2 = *(int **)((int)piVar2 + 0x3e)) {
      (**(code **)(*piVar2 + 0x70))(local_104);
      if (((*(byte *)((int)piVar2 + 0x29) & 0x80) == 0) &&
         (uVar3 = FUN_0043d430(local_104,param_3), uVar3 == 0)) {
        *param_2 = piVar2[3];
        return piVar2;
      }
    }
    piVar1 = (int *)(**(code **)(*piVar1 + 0x16c))();
  } while( true );
}


