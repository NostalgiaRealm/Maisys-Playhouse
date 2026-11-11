
/* ==== FUN_10004d80 @ 10004d80 ==== 
 * signature: LSTATUS __cdecl FUN_10004d80(HKEY param_1, LPCSTR param_2, LPBYTE param_3, char * param_4, char * param_5, uint param_6, int param_7)
 * body: 10004d80-10004ef6
 */

LSTATUS __cdecl
FUN_10004d80(HKEY param_1,LPCSTR param_2,LPBYTE param_3,char *param_4,char *param_5,uint param_6,
            int param_7)

{
  LPBYTE lpString1;
  LSTATUS LVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CHAR *pCVar5;
  CHAR local_10c [256];
  LSTATUS local_c;
  uint local_8;
  
  if (DAT_100241e8 == 0) {
    param_6 = param_6 & 0xffff;
    if ((param_1 == (HKEY)0x0) && (*param_4 == '\0')) {
      *param_5 = '0';
      LVar1 = RegQueryValueA((HKEY)0x80000000,param_2,(LPSTR)param_3,(PLONG)&param_6);
      return LVar1;
    }
    return 1;
  }
  local_8 = param_6 & 0xffff;
  local_c = 1;
  LVar1 = RegOpenKeyExA(*(HKEY *)(&DAT_1001f160 + (int)param_1 * 4),param_2,0,1,&param_1);
  lpString1 = param_3;
  if (LVar1 != 0) {
    return local_c;
  }
  LVar1 = RegQueryValueExA(param_1,param_4,(LPDWORD)0x0,(LPDWORD)&param_2,param_3,&local_8);
  if (LVar1 == 0) {
    param_6 = 0;
    piVar2 = &DAT_1001f178;
    do {
      if ((LPCSTR)*piVar2 == param_2) break;
      param_6 = param_6 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x1001f18c);
    if (((param_7 == 0) || (param_2 != (LPCSTR)0x3)) || (local_8 != 4)) {
      *param_5 = (char)param_6 + '0';
      if (param_6 == 3) {
        wsprintfA((LPSTR)lpString1,&DAT_1001f4ac,*(undefined4 *)lpString1);
      }
      if (param_6 == 4) {
        iVar4 = 0;
        if (0 < (int)local_8) {
          pCVar5 = local_10c + 1;
          do {
            if (0x7e < iVar4) break;
            iVar3 = FUN_10004ef7((uint)(lpString1[iVar4] >> 4));
            pCVar5[-1] = (CHAR)iVar3;
            iVar3 = FUN_10004ef7(lpString1[iVar4] & 0xf);
            *pCVar5 = (CHAR)iVar3;
            iVar4 = iVar4 + 1;
            pCVar5 = pCVar5 + 2;
          } while (iVar4 < (int)local_8);
        }
        local_10c[iVar4 * 2] = '\0';
        lstrcpyA((LPSTR)lpString1,local_10c);
      }
      if (4 < (int)param_6) goto LAB_10004eb0;
    }
    else {
      *param_5 = '3';
      wsprintfA((LPSTR)lpString1,&DAT_1001f4ac,*(undefined4 *)lpString1);
    }
    local_c = 0;
  }
LAB_10004eb0:
  RegCloseKey(param_1);
  return local_c;
}


