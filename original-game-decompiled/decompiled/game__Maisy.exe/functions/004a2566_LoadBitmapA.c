
/* ==== USER32.DLL::LoadBitmapA @ 004a2566 ==== 
 * signature: HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance, LPCSTR lpBitmapName)
 * body: 004a2566-004a256b
 * thunk to: USER32.DLL::LoadBitmapA
 */

HBITMAP LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  return pHVar1;
}


