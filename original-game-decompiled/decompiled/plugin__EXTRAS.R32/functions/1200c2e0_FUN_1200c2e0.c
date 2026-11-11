
/* ==== FUN_1200c2e0 @ 1200c2e0 ==== 
 * signature: uint __cdecl FUN_1200c2e0(int param_1)
 * body: 1200c2e0-1200c523
 */

uint __cdecl FUN_1200c2e0(int param_1)

{
  double dVar1;
  bool bVar2;
  uint3 uVar3;
  code *pcVar4;
  undefined2 uVar6;
  int iVar5;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  int iStack_4;
  
  local_2c = (double)CONCAT44(local_2c._4_4_,(int)*(short *)(param_1 + 0x18));
  local_14 = (double)(int)*(short *)(param_1 + 0x16) - *(double *)(param_1 + 0x8c);
  local_c = (double)(int)*(short *)(param_1 + 0x18) - *(double *)(param_1 + 0x94);
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0xc),1,0xe,(int *)&local_24);
  DAT_12039a9c = (*pcVar4)(local_24._0_4_,&local_1c,local_14 * local_14 + local_c * local_c);
  local_24 = 1.0;
  iVar5 = DAT_12039a9c;
  if ((*(ushort *)(param_1 + 0x1a) & 2) == 0) {
LAB_1200c3aa:
    if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) goto LAB_1200c3f1;
    bVar2 = 0.8 < *(double *)(param_1 + 0xa6);
    uVar6 = (undefined2)((uint)iVar5 >> 0x10);
    iVar5 = (uint)CONCAT21(uVar6,bVar2) << 8;
    if (!bVar2) goto LAB_1200c3f1;
    local_24 = (1.0 - *(double *)(param_1 + 0xa6)) / 0.2;
    bVar2 = 0.05 < local_24;
    uVar3 = CONCAT21(uVar6,bVar2);
  }
  else {
    bVar2 = *(double *)(param_1 + 0xa6) < 0.2;
    uVar6 = (undefined2)((uint)DAT_12039a9c >> 0x10);
    iVar5 = (uint)CONCAT21(uVar6,bVar2) << 8;
    if (!bVar2) goto LAB_1200c3aa;
    local_24 = *(double *)(param_1 + 0xa6) / 0.2;
    bVar2 = 0.05 < local_24;
    uVar3 = CONCAT21(uVar6,bVar2);
  }
  iVar5 = (uint)uVar3 << 8;
  if (!bVar2) {
    local_24 = 0.05;
  }
LAB_1200c3f1:
  if (*(int *)(param_1 + 0x3a) == 0) {
    pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,0xe,&iStack_4);
    iVar5 = (*pcVar4)(iStack_4,&local_2c);
    dVar1 = *(double *)(param_1 + 0x9e);
    DAT_12039a9c = iVar5;
    *(double *)(param_1 + 0x9e) = local_2c * 0.001;
    local_24 = *(double *)(param_1 + 0x22) * local_24 * (local_2c * 0.001 - dVar1) * 0.001;
  }
  else {
    local_24 = (*(double *)(param_1 + 0x22) / (double)*(int *)(param_1 + 0x36)) * local_24;
  }
  if ((*(double *)(param_1 + 0xa6) < 1.0) && (0.0 < local_1c)) {
    dVar1 = local_1c / (1.0 - *(double *)(param_1 + 0xa6));
    *(double *)(param_1 + 0xa6) = ((dVar1 - local_1c) + local_24) / dVar1;
  }
  if ((0.5 < local_1c) && (local_24 < local_1c)) {
    *(double *)(param_1 + 0x8c) = local_14 * (local_24 / local_1c) + *(double *)(param_1 + 0x8c);
    *(double *)(param_1 + 0x94) = (local_24 / local_1c) * local_c + *(double *)(param_1 + 0x94);
    return CONCAT22((short)((uint)iVar5 >> 0x10),
                    (ushort)(local_24 < local_1c) << 8 |
                    (ushort)(NAN(local_24) || NAN(local_1c)) << 10 |
                    (ushort)(local_24 == local_1c) << 0xe);
  }
  *(double *)(param_1 + 0x8c) = (double)(int)*(short *)(param_1 + 0x16);
  *(double *)(param_1 + 0x94) = (double)(int)*(short *)(param_1 + 0x18);
  return CONCAT31((int3)(char)((ushort)*(short *)(param_1 + 0x16) >> 8),1);
}


