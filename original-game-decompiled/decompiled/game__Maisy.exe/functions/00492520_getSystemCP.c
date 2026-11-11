
/* ==== getSystemCP @ 00492520 ==== 
 * signature: int __cdecl getSystemCP(int param_1)
 * body: 00492520-0049256c
 * note: Library Function - Single Match  _getSystemCP  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 1998 Release */

int __cdecl getSystemCP(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004de30c = 1;
                    /* WARNING: Could not recover jumptable at 0x0049253d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004de30c = 1;
                    /* WARNING: Could not recover jumptable at 0x00492552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004de6b0;
  }
  DAT_004de30c = (uint)bVar2;
  return param_1;
}


