
/* ==== FUN_00421230 @ 00421230 ==== 
 * signature: undefined __thiscall FUN_00421230(void * this, int param_1, short param_2)
 * body: 00421230-0042127c
 */

void __thiscall FUN_00421230(void *this,int param_1,short param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x114))();
  cVar2 = (**(code **)(iVar1 + 0xec))();
  if ((cVar2 != '\0') && (*(int *)((int)this + 0x152) != 0)) {
    FUN_00420e80(this,param_1,param_2);
  }
  (**(code **)(iVar1 + 0xc4))(0,param_2);
  return;
}


