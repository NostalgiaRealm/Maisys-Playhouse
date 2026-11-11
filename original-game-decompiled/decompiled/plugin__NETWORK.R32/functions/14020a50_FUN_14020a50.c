
/* ==== FUN_14020a50 @ 14020a50 ==== 
 * signature: uint __cdecl FUN_14020a50(wint_t * param_1, undefined4 * param_2, uint param_3, uint param_4)
 * body: 14020a50-14020c55
 */

uint __cdecl FUN_14020a50(wint_t *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  wint_t *pwVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  wint_t *pwVar8;
  uint uVar9;
  
  uVar7 = 0;
  wVar2 = *param_1;
  iVar3 = _iswctype(wVar2,8);
  pwVar1 = param_1;
  while (pwVar8 = pwVar1 + 1, iVar3 != 0) {
    wVar2 = *pwVar8;
    iVar3 = _iswctype(wVar2,8);
    pwVar1 = pwVar8;
  }
  if (wVar2 == 0x2d) {
    wVar2 = *pwVar8;
    param_4 = param_4 | 2;
    pwVar8 = pwVar1 + 2;
  }
  else if (wVar2 == 0x2b) {
    wVar2 = *pwVar8;
    pwVar8 = pwVar1 + 2;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (wVar2 == 0x30) {
      if ((*pwVar8 == 0x78) || (*pwVar8 == 0x58)) {
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (wVar2 == 0x30)) && ((*pwVar8 == 0x78 || (*pwVar8 == 0x58)))) {
    wVar2 = pwVar8[1];
    pwVar8 = pwVar8 + 2;
  }
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    iVar3 = _iswctype(wVar2,4);
    if (iVar3 == 0) {
      iVar3 = _iswctype(wVar2,0x103);
      if (iVar3 == 0) {
LAB_14020bac:
        pwVar8 = pwVar8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pwVar8 = param_1;
          }
          uVar7 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < uVar7)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < uVar7)))))))) {
          piVar5 = FUN_14021040();
          *piVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) == 0) {
              uVar7 = 0x7fffffff;
            }
            else {
              uVar7 = 0x80000000;
            }
          }
          else {
            uVar7 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pwVar8;
        }
        if ((param_4 & 2) != 0) {
          uVar7 = -uVar7;
        }
        return uVar7;
      }
      wVar2 = FUN_14021af0(wVar2);
      uVar6 = wVar2 - 0x37;
    }
    else {
      uVar6 = wVar2 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_14020bac;
    uVar9 = param_4 | 8;
    if ((uVar7 < uVar4) || ((uVar4 == uVar7 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3)))))
    {
      uVar7 = uVar7 * param_3 + uVar6;
    }
    else {
      uVar9 = param_4 | 0xc;
    }
    wVar2 = *pwVar8;
    pwVar8 = pwVar8 + 1;
    param_4 = uVar9;
  } while( true );
}


