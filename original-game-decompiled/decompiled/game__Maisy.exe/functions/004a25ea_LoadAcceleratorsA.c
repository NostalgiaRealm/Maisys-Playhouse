
/* ==== USER32.DLL::LoadAcceleratorsA @ 004a25ea ==== 
 * signature: HACCEL __stdcall LoadAcceleratorsA(HINSTANCE hInstance, LPCSTR lpTableName)
 * body: 004a25ea-004a25ef
 * thunk to: USER32.DLL::LoadAcceleratorsA
 */

HACCEL LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName)

{
  HACCEL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAcceleratorsA(hInstance,lpTableName);
  return pHVar1;
}


