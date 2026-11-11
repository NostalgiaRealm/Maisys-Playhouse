
/* ==== FUN_0040c470 @ 0040c470 ==== 
 * signature: int __thiscall FUN_0040c470(void * this, int * param_1)
 * body: 0040c470-0040c4a8
 */

int __thiscall FUN_0040c470(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x184))();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (piVar1 == param_1) break;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))();
  }
  return iVar2;
}


