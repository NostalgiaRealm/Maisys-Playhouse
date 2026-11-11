
/* ==== FUN_0043e950 @ 0043e950 ==== 
 * signature: int __cdecl FUN_0043e950(int * param_1, int param_2)
 * body: 0043e950-0043e9a1
 */

int __cdecl FUN_0043e950(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x16c))();
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    for (iVar3 = (**(code **)(iVar1 + 0x188))(); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x3e)) {
      if ((*(int *)(iVar3 + 0xc) == param_2) && ((*(uint *)(iVar3 + 0x26) & 0x80000000) == 0)) {
        return iVar3;
      }
    }
    piVar2 = (int *)(**(code **)(iVar1 + 0x16c))();
  } while( true );
}


