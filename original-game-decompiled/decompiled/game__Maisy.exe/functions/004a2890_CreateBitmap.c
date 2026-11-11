
/* ==== GDI32.DLL::CreateBitmap @ 004a2890 ==== 
 * signature: HBITMAP __stdcall CreateBitmap(int nWidth, int nHeight, UINT nPlanes, UINT nBitCount, void * lpBits)
 * body: 004a2890-004a2895
 * thunk to: GDI32.DLL::CreateBitmap
 */

HBITMAP CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}


