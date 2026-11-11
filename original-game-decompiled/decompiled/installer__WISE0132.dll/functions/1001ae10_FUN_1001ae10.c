
/* ==== FUN_1001ae10 @ 1001ae10 ==== 
 * signature: undefined4 __cdecl FUN_1001ae10(int param_1, LCID param_2, LCTYPE param_3, char * param_4)
 * body: 1001ae10-1001afbb
 */

undefined4 __cdecl FUN_1001ae10(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_1001b580(param_2,param_3,(LPWSTR)&DAT_100237e0,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_100237e0;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_10015ac0((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x100237e7 < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_1001b6b0(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_1001b6b0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_10015d50(uVar3), _Source == (LPSTR)0x0)) goto LAB_1001aec0;
    bVar2 = true;
    uVar3 = FUN_1001b6b0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_1001aec0;
  }
  _Dest = (char *)FUN_10015d50(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_10015a50(_Source);
    return 0;
  }
LAB_1001aec0:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_10015a50(_Source);
  return 0xffffffff;
}


