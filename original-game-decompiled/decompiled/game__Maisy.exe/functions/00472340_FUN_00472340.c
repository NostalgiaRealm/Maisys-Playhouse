
/* ==== FUN_00472340 @ 00472340 ==== 
 * signature: int * __thiscall FUN_00472340(void * this, int param_1)
 * body: 00472340-0047237c
 */

int * __thiscall FUN_00472340(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_004379a0(DAT_004dae3c,param_1,(int *)((int)this + 0x14a),(int)this);
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0xe4))(this);
  (**(code **)(iVar1 + 0x2c8))();
  return piVar2;
}


