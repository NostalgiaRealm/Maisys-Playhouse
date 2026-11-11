
/* ==== FUN_004bb9a0 @ 004bb9a0 ==== 
 * signature: undefined __fastcall FUN_004bb9a0(DWORD * param_1)
 * body: 004bb9a0-004bb9dc
 */

void __fastcall FUN_004bb9a0(DWORD *param_1)

{
  HGLOBAL hMem;
  
  if (*param_1 != 0xffffffff) {
    TlsFree(*param_1);
  }
  if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
    hMem = GlobalHandle((LPCVOID)param_1[5]);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


