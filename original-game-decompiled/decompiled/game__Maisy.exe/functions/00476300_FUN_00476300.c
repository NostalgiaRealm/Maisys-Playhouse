
/* ==== FUN_00476300 @ 00476300 ==== 
 * signature: undefined4 __cdecl FUN_00476300(int param_1)
 * body: 00476300-00476392
 */

undefined4 __cdecl FUN_00476300(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  char local_104 [256];
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 8);
  *puVar1 = 0;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))();
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    for (piVar3 = (int *)(**(code **)(*piVar2 + 0x188))(); piVar3 != (int *)0x0;
        piVar3 = *(int **)((int)piVar3 + 0x3e)) {
      (**(code **)(*piVar3 + 0x70))(local_104);
      if (((*(byte *)((int)piVar3 + 0x29) & 0x80) == 0) &&
         (uVar4 = FUN_0043d430(local_104,(char *)puVar1[2]), uVar4 == 0)) {
        *puVar1 = piVar3;
        return 0;
      }
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))();
  } while( true );
}


