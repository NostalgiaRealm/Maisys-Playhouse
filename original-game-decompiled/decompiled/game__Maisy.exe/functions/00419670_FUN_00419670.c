
/* ==== FUN_00419670 @ 00419670 ==== 
 * signature: undefined __thiscall FUN_00419670(void * this, undefined4 param_1)
 * body: 00419670-004196d9
 */

void __thiscall FUN_00419670(void *this,undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)this;
  piVar3 = (int *)(**(code **)(iVar1 + 0x3c0))();
  (**(code **)(*piVar3 + 0x32c))(param_1);
  cVar2 = (**(code **)(iVar1 + 0x68))(5);
  if (cVar2 != '\0') {
    local_14 = *(int *)((int)this + 0x156) + 1;
    local_10 = *(int *)((int)this + 0x14e) + 1;
    local_8 = *(undefined4 *)((int)this + 0x8e);
    local_c = *(int *)((int)this + 0x152) + 1;
    (**(code **)(iVar1 + 0x44))(5,FUN_00419630,&local_14);
  }
  return;
}


