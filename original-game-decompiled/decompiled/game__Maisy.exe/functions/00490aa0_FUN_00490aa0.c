
/* ==== FUN_00490aa0 @ 00490aa0 ==== 
 * signature: uint __cdecl FUN_00490aa0(byte * param_1, undefined4 * param_2, uint param_3, uint param_4)
 * body: 00490aa0-00490ce5
 */

uint __cdecl FUN_00490aa0(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  
  bVar6 = *param_1;
  uVar7 = 0;
  pbVar1 = param_1;
  while( true ) {
    pbVar8 = pbVar1 + 1;
    if (DAT_004de8cc < 2) {
      uVar2 = *(ushort *)(PTR_DAT_004de6c0 + (uint)bVar6 * 2) & 8;
    }
    else {
      uVar2 = __isctype((uint)bVar6,8);
    }
    if (uVar2 == 0) break;
    bVar6 = *pbVar8;
    pbVar1 = pbVar8;
  }
  if (bVar6 == 0x2d) {
    bVar6 = *pbVar8;
    param_4 = param_4 | 2;
    pbVar8 = pbVar1 + 2;
  }
  else if (bVar6 == 0x2b) {
    bVar6 = *pbVar8;
    pbVar8 = pbVar1 + 2;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar6 == 0x30) {
      if ((*pbVar8 == 0x78) || (*pbVar8 == 0x58)) {
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
  if (((param_3 == 0x10) && (bVar6 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    bVar6 = pbVar8[1];
    pbVar8 = pbVar8 + 2;
  }
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if (DAT_004de8cc < 2) {
      uVar3 = *(ushort *)(PTR_DAT_004de6c0 + (uint)bVar6 * 2) & 4;
    }
    else {
      uVar3 = __isctype((uint)bVar6,4);
    }
    if (uVar3 == 0) {
      if (DAT_004de8cc < 2) {
        uVar3 = *(ushort *)(PTR_DAT_004de6c0 + (uint)bVar6 * 2) & 0x103;
      }
      else {
        uVar3 = __isctype((uint)bVar6,0x103);
      }
      if (uVar3 == 0) {
LAB_00490c3e:
        pbVar8 = pbVar8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar8 = param_1;
          }
          uVar7 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < uVar7)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < uVar7)))))))) {
          piVar5 = FUN_0048f9d0();
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
          *param_2 = pbVar8;
        }
        if ((param_4 & 2) != 0) {
          uVar7 = -uVar7;
        }
        return uVar7;
      }
      iVar4 = _toupper((int)(char)bVar6);
      uVar3 = iVar4 - 0x37;
    }
    else {
      uVar3 = (int)(char)bVar6 - 0x30;
    }
    if (param_3 <= uVar3) goto LAB_00490c3e;
    if ((uVar7 < uVar2) || ((uVar2 == uVar7 && (uVar3 <= (uint)(0xffffffff % (ulonglong)param_3)))))
    {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 * param_3 + uVar3;
      param_4 = param_4 | 8;
    }
    else {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      param_4 = param_4 | 0xc;
    }
  } while( true );
}


