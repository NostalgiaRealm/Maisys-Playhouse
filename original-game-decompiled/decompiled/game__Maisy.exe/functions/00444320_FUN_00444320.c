
/* ==== FUN_00444320 @ 00444320 ==== 
 * signature: undefined4 __cdecl FUN_00444320(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 00444320-00444558
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00444320(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  uint in_EAX;
  int iVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  
  if (-1 < *(short *)(param_1 + 10)) {
    return in_EAX & 0xffffff00;
  }
  DAT_004db87c = 0;
  if (DAT_004db5a0 == '\0') {
    if (((DAT_004db864 & 4) != 0) || (DAT_004db854 != param_4)) {
      iVar3 = FUN_00444c10(param_2,(short)param_3,(short)param_4);
      FUN_00444b10(param_2,param_3,param_4,iVar3);
      FUN_00442c30();
      if (DAT_004db5a0 != '\0') goto LAB_004443b9;
      FUN_004448d0(DAT_004e0250,DAT_004e0248);
    }
    if (DAT_004db5a0 == '\0') {
      FUN_00442c30();
    }
  }
LAB_004443b9:
  iVar3 = FUN_00443730();
  sVar1 = (short)iVar3;
  if ((DAT_004db5a0 != '\0') && (sVar1 != -1)) {
    _DAT_004db83c = _DAT_004db83c + 1;
    iVar3 = sVar1 * 0x3e;
    *(undefined4 *)(&DAT_004db5a4 + iVar3) = param_1[3];
    if ((HGLOBAL)*param_1 == (HGLOBAL)0x0) {
      *(undefined4 *)(&DAT_004db5a8 + iVar3) = 0;
    }
    else {
      pvVar4 = GlobalLock((HGLOBAL)*param_1);
      *(LPVOID *)(&DAT_004db5a8 + iVar3) = pvVar4;
    }
    iVar6 = (int)(short)(*(short *)((int)param_1 + 0x22) / 2 + 0x32);
    iVar5 = ((int)*(short *)((int)param_1 + 0x26) * (100 - iVar6) * 2) / 100;
    if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    *(short *)(&DAT_004db5da + iVar3) = (short)iVar5;
    iVar5 = (*(short *)((int)param_1 + 0x26) * iVar6 * 2) / 100;
    if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    *(short *)(&DAT_004db5dc + iVar3) = (short)iVar5;
    sVar2 = *(short *)((int)param_1 + 0x26);
    if (0xfe < sVar2) {
      sVar2 = 0xff;
    }
    *(short *)(&DAT_004db5d8 + iVar3) = sVar2;
    *(undefined4 *)(&DAT_004db5ac + iVar3) = param_1[5];
    *(undefined4 *)(&DAT_004db5b0 + iVar3) = param_1[4];
    *(undefined4 *)(&DAT_004db5b4 + iVar3) = param_1[6];
    *(undefined4 *)(&DAT_004db5c0 + iVar3) = param_1[7];
    *(undefined4 *)(&DAT_004db5c4 + iVar3) = param_1[7];
    *(int *)((int)&DAT_004db5b8 + iVar3) = (int)*(short *)(param_1 + 8);
    *(undefined4 *)((int)&DAT_004db5bc + iVar3) = 1;
    *(undefined4 *)((int)&DAT_004db5c8 + iVar3) = 0xffffffff;
    *(undefined4 *)((int)&DAT_004db5cc + iVar3) = 1;
    *(undefined4 *)((int)&DAT_004db5d0 + iVar3) = 1;
    (&DAT_004db5a3)[iVar3] = 1;
    *(short *)(&DAT_004db5d6 + iVar3) = (short)param_4;
    *(short *)(&DAT_004db5d4 + iVar3) = (short)param_3;
    (&DAT_004db5de)[iVar3] = 1;
    *(short *)(param_1 + 10) = sVar1;
    if (((DAT_004db84c != param_2) || (DAT_004db850 != param_3)) || (DAT_004db854 != param_4)) {
      param_2 = FUN_004445b0(param_2,param_3,param_4,(int)sVar1);
    }
    (&DAT_004db5df)[iVar3] = 0;
    return param_2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


