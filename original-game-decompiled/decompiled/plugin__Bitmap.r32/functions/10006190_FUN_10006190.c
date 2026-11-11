
/* ==== FUN_10006190 @ 10006190 ==== 
 * signature: undefined4 __cdecl FUN_10006190(int * param_1, LPCSTR param_2)
 * body: 10006190-10006286
 */

undefined4 __cdecl FUN_10006190(int *param_1,LPCSTR param_2)

{
  int *lpBuffer;
  long lVar1;
  HFILE hFile;
  int lBytes;
  undefined4 local_18;
  int *local_14;
  CHAR local_10 [2];
  int local_e;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  
  lpBuffer = param_1;
  local_18 = 0;
  hFile = -1;
  lBytes = 0;
  FUN_10006070((int)param_1,(int *)&local_14,(int *)&param_1);
  if (param_1 != (int *)0x0) {
    if ((*(short *)((int)local_14 + 0xe) == 8) && (lBytes = local_14[8] * 4, local_14[8] == 0)) {
      lBytes = 0x400;
    }
    local_10[0] = 'B';
    local_10[1] = 'M';
    local_a = 0;
    local_8 = 0;
    local_e = local_14[5] + *local_14 + 0xe + lBytes;
    local_6 = *local_14 + 0xe + lBytes;
    hFile = _lcreat(param_2,0);
    if (hFile == -1) {
      return 0;
    }
    lVar1 = _hwrite(hFile,local_10,0xe);
    if ((((lVar1 == 0xe) && (lVar1 = _hwrite(hFile,(LPCCH)lpBuffer,*lpBuffer), lVar1 == *lpBuffer))
        && (lVar1 = _hwrite(hFile,(LPCCH)(lpBuffer + 10),lBytes), lVar1 == lBytes)) &&
       (lVar1 = _hwrite(hFile,(LPCCH)param_1,lpBuffer[5]), lVar1 == lpBuffer[5])) {
      _lclose(hFile);
      hFile = -1;
      local_18 = 1;
    }
  }
  if (hFile != -1) {
    _lclose(hFile);
  }
  return local_18;
}


