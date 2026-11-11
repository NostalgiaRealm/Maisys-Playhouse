
/* ==== FUN_004242f0 @ 004242f0 ==== 
 * signature: undefined4 __thiscall FUN_004242f0(void * this, int param_1)
 * body: 004242f0-0042434a
 */

uint __thiscall FUN_004242f0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x188))();
  piVar2 = piVar1;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (uint)piVar2 & 0xffffff00;
    }
    if ((param_1 != 0) && (*(int *)((int)piVar1 + 0x2a) == param_1)) break;
    if (((*(uint *)((int)piVar1 + 0x1e) & 0x80000) != 0) &&
       (piVar2 = (int *)(**(code **)(*piVar1 + 0x2a8))(param_1), (char)piVar2 != '\0')) {
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
    piVar1 = *(int **)((int)piVar1 + 0x3e);
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


