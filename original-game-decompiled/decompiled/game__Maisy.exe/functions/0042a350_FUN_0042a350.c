
/* ==== FUN_0042a350 @ 0042a350 ==== 
 * signature: undefined * __fastcall FUN_0042a350(int param_1)
 * body: 0042a350-0042a38a
 */

undefined * __fastcall FUN_0042a350(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  piVar2 = &local_8;
  iVar1 = FUN_00429b00(param_1);
  FUN_00435900(DAT_004dae3c,(ushort)iVar1,piVar2);
  if (local_8 != 0) {
    return (undefined *)(local_8 + 0x14);
  }
  return &DAT_004da40c;
}


