
/* ==== USER32.DLL::GrayStringA @ 004a2722 ==== 
 * signature: BOOL __stdcall GrayStringA(HDC hDC, HBRUSH hBrush, GRAYSTRINGPROC lpOutputFunc, LPARAM lpData, int nCount, int X, int Y, int nWidth, int nHeight)
 * body: 004a2722-004a2727
 * thunk to: USER32.DLL::GrayStringA
 */

BOOL GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,
                int Y,int nWidth,int nHeight)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GrayStringA(hDC,hBrush,lpOutputFunc,lpData,nCount,X,Y,nWidth,nHeight);
  return BVar1;
}


