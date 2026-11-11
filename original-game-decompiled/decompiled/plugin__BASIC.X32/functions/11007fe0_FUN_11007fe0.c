
/* ==== FUN_11007fe0 @ 11007fe0 ==== 
 * signature: undefined __cdecl FUN_11007fe0(undefined4 * param_1, int param_2, int * param_3, undefined4 param_4, undefined4 param_5, undefined * param_6)
 * body: 11007fe0-110082f0
 */

void __cdecl
FUN_11007fe0(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined *param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  HGDIOBJ h;
  uint uVar7;
  int iVar8;
  HCURSOR hCursor;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  short local_90;
  short sStack_8e;
  short sStack_8a;
  short local_88;
  short sStack_86;
  uint local_7c;
  int local_70;
  int local_60;
  undefined1 local_54 [20];
  int local_40;
  int local_38;
  uint local_34;
  ushort local_2e;
  
  sVar1 = *(short *)(param_2 + 0x22);
  iVar2 = *(int *)(param_2 + 0x24);
  if ((*(byte *)(param_3 + 8) & 2) != 0) {
    FUN_11023060(param_1,*(undefined4 *)((int)param_3 + 0x22));
  }
  if (*(HGDIOBJ *)(param_2 + 0x58) == (HGDIOBJ)0x0) {
    FUN_11012930(param_1,param_2,param_3);
    return;
  }
  h = SelectObject((HDC)*param_3,*(HGDIOBJ *)(param_2 + 0x58));
  GetObjectA(h,0x54,local_54);
  if (local_40 == 0) {
    SelectObject((HDC)*param_3,h);
    DeleteObject(*(HGDIOBJ *)(param_2 + 0x58));
    *(undefined4 *)(param_2 + 0x58) = 0;
    FUN_11012930(param_1,param_2,param_3);
    return;
  }
  iVar9 = *(int *)(param_2 + 0x38);
  uVar7 = (uint)local_2e;
  uVar3 = *(undefined4 *)param_3[5];
  uVar4 = ((undefined4 *)param_3[5])[1];
  sVar13 = (short)uVar4;
  if (local_38 <= sVar13) {
    sVar13 = (short)local_38;
  }
  sStack_8a = (short)((uint)uVar4 >> 0x10);
  iVar8 = (local_34 ^ (int)local_34 >> 0x1f) - ((int)local_34 >> 0x1f);
  if (sStack_8a <= iVar8) {
    iVar8 = (int)sStack_8a;
  }
  iVar11 = (int)uVar7 >> 3;
  uVar14 = *(int *)(param_2 + 0x34) * iVar11 + 3U & 0xfffffffc;
  uVar12 = local_38 * iVar11 + 3U & 0xfffffffc;
  sStack_8e = (short)((uint)uVar3 >> 0x10);
  if ((int)local_34 < 1) {
    local_70 = (int)sStack_8e;
    local_7c = uVar12;
  }
  else {
    local_70 = (local_34 - (int)sStack_8e) + -1;
    local_7c = -uVar12;
  }
  local_70 = local_70 * uVar12;
  local_90 = (short)uVar3;
  sStack_86 = (short)((uint)*(undefined4 *)param_3[7] >> 0x10);
  if (iVar9 < 1) {
    iVar9 = (int)sStack_86;
    local_60 = *(int *)(param_2 + 0x5c);
    uVar12 = uVar14;
  }
  else {
    local_60 = (iVar9 + -1) * uVar14 + *(int *)(param_2 + 0x5c);
    iVar9 = (iVar9 - sStack_86) + -1;
    uVar12 = -uVar14;
  }
  local_88 = (short)*(undefined4 *)param_3[7];
  iVar5 = *(int *)(param_2 + 0x5c);
  iVar10 = (int)sVar13 - (int)local_90;
  iVar8 = (int)(short)iVar8 - (int)sStack_8e;
  hCursor = SetCursor((HCURSOR)0x0);
  if ((iVar10 < 9) || (iVar8 < 9)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (*(code *)param_6)(local_40 + local_70 + iVar11 * local_90,
                               iVar5 + local_88 * iVar11 + iVar9 * uVar14,iVar10,iVar8,local_7c,
                               uVar12,(int)sVar1,iVar2 / 100000,param_3,uVar7,uVar7,param_1,local_60
                              );
  }
  SelectObject((HDC)*param_3,h);
  DeleteObject(*(HGDIOBJ *)(param_2 + 0x58));
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (cVar6 == '\0') {
    FUN_11012930(param_1,param_2,param_3);
  }
  if (hCursor != (HCURSOR)0x0) {
    SetCursor(hCursor);
  }
  return;
}


