
/* ==== FUN_00419310 @ 00419310 ==== 
 * signature: undefined4 __fastcall FUN_00419310(int * param_1)
 * body: 00419310-00419623
 */

undefined4 __fastcall FUN_00419310(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  bool bVar9;
  longlong lVar10;
  
  iVar7 = *(int *)((int)param_1 + 0x156);
  bVar2 = false;
  bVar9 = false;
  if ((((*(byte *)((int)param_1 + 0x29) & 1) != 0) || (param_1[0x25] == 0)) ||
     (DVar5 = timeGetTime(), DVar5 < (uint)param_1[0x26])) goto LAB_0041960d;
  if (*(int *)((int)param_1 + 0x14e) == *(int *)((int)param_1 + 0x152)) {
    bVar2 = false;
    if ((*(byte *)(param_1 + 0x57) & 1) == 0) {
      cVar4 = (**(code **)(*param_1 + 0x484))();
      if (cVar4 == '\0') goto LAB_00419596;
      if (*(int *)((int)param_1 + 0x16a) == 0) goto LAB_0041958a;
LAB_00419584:
      bVar9 = true;
    }
    else {
      cVar4 = (**(code **)(*param_1 + 0x484))();
      if (cVar4 == '\0') {
LAB_00419596:
        bVar2 = true;
      }
      else {
        if (*(int *)((int)param_1 + 0x16a) != 0) goto LAB_00419584;
LAB_0041958a:
        *(undefined4 *)((int)param_1 + 0x16a) = 1;
      }
    }
    if (bVar9) {
      *(uint *)((int)param_1 + 0x8e) = *(uint *)((int)param_1 + 0x8e) | 0x40;
    }
    *(uint *)((int)param_1 + 0x8e) = *(uint *)((int)param_1 + 0x8e) | 0x80;
    FUN_00419670(param_1,*(undefined4 *)((int)param_1 + 0x156));
    if (bVar9) {
      (**(code **)(*param_1 + 0x240))(0x324,0,0);
    }
    iVar6 = *param_1;
    (**(code **)(iVar6 + 0x240))(0x325,0,0);
    DVar5 = timeGetTime();
    *(DWORD *)((int)param_1 + 0x166) = DVar5;
    if (bVar2) {
      (**(code **)(iVar6 + 0x148))(1);
    }
  }
  else {
    iVar6 = (int)(100000000 / (longlong)param_1[0x25]);
    pcVar1 = *(code **)(*param_1 + 0x49c);
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') {
      param_1[0x26] = param_1[0x26] + iVar6;
    }
    else {
      DVar5 = timeGetTime();
      param_1[0x26] = DVar5 + iVar6;
    }
    if ((*(byte *)(param_1 + 0x57) & 1) == 0) {
      iVar6 = *(int *)((int)param_1 + 0x156);
      if (*(int *)((int)param_1 + 0x14e) < iVar6) {
        sVar8 = -1;
        bVar9 = *(int *)((int)param_1 + 0x152) == iVar6;
        sVar3 = -1;
        if (iVar6 - *(int *)((int)param_1 + 0x14e) == 1) goto LAB_00419464;
      }
      else {
        cVar4 = (**(code **)(*param_1 + 0x484))();
        if (cVar4 == '\0') {
          sVar8 = 0;
          (**(code **)(*param_1 + 0x148))(1);
        }
        else {
          sVar8 = 0;
          bVar9 = true;
          *(undefined4 *)((int)param_1 + 0x156) = *(undefined4 *)((int)param_1 + 0x152);
        }
      }
    }
    else {
      iVar6 = *(int *)((int)param_1 + 0x156);
      if (iVar6 < *(int *)((int)param_1 + 0x152)) {
        sVar8 = 1;
        bVar9 = *(int *)((int)param_1 + 0x14e) == iVar6;
        sVar3 = 1;
        if (iVar6 - *(int *)((int)param_1 + 0x152) == -1) {
LAB_00419464:
          sVar8 = sVar3;
          bVar2 = true;
        }
      }
      else {
        cVar4 = (**(code **)(*param_1 + 0x484))();
        if (cVar4 == '\0') {
          sVar8 = 0;
          (**(code **)(*param_1 + 0x148))(1);
        }
        else {
          sVar8 = 0;
          bVar9 = true;
          *(undefined4 *)((int)param_1 + 0x156) = *(undefined4 *)((int)param_1 + 0x14e);
        }
      }
    }
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') {
      timeGetTime();
      lVar10 = __ftol();
      *(short *)((int)param_1 + 0x16e) = (short)lVar10 - sVar8;
    }
    iVar6 = (int)sVar8 + *(int *)((int)param_1 + 0x156);
    *(int *)((int)param_1 + 0x156) = iVar6;
    if (bVar9) {
      *(uint *)((int)param_1 + 0x8e) = *(uint *)((int)param_1 + 0x8e) | 0x40;
    }
    if (bVar2) {
      *(uint *)((int)param_1 + 0x8e) = *(uint *)((int)param_1 + 0x8e) | 0x80;
    }
    FUN_00419670(param_1,iVar6);
    if (bVar9) {
      (**(code **)(*param_1 + 0x240))(0x324,0,0);
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x240))(0x325,0,0);
      DVar5 = timeGetTime();
      *(DWORD *)((int)param_1 + 0x166) = DVar5;
    }
  }
  *(uint *)((int)param_1 + 0x8e) = *(uint *)((int)param_1 + 0x8e) & 0xffffff3f;
LAB_0041960d:
  iVar7 = *(int *)((int)param_1 + 0x156) - iVar7;
  return CONCAT31((int3)((uint)iVar7 >> 8),'\x01' - (iVar7 == 0));
}


