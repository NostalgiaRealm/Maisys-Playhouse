
/* ==== FUN_10010bdf @ 10010bdf ==== 
 * signature: undefined __cdecl FUN_10010bdf(LPCSTR param_1, LPCSTR param_2, int param_3, char param_4)
 * body: 10010bdf-10010cf8
 */

void __cdecl FUN_10010bdf(LPCSTR param_1,LPCSTR param_2,int param_3,char param_4)

{
  int iVar1;
  char *pcVar2;
  char local_350 [256];
  byte local_250;
  CHAR aCStack_10b [263];
  
  iVar1 = FUN_100120c5(param_1,0x17,local_350);
  while ((iVar1 == 0 && (DAT_10023cc0 == '\0'))) {
    if ((local_250 & 0x10) == 0) {
      iVar1 = lstrcmpiA(local_350,param_2);
      if (iVar1 == 0) {
        lstrcpyA(&DAT_10023cc0,param_1);
        pcVar2 = local_350;
        iVar1 = lstrlenA(&DAT_10023cc0);
        lstrcpyA((LPSTR)(iVar1 + 0x10023cbd),pcVar2);
        return;
      }
    }
    else if (((local_350[0] != '.') && (param_3 != 0)) &&
            ((DAT_10024194 == 0 || ((byte)(param_4 + 1U) < DAT_10024194)))) {
      lstrcpyA(aCStack_10b + 3,param_1);
      pcVar2 = local_350;
      iVar1 = lstrlenA(aCStack_10b + 3);
      lstrcpyA(aCStack_10b + iVar1,pcVar2);
      lstrcatA(aCStack_10b + 3,&DAT_1001f568);
      FUN_10010bdf(aCStack_10b + 3,param_2,param_3,param_4 + 1U);
    }
    iVar1 = FUN_100121d4(local_350);
  }
  FUN_1001221a((int)local_350);
  return;
}


