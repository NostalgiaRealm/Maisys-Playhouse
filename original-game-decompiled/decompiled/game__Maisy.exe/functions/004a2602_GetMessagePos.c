
/* ==== USER32.DLL::GetMessagePos @ 004a2602 ==== 
 * signature: DWORD __stdcall GetMessagePos(void)
 * body: 004a2602-004a2607
 * thunk to: USER32.DLL::GetMessagePos
 */

DWORD GetMessagePos(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetMessagePos();
  return DVar1;
}


