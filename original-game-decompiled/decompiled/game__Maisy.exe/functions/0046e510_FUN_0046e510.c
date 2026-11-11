
/* ==== FUN_0046e510 @ 0046e510 ==== 
 * signature: undefined4 __thiscall FUN_0046e510(void * this, short * param_1)
 * body: 0046e510-0046e58b
 */

undefined4 __thiscall FUN_0046e510(void *this,short *param_1)

{
  int iVar1;
  int iVar2;
  char local_10c [256];
  char *local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00456560(param_1,local_10c,0x100,(int *)0x0);
  if (iVar1 == 0) {
    iVar1 = *(int *)this;
    iVar2 = (**(code **)(iVar1 + 0x108))(local_10c);
    if (iVar2 == 0) {
      local_c = FUN_0043b970(local_10c);
      local_8 = 0;
      (**(code **)(iVar1 + 0xe8))(&local_c);
    }
    return 0;
  }
  return 0x10000;
}


