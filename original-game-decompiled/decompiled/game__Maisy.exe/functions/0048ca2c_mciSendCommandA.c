
/* ==== WINMM.DLL::mciSendCommandA @ 0048ca2c ==== 
 * signature: MCIERROR __stdcall mciSendCommandA(MCIDEVICEID mciId, UINT uMsg, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
 * body: 0048ca2c-0048ca31
 * thunk to: WINMM.DLL::mciSendCommandA
 */

MCIERROR mciSendCommandA(MCIDEVICEID mciId,UINT uMsg,DWORD_PTR dwParam1,DWORD_PTR dwParam2)

{
  MCIERROR MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mciSendCommandA(mciId,uMsg,dwParam1,dwParam2);
  return MVar1;
}


