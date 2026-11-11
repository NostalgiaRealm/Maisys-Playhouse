
/* ==== KERNEL32.DLL::GetTimeZoneInformation @ 110339a0 ==== 
 * signature: DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
 * body: 110339a0-110339a5
 * thunk to: KERNEL32.DLL::GetTimeZoneInformation
 */

DWORD GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110339a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}


