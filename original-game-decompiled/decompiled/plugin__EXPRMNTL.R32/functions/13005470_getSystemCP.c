
/* ==== getSystemCP @ 13005470 ==== 
 * signature: int __cdecl getSystemCP(int param_1)
 * body: 13005470-130054bc
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
    DAT_130084cc = 1;
                    /* WARNING: Could not recover jumptable at 0x1300548d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_130084cc = 1;
                    /* WARNING: Could not recover jumptable at 0x130054a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_130087c0;
  }
  DAT_130084cc = (uint)bVar2;
  return param_1;
}


