
/* ==== FUN_1200c030 @ 1200c030 ==== 
 * signature: undefined4 __cdecl FUN_1200c030(int param_1)
 * body: 1200c030-1200c2d8
 */

undefined4 __cdecl FUN_1200c030(int param_1)

{
  double *pdVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  undefined2 extraout_var;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  double local_58;
  double dStack_48;
  double dStack_38;
  int local_30;
  undefined4 uStack_2c;
  double dStack_28;
  double local_20;
  double dStack_18;
  double local_10;
  double local_8;
  
  bVar5 = true;
  dVar2 = *(double *)(param_1 + 0x2c) * 1000.0;
  local_10 = (double)(int)*(short *)(param_1 + 0x16) - *(double *)(param_1 + 0x8c);
  local_8 = (double)(int)*(short *)(param_1 + 0x18) - *(double *)(param_1 + 0x94);
  pcVar8 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0xc),1,0xe,&local_30);
  DAT_12039a9c = (*pcVar8)(local_30,&local_20,local_10 * local_10 + local_8 * local_8);
  pcVar8 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,0xe,(int *)&dStack_38);
  DAT_12039a9c = (*pcVar8)(dStack_38._0_4_);
  dStack_28 = dStack_48 * 0.001;
  uStack_2c = *(undefined4 *)(param_1 + 0xa2);
  local_30 = *(int *)(param_1 + 0x9e);
  dVar6 = *(double *)(param_1 + 0x9e);
  dVar4 = dVar2 - (dStack_28 - *(double *)(param_1 + 0xae));
  *(double *)(param_1 + 0x9e) = dStack_28;
  iVar9 = CONCAT22((short)((ulonglong)dStack_28 >> 0x30),
                   (ushort)(dVar4 < 0.0) << 8 | (ushort)NAN(dVar4) << 10 |
                   (ushort)(dVar4 == 0.0) << 0xe);
  if (dVar4 < 0.0 == 0 && (dVar4 == 0.0) == 0) {
    pdVar1 = (double *)(param_1 + 0xae);
    dVar7 = *pdVar1;
    dVar4 = *pdVar1;
    if ((*(ushort *)(param_1 + 0x1a) & 2) == 0) {
      local_58 = 0.0;
    }
    else {
      local_58 = dVar2 * 0.2;
    }
    dStack_18 = *pdVar1 + local_58;
    local_58 = dVar2;
    if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
      local_58 = dVar2 * 0.8;
    }
    dStack_38 = *pdVar1 + local_58;
    fVar10 = FUN_1200bfa0(dVar6,*pdVar1,dStack_18,dStack_38,dVar4 + dVar2);
    fVar3 = (float10)local_20;
    fVar11 = FUN_1200bfa0(dStack_28,dVar7,dStack_18,dStack_38,dVar4 + dVar2);
    dVar2 = (double)((float10)local_20 - fVar11 * (float10)(double)(fVar3 / fVar10));
    iVar9 = CONCAT22(extraout_var,
                     (ushort)(local_20 < 0.5) << 8 | (ushort)NAN(local_20) << 10 |
                     (ushort)(local_20 == 0.5) << 0xe);
    if ((local_20 < 0.5 == 0 && (local_20 == 0.5) == 0) &&
       (iVar9 = CONCAT22(extraout_var,
                         (ushort)(dVar2 < local_20) << 8 |
                         (ushort)(NAN(dVar2) || NAN(local_20)) << 10 |
                         (ushort)(dVar2 == local_20) << 0xe), dVar2 < local_20 != 0)) {
      bVar5 = false;
      *(double *)(param_1 + 0x8c) = local_10 * (dVar2 / local_20) + *(double *)(param_1 + 0x8c);
      *(double *)(param_1 + 0x94) = (dVar2 / local_20) * local_8 + *(double *)(param_1 + 0x94);
    }
  }
  if (bVar5) {
    iVar9 = (int)*(short *)(param_1 + 0x16);
    *(double *)(param_1 + 0x8c) = (double)iVar9;
    *(double *)(param_1 + 0x94) = (double)(int)*(short *)(param_1 + 0x18);
  }
  return CONCAT31((int3)((uint)iVar9 >> 8),bVar5);
}


