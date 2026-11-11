
/* ==== FUN_00415ef0 @ 00415ef0 ==== 
 * signature: int * __cdecl FUN_00415ef0(int * param_1, char * param_2)
 * body: 00415ef0-00415f48
 */

int * __cdecl FUN_00415ef0(int *param_1,char *param_2)

{
  uint uVar1;
  char local_104 [256];
  
  do {
    if (param_1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*(uint *)((int)param_1 + 0x26) & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x70))(local_104);
      uVar1 = FUN_0043d430(local_104,param_2);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    param_1 = *(int **)((int)param_1 + 0x3e);
  } while( true );
}


