
/* ==== FUN_0049dcc0 @ 0049dcc0 ==== 
 * signature: undefined4 __cdecl FUN_0049dcc0(char * param_1, undefined4 * param_2, LCTYPE param_3)
 * body: 0049dcc0-0049dfbe
 */

undefined4 __cdecl FUN_0049dcc0(char *param_1,undefined4 *param_2,LCTYPE param_3)

{
  ushort extraout_AX;
  uint uVar2;
  undefined3 extraout_var;
  long lVar3;
  BOOL BVar4;
  int iVar5;
  char *_Str;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  ushort local_8c;
  ushort uStack_8a;
  ushort local_88;
  int local_84;
  LCID local_80 [32];
  LCID LVar1;
  
  local_84 = 0;
  if ((param_2 == (undefined4 *)0x0) && (param_3 == 0)) {
    return 0;
  }
  local_8c = 0;
  uStack_8a = 0;
  local_88 = 0;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (local_8c = trans_lang_lang(param_1), local_8c == 0)) {
    return 0;
  }
  if (((param_1 != (char *)0xffffffc0) && (param_1[0x40] != '\0')) &&
     (uStack_8a = trans_ctry_ctry(param_1 + 0x40), uStack_8a == 0)) {
    return 0;
  }
  if (param_1 != (char *)0xffffff80) {
    _Str = param_1 + 0x80;
    bVar8 = *_Str == '\0';
    if (!bVar8) {
      iVar5 = 4;
      pcVar6 = _Str;
      pcVar7 = "ACP";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar5 = 4;
        pcVar6 = _Str;
        pcVar7 = "OCP";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar8 = *pcVar6 == *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          local_84 = 1;
        }
        else {
          iVar5 = _atoi(_Str);
          local_88 = (ushort)iVar5;
          if (local_88 == 0) {
            return 0;
          }
        }
      }
    }
  }
  if (local_8c == 0) {
    if (uStack_8a == 0) {
      LVar1 = GetUserDefaultLCID();
      extraout_AX = (ushort)LVar1;
      local_8c = extraout_AX;
      uStack_8a = extraout_AX;
      if (local_88 == 0) {
        local_80[0] = GetUserDefaultLCID();
      }
    }
    else {
      uVar2 = FUN_0049e080(uStack_8a);
      local_8c = (ushort)uVar2;
      uStack_8a = local_8c;
      if (local_88 == 0) {
        local_80[0] = uVar2 & 0xffff;
      }
    }
  }
  else if (uStack_8a == 0) {
    uStack_8a = local_8c;
    if (local_88 == 0) {
      local_80[0] = (LCID)local_8c;
    }
  }
  else {
    bVar8 = FUN_0049e0f0(&uStack_8a,&local_8c);
    if (CONCAT31(extraout_var,bVar8) == 0) {
      return 0;
    }
    if (local_88 == 0) {
      local_80[0] = (LCID)uStack_8a;
    }
  }
  if (local_88 == 0) {
    iVar5 = ___crtGetLocaleInfoW
                      (local_80[0],(-(uint)(local_84 == 0) & 0xff9) + 0xb,(LPWSTR)local_80,0x40,0);
    if (iVar5 == 0) {
      return 0;
    }
    lVar3 = _wcstol((wchar_t *)local_80,(wchar_t **)0x0,10);
    local_88 = (ushort)lVar3;
  }
  BVar4 = IsValidCodePage((uint)local_88);
  if (BVar4 == 0) {
    return 0;
  }
  BVar4 = IsValidLocale((uint)local_8c,1);
  if (BVar4 == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = CONCAT22(uStack_8a,local_8c);
    *(ushort *)(param_2 + 1) = local_88;
  }
  if (param_3 != 0) {
    iVar5 = ___crtGetLocaleInfoA
                      ((_locale_t)(uint)local_8c,(LPCWSTR)&DAT_00001001,param_3,&DAT_00000040,0);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = ___crtGetLocaleInfoA
                      ((_locale_t)(uint)uStack_8a,(LPCWSTR)&DAT_00001002,param_3 + 0x40,
                       &DAT_00000040,0);
    if (iVar5 == 0) {
      return 0;
    }
    FUN_004a0ec0((uint)local_88,(char *)(param_3 + 0x80),10);
  }
  return 1;
}


