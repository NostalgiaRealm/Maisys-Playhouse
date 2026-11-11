
/* ==== FUN_004698a0 @ 004698a0 ==== 
 * signature: undefined __thiscall FUN_004698a0(void * this, char param_1, undefined4 param_2)
 * body: 004698a0-0046992e
 */

void __thiscall FUN_004698a0(void *this,char param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  *(uint *)((int)this + 0x7e) = *(uint *)((int)this + 0x7e) & 0x7fffffff;
  *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) | 8;
  cVar1 = DAT_004dbdc4;
  piVar2 = (int *)(**(code **)(*(int *)this + 0x184))();
  DAT_004dbdc4 = (char)param_2 == '\0';
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 0x17c))();
    (**(code **)(*piVar2 + 8))(1,param_2);
    piVar2 = piVar3;
  }
  if (DAT_004dbdc4 != cVar1) {
    DAT_004dbdc4 = cVar1;
  }
  if (param_1 == '\0') {
    *(undefined4 *)((int)this + 0x4e) = 0;
    *(undefined4 *)((int)this + 0x6e) = 0;
    return;
  }
  (**(code **)(*(int *)this + 4))();
  return;
}


