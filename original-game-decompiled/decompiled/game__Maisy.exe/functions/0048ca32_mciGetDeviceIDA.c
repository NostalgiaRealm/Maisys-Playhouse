
/* ==== WINMM.DLL::mciGetDeviceIDA @ 0048ca32 ==== 
 * signature: MCIDEVICEID __stdcall mciGetDeviceIDA(LPCSTR pszDevice)
 * body: 0048ca32-0048ca37
 * thunk to: WINMM.DLL::mciGetDeviceIDA
 */

MCIDEVICEID mciGetDeviceIDA(LPCSTR pszDevice)

{
  MCIDEVICEID MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mciGetDeviceIDA(pszDevice);
  return MVar1;
}


