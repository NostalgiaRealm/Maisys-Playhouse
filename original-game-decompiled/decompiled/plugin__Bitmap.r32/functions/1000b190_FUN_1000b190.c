
/* ==== FUN_1000b190 @ 1000b190 ==== 
 * signature: int __cdecl FUN_1000b190(int param_1)
 * body: 1000b190-1000b1dc
 */

int __cdecl FUN_1000b190(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1001723c = 1;
                    /* WARNING: Could not recover jumptable at 0x1000b1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1001723c = 1;
                    /* WARNING: Could not recover jumptable at 0x1000b1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10016fc0;
  }
  DAT_1001723c = (uint)bVar2;
  return param_1;
}


