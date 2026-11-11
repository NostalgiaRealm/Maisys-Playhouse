
/* ==== FUN_10018b20 @ 10018b20 ==== 
 * signature: int __cdecl FUN_10018b20(int param_1)
 * body: 10018b20-10018b6c
 */

int __cdecl FUN_10018b20(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10023744 = 1;
                    /* WARNING: Could not recover jumptable at 0x10018b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10023744 = 1;
                    /* WARNING: Could not recover jumptable at 0x10018b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10023408;
  }
  DAT_10023744 = (uint)bVar2;
  return param_1;
}


