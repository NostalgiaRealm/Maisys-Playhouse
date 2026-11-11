
/* ==== GDI32.DLL::CreateFontIndirectA @ 004a2806 ==== 
 * signature: HFONT __stdcall CreateFontIndirectA(LOGFONTA * lplf)
 * body: 004a2806-004a280b
 * thunk to: GDI32.DLL::CreateFontIndirectA
 */

HFONT CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}


