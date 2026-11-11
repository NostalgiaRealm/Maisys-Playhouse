
/* ==== FUN_00408be3 @ 00408be3 ==== 
 * signature: undefined4 __cdecl FUN_00408be3(LPCSTR param_1)
 * body: 00408be3-00408c85
 */

undefined4 __cdecl FUN_00408be3(LPCSTR param_1)

{
  HFILE hFile;
  CHAR local_10c [256];
  LONG local_c;
  undefined4 local_8;
  
  lstrcpyA(local_10c,param_1);
  FUN_00408a39(local_10c,0);
  local_8 = 0;
  if (DAT_00413834 != 0) {
    hFile = _lopen(param_1,0);
    if (-1 < hFile) {
      _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
      if (param_1._2_2_ == 0x5a4d) {
        _llseek(hFile,0x3c,0);
        _lread(hFile,&local_c,4);
        _llseek(hFile,local_c,0);
        _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
        if (param_1._2_2_ == 0x4550) {
          local_8 = 1;
        }
      }
      _lclose(hFile);
    }
  }
  return local_8;
}


