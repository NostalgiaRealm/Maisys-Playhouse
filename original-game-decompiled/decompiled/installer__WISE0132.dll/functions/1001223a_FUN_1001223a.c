
/* ==== FUN_1001223a @ 1001223a ==== 
 * signature: undefined __cdecl FUN_1001223a(LPCSTR param_1, int param_2, int param_3)
 * body: 1001223a-100122b8
 */

void __cdecl FUN_1001223a(LPCSTR param_1,int param_2,int param_3)

{
  HFILE hFile;
  DWORD dwDesiredAccess;
  
  if (DAT_100241e8 == 0) {
    if (param_3 != 0) {
      hFile = _lcreat(param_1,0);
      if (hFile != -1) {
        _lclose(hFile);
      }
    }
    _lopen(param_1,param_2);
  }
  else {
    if (param_2 == 0) {
      dwDesiredAccess = 0x80000000;
    }
    else {
      dwDesiredAccess = (-(uint)(param_2 != 1) & 0x80000000) + 0x40000000;
    }
    CreateFileA(param_1,dwDesiredAccess,(uint)(param_2 == 0),(LPSECURITY_ATTRIBUTES)0x0,
                3 - (param_3 != 0),0x80,(HANDLE)0x0);
  }
  return;
}


