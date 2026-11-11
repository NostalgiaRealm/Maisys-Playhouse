
/* ==== FUN_00467030 @ 00467030 ==== 
 * signature: int * __thiscall FUN_00467030(void * this, char * param_1)
 * body: 00467030-00467090
 */

int * __thiscall FUN_00467030(void *this,char *param_1)

{
  int *piVar1;
  uint uVar2;
  char local_104 [256];
  
  piVar1 = (int *)FUN_004246a0((int)this);
  do {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*(uint *)((int)piVar1 + 0x26) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x70))(local_104);
      uVar2 = FUN_0043d430(local_104,param_1);
      if (uVar2 == 0) {
        return piVar1;
      }
    }
    piVar1 = *(int **)((int)piVar1 + 0x3e);
  } while( true );
}


