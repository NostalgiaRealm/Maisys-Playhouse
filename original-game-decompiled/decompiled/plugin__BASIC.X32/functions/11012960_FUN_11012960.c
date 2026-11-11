
/* ==== FUN_11012960 @ 11012960 ==== 
 * signature: undefined __cdecl FUN_11012960(undefined4 * param_1, int param_2, int * param_3)
 * body: 11012960-11012ba2
 */

void __cdecl FUN_11012960(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int xSrc;
  int mode;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  int xDest;
  DWORD DVar11;
  int yDest;
  int ySrc;
  int iVar12;
  int iVar13;
  int iVar14;
  short local_40;
  short sStack_3e;
  short sStack_3a;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_4;
  
  if (((param_3[7] != 0) && (*param_3 != 0)) && (param_3[2] != 0)) {
    if ((*(byte *)(param_3 + 8) & 2) != 0) {
      FUN_11023060(param_1,*(undefined4 *)((int)param_3 + 0x22));
    }
    uVar1 = *(undefined4 *)param_3[7];
    uVar2 = ((undefined4 *)param_3[7])[1];
    iVar13 = (int)(short)uVar2;
    local_40 = (short)uVar1;
    xSrc = (int)local_40;
    sStack_3e = (short)((uint)uVar1 >> 0x10);
    ySrc = (int)sStack_3e;
    sStack_3a = (short)((uint)uVar2 >> 0x10);
    iVar14 = (int)sStack_3a;
    sVar4 = (short)(xSrc + iVar13 >> 1);
    sVar5 = (short)(iVar14 + ySrc >> 1);
    if (*(short *)(param_2 + 0x22) == 0) {
      iVar12 = iVar13 - xSrc >> 1;
    }
    else {
      iVar12 = (int)*(short *)(param_2 + 0x22);
    }
    mode = SetStretchBltMode((HDC)param_3[2],3);
    if (1 < iVar12) {
      iVar6 = iVar14 - sVar5;
      iVar7 = ySrc - sVar5;
      iVar8 = iVar13 - sVar4;
      iVar9 = xSrc - sVar4;
      local_4 = iVar12 + -1;
      local_30 = iVar6;
      local_2c = iVar7;
      local_28 = iVar8;
      local_24 = iVar9;
      do {
        DVar10 = timeGetTime();
        iVar3 = *(int *)(param_2 + 0x24);
        FUN_110115c0(param_1);
        yDest = (int)(short)((short)(local_2c / iVar12) + sVar5);
        xDest = (int)(short)((short)(local_24 / iVar12) + sVar4);
        StretchBlt((HDC)param_3[2],xDest,yDest,(short)((short)(local_28 / iVar12) + sVar4) - xDest,
                   (short)((short)(local_30 / iVar12) + sVar5) - yDest,(HDC)*param_3,xSrc,ySrc,
                   iVar13 - xSrc,iVar14 - ySrc,0xcc0020);
        GdiFlush();
        do {
          DVar11 = timeGetTime();
        } while ((DVar11 * 6) / 100 < (DVar10 * 6) / 100 + iVar3 / 100000);
        local_30 = local_30 + iVar6;
        local_2c = local_2c + iVar7;
        local_28 = local_28 + iVar8;
        local_24 = local_24 + iVar9;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    if (mode != 0) {
      SetStretchBltMode((HDC)param_3[2],mode);
    }
    FUN_11012930(param_1,param_2,param_3);
  }
  return;
}


