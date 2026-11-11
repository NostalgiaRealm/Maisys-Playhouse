
/* ==== FUN_00412400 @ 00412400 ==== 
 * signature: undefined __thiscall FUN_00412400(void * this, char param_1, char param_2)
 * body: 00412400-00412489
 */

void __thiscall FUN_00412400(void *this,char param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) | 8;
  cVar2 = DAT_004dbdc4;
  iVar1 = *(int *)this;
  piVar3 = (int *)(**(code **)(iVar1 + 0x188))();
  if ((param_1 == '\0') || (param_2 != '\0')) {
    DAT_004dbdc4 = '\0';
  }
  else {
    DAT_004dbdc4 = '\x01';
  }
  while (piVar3 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar3 + 0x174))();
    (**(code **)(*piVar3 + 8))(1,param_2);
    piVar3 = piVar4;
  }
  if (DAT_004dbdc4 != cVar2) {
    DAT_004dbdc4 = cVar2;
  }
  if (param_1 != '\0') {
    (**(code **)(iVar1 + 4))();
  }
  return;
}


