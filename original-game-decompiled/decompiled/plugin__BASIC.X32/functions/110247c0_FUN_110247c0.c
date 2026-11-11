
/* ==== FUN_110247c0 @ 110247c0 ==== 
 * signature: undefined __cdecl FUN_110247c0(undefined4 * param_1, int param_2, int param_3)
 * body: 110247c0-1102496d
 */

void __cdecl FUN_110247c0(undefined4 *param_1,int param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  HBRUSH pHVar3;
  HRGN pHVar4;
  code *pcVar5;
  short *psVar6;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  pcVar5 = DeleteObject_exref;
  if ((*(short *)(param_3 + 0x10) == 1) && (*(short *)(param_2 + 0x32) != 0)) {
    pHVar3 = CreateSolidBrush((uint)*(byte *)(param_2 + 0x35) << 8 |
                              (uint)*(byte *)(param_2 + 0x34) << 0x10 |
                              (uint)*(byte *)(param_2 + 0x36));
    sVar2 = *(short *)(param_2 + 0x2c);
    if (sVar2 == 0) {
      psVar6 = *(short **)(param_3 + 4);
    }
    else {
      psVar1 = *(short **)(param_3 + 4);
      local_6 = psVar1[1] - sVar2;
      local_8 = *psVar1 - sVar2;
      local_4 = psVar1[2] + sVar2;
      psVar6 = &local_8;
      local_2 = psVar1[3] + sVar2;
    }
    pHVar4 = FUN_11024340(param_1,psVar6,param_2);
    pcVar5 = DeleteObject_exref;
    if (pHVar4 == (HRGN)0x0) {
      DeleteObject(pHVar3);
    }
    else {
      if (*(short *)(param_2 + 0x2c) < *(short *)(param_2 + 0x32)) {
        sVar2 = *(short *)(param_2 + 0x32) - *(short *)(param_2 + 0x2c);
      }
      else {
        sVar2 = 0;
      }
      OffsetRgn(pHVar4,(int)sVar2,(int)sVar2);
      FillRgn(*(HDC *)((int)param_1 + 0x22),pHVar4,pHVar3);
      pcVar5 = DeleteObject_exref;
      DeleteObject(pHVar4);
      DeleteObject(pHVar3);
    }
  }
  if ((*(short *)(param_3 + 0x10) == 3) && (*(short *)(param_2 + 0x2c) != 0)) {
    pHVar3 = CreateSolidBrush((uint)*(byte *)(param_2 + 0x2e) << 0x10 |
                              (uint)*(byte *)(param_2 + 0x2f) << 8 | (uint)*(byte *)(param_2 + 0x30)
                             );
    local_2 = *(short *)(param_2 + 0x2c);
    psVar6 = *(short **)(param_3 + 4);
    local_6 = psVar6[1] - local_2;
    local_8 = *psVar6 - local_2;
    local_4 = psVar6[2] + local_2;
    local_2 = psVar6[3] + local_2;
    pHVar4 = FUN_11024340(param_1,&local_8,param_2);
    if (pHVar4 != (HRGN)0x0) {
      FrameRgn(*(HDC *)((int)param_1 + 0x22),pHVar4,pHVar3,(int)*(short *)(param_2 + 0x2c),
               (int)*(short *)(param_2 + 0x2c));
      (*pcVar5)(pHVar4);
    }
    (*pcVar5)(pHVar3);
  }
  return;
}


