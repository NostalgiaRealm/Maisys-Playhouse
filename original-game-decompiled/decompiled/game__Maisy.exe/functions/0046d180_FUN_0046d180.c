
/* ==== FUN_0046d180 @ 0046d180 ==== 
 * signature: int * __cdecl FUN_0046d180(char * param_1, int * param_2)
 * body: 0046d180-0046d1f9
 */

int * __cdecl FUN_0046d180(char *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  char local_104 [256];
  
  do {
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    for (piVar1 = (int *)(**(code **)(*param_2 + 0x184))(); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))()) {
      (**(code **)(*piVar1 + 0x70))(local_104);
      uVar2 = FUN_0043d430(local_104,param_1);
      if (uVar2 == 0) {
        return piVar1;
      }
    }
    param_2 = (int *)(**(code **)(*param_2 + 0x16c))();
  } while( true );
}


