
/* ==== FUN_0040d700 @ 0040d700 ==== 
 * signature: undefined __thiscall FUN_0040d700(void * this, undefined4 * param_1)
 * body: 0040d700-0040d73e
 */

void __thiscall FUN_0040d700(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)this;
  cVar1 = (**(code **)(iVar2 + 0x15c))(0);
  if (cVar1 == '\0') {
    (**(code **)(iVar2 + 0x114))();
    (**(code **)(iVar2 + 0x1a8))(1);
  }
  puVar3 = (undefined4 *)((int)this + 0x86);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  *(undefined2 *)param_1 = *(undefined2 *)puVar3;
  return;
}


