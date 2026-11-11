
/* ==== getSystemCP @ 15001d90 ==== 
 * signature: int __cdecl getSystemCP(int param_1)
 * body: 15001d90-15001ddc
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
    DAT_150051dc = 1;
                    /* WARNING: Could not recover jumptable at 0x15001dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_150051dc = 1;
                    /* WARNING: Could not recover jumptable at 0x15001dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_150054d0;
  }
  DAT_150051dc = (uint)bVar2;
  return param_1;
}


