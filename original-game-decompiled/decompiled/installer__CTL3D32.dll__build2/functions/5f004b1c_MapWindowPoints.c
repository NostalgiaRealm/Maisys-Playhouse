
/* ==== USER32.DLL::MapWindowPoints @ 5f004b1c ==== 
 * signature: int __stdcall MapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
 * body: 5f004b1c-5f004b21
 * thunk to: USER32.DLL::MapWindowPoints
 */

int MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}


