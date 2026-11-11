
/* ==== FUN_10007960 @ 10007960 ==== 
 * signature: undefined __cdecl FUN_10007960(undefined4 param_1, LPSTR param_2)
 * body: 10007960-100079ef
 */

void __cdecl FUN_10007960(undefined4 param_1,LPSTR param_2)

{
  HFILE hFile;
  int hFile_00;
  int iVar1;
  CHAR local_100 [256];
  
  FUN_100078f0(local_100);
  iVar1 = 0;
  do {
    wsprintfA(param_2,s__s__s_03d_bmp_100131ac,local_100,param_1,iVar1);
    hFile = _lopen(param_2,0);
    if (hFile == -1) {
      hFile_00 = _lcreat(param_2,0);
      break;
    }
    _lclose(hFile);
    hFile_00 = -1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1000);
  if (hFile_00 != -1) {
    _lclose(hFile_00);
    return;
  }
  *param_2 = '\0';
  return;
}


