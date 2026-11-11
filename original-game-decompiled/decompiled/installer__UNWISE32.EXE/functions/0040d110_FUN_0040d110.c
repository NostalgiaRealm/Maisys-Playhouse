
/* ==== FUN_0040d110 @ 0040d110 ==== 
 * signature: int __cdecl FUN_0040d110(int param_1)
 * body: 0040d110-0040d15c
 */

int __cdecl FUN_0040d110(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004137f4 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040d12d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004137f4 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040d142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00413458;
  }
  DAT_004137f4 = (uint)bVar2;
  return param_1;
}


