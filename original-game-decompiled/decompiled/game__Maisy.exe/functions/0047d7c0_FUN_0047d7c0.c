
/* ==== FUN_0047d7c0 @ 0047d7c0 ==== 
 * signature: undefined __fastcall FUN_0047d7c0(int * param_1)
 * body: 0047d7c0-0047d7f0
 */

void __fastcall FUN_0047d7c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x19c))();
  if (param_1[0x2e] != 0) {
    (**(code **)(iVar1 + 0x160))(5,0);
    LocalUnlock((HLOCAL)param_1[0x2e]);
  }
  return;
}


