
/* ==== FUN_004bd1b8 @ 004bd1b8 ==== 
 * signature: HGLOBAL __cdecl FUN_004bd1b8(LPCSTR param_1)
 * body: 004bd1b8-004bd1e7
 */

HGLOBAL __cdecl FUN_004bd1b8(LPCSTR param_1)

{
  int iVar1;
  HGLOBAL _Dst;
  
  iVar1 = lstrlenA(param_1);
  _Dst = GlobalAlloc(0x2000,iVar1 + 1U);
  FID_conflict__memcpy(_Dst,param_1,iVar1 + 1U);
  return _Dst;
}


