
/* ==== KERNEL32.DLL::GetTimeZoneInformation @ 1402396a ==== 
 * signature: DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
 * body: 1402396a-1402396f
 * thunk to: KERNEL32.DLL::GetTimeZoneInformation
 */

DWORD GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402396a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}


