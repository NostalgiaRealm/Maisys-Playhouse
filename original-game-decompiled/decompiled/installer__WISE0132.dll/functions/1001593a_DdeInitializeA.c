
/* ==== USER32.DLL::DdeInitializeA @ 1001593a ==== 
 * signature: UINT __stdcall DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)
 * body: 1001593a-1001593f
 * thunk to: USER32.DLL::DdeInitializeA
 */

UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001593a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}


