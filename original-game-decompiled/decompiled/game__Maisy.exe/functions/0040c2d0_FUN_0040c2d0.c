
/* ==== FUN_0040c2d0 @ 0040c2d0 ==== 
 * signature: int * __thiscall FUN_0040c2d0(void * this, char * param_1)
 * body: 0040c2d0-0040c332
 */

int * __thiscall FUN_0040c2d0(void *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char local_104 [256];
  
  piVar2 = (int *)(**(code **)(*(int *)this + 0x184))();
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x70))(local_104);
    uVar3 = FUN_0043d430(param_1,local_104);
    if (uVar3 == 0) break;
    piVar2 = (int *)(**(code **)(iVar1 + 0x17c))();
  }
  return piVar2;
}


