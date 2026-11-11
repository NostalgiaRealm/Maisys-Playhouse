
/* ==== FUN_1101b705 @ 1101b705 ==== 
 * signature: ulonglong __fastcall FUN_1101b705(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 * param_5, short * param_6, int param_7)
 * body: 1101b705-1101b707
 */

ulonglong __fastcall
FUN_1101b705(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 *param_5,short *param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined1 uVar8;
  undefined2 uVar12;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint unaff_EBX;
  int iVar13;
  uint unaff_EBP;
  uint *unaff_ESI;
  uint *unaff_EDI;
  ulonglong uVar14;
  undefined2 uVar7;
  
  uVar9 = *unaff_ESI;
  uVar4 = *unaff_ESI;
  *unaff_ESI = uVar4 + unaff_EBP + 1;
  uVar7 = (undefined2)((uint)param_1 >> 0x10);
  puVar5 = (uint *)CONCAT22(uVar7,CONCAT11(1,(char)param_1));
  uVar4 = (uint)(CARRY4(uVar9,unaff_EBP) || 0xfffffffe < uVar4 + unaff_EBP);
  iVar13 = unaff_EBX + (int)unaff_EDI + uVar4;
  uVar12 = (undefined2)((uint)param_2 >> 0x10);
  uVar8 = (undefined1)param_2;
  piVar1 = (int *)(iVar13 + -0x4b);
  *piVar1 = (int)(&stack0x00000000 +
                 (uint)(CARRY4(unaff_EBX,(uint)unaff_EDI) ||
                       CARRY4(unaff_EBX + (int)unaff_EDI,uVar4)) + *piVar1);
  *puVar5 = *puVar5 + CONCAT22(uVar12,CONCAT11(1,uVar8));
  uVar9 = CONCAT22(uVar12,CONCAT11(*(undefined1 *)(unaff_EBP + 0xb6fb1101),uVar8));
  uVar4 = *puVar5;
  *puVar5 = *puVar5 + uVar9;
  uVar10 = CONCAT22(uVar12,CONCAT11(1,uVar8));
  puVar5 = (uint *)((int)unaff_EDI + -0xfeefe4b);
  uVar2 = (uint)CARRY4(uVar4,uVar9);
  uVar4 = *puVar5;
  uVar9 = *puVar5;
  *puVar5 = uVar9 + (int)unaff_EDI + uVar2;
  puVar5 = (uint *)CONCAT22(uVar7,CONCAT11(1,(char)param_1));
  uVar9 = (uint)(CARRY4(uVar4,(uint)unaff_EDI) || CARRY4(uVar9 + (int)unaff_EDI,uVar2));
  uVar4 = *unaff_EDI;
  uVar2 = *unaff_EDI + uVar10;
  *unaff_EDI = uVar2 + uVar9;
  uVar2 = (uint)(CARRY4(uVar4,uVar10) || CARRY4(uVar2,uVar9));
  uVar4 = *unaff_ESI;
  uVar9 = *unaff_ESI;
  *unaff_ESI = uVar9 + (int)unaff_EDI + uVar2;
  uVar10 = CONCAT22(uVar12,CONCAT11(1,uVar8));
  *(int *)(unaff_EBP - 0x4a) =
       (int)(&stack0x00000000 +
            (uint)(CARRY4(uVar4,(uint)unaff_EDI) || CARRY4(uVar9 + (int)unaff_EDI,uVar2)) +
            *(int *)(unaff_EBP - 0x4a));
  uVar4 = *puVar5;
  *puVar5 = *puVar5 + uVar10;
  uVar4 = (uint)CARRY4(uVar4,uVar10);
  iVar6 = (int)puVar5 * 2 + uVar4;
  piVar1 = (int *)(iVar13 + 0x53042444);
  *piVar1 = *piVar1 + iVar6 +
            (uint)(CARRY4((uint)puVar5,(uint)puVar5) || CARRY4((int)puVar5 * 2,uVar4));
  uVar14 = FUN_11019c00(iVar6,CONCAT22(uVar12,CONCAT11(1,uVar8)),unaff_EDI,param_6);
  if ((short)uVar14 == 0) {
    *param_5 = 1;
    if (param_7 != 3) {
      return CONCAT44((int)(uVar14 >> 0x20),CONCAT22((short)(uVar14 >> 0x10),0xffec));
    }
    if (DAT_11036540 != 0) {
      DAT_11036540 = 0;
      DVar3 = GetTickCount();
      FUN_11029090(DVar3);
    }
    uVar4 = _rand();
    iVar6 = _rand();
    iVar13 = _rand();
    uVar14 = (ulonglong)(uVar4 & 3 | iVar6 << 2 | iVar13 << 0x11) % 0x7fffffff;
    iVar6 = *(int *)(param_6 + 1);
    if (0 < iVar6) {
      uVar11 = (undefined4)((longlong)uVar14 % (longlong)iVar6);
      *(undefined4 *)(param_5 + 1) = uVar11;
      return (ulonglong)
             CONCAT42(uVar11,(short)((ulonglong)((longlong)uVar14 / (longlong)iVar6) >> 0x10)) <<
             0x10;
    }
    if (iVar6 < 0) {
      iVar13 = -(int)((longlong)uVar14 % (longlong)iVar6);
      *(int *)(param_5 + 1) = iVar13;
      return (ulonglong)
             CONCAT42(iVar13,(short)((ulonglong)((longlong)uVar14 / (longlong)iVar6) >> 0x10)) <<
             0x10;
    }
    *(undefined4 *)(param_5 + 1) = 0;
    uVar14 = (ulonglong)CONCAT42((int)uVar14,(short)(uVar14 >> 0x10)) << 0x10;
  }
  return uVar14;
}


