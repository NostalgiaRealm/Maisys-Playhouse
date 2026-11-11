
/* ==== FUN_1000efcb @ 1000efcb ==== 
 * signature: undefined FUN_1000efcb(void)
 * body: 1000efcb-1000efcf
 */

undefined4 FUN_1000efcb(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR aCStack_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_1000f180(param_2,param_3,(LPWSTR)&DAT_100172d8,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_100172d8;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_10013608 < 2) {
          uVar3 = (byte)PTR_DAT_10013618[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_1000b830((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x100172df < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = aCStack_80;
  bVar2 = false;
  uVar3 = FUN_1000f2b0(param_2,param_3,aCStack_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_1000f2b0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_1000c060(uVar3), _Source == (LPSTR)0x0)) goto LAB_1000f080;
    bVar2 = true;
    uVar3 = FUN_1000f2b0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_1000f080;
  }
  _Dest = (char *)FUN_1000c060(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_1000bff0(_Source);
    return 0;
  }
LAB_1000f080:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_1000bff0(_Source);
  return 0xffffffff;
}


