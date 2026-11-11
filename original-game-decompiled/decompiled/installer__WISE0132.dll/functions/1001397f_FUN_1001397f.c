
/* ==== FUN_1001397f @ 1001397f ==== 
 * signature: LPVOID __cdecl FUN_1001397f(int param_1, SIZE_T param_2)
 * body: 1001397f-100139a4
 */

LPVOID __cdecl FUN_1001397f(int param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)0x0;
  hMem = GlobalAlloc(0,param_2);
  *(HGLOBAL *)(param_1 + 0x30) = hMem;
  if (hMem != (HGLOBAL)0x0) {
    pvVar1 = GlobalLock(hMem);
  }
  return pvVar1;
}


