
/* ==== USER32.DLL::BeginDeferWindowPos @ 004a26c2 ==== 
 * signature: HDWP __stdcall BeginDeferWindowPos(int nNumWindows)
 * body: 004a26c2-004a26c7
 * thunk to: USER32.DLL::BeginDeferWindowPos
 */

HDWP BeginDeferWindowPos(int nNumWindows)

{
  HDWP pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = BeginDeferWindowPos(nNumWindows);
  return pvVar1;
}


