
/* ==== FUN_0041cf80 @ 0041cf80 ==== 
 * signature: undefined4 __fastcall FUN_0041cf80(int * param_1)
 * body: 0041cf80-0041d096
 */

undefined4 __fastcall FUN_0041cf80(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined2 uVar4;
  int iVar3;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  if ((*(byte *)(param_1 + 4) & 0x10) == 0) {
    return CONCAT22(uVar4,2);
  }
  if (*(char *)((int)param_1 + 0xf2) != '\0') {
    return CONCAT22(uVar4,2);
  }
  iVar7 = 0;
  pcVar1 = *(code **)(*param_1 + 0x15c);
  cVar2 = (*pcVar1)(0xe);
  if (cVar2 == '\0') {
    iVar6 = param_1[0x1e] - *(int *)((int)param_1 + 0x15a);
    iVar3 = DAT_004d9b68;
    if (DAT_004d9b68 <= iVar6) {
      iVar6 = DAT_004d9b68;
    }
  }
  else {
    iVar6 = param_1[0x44] - *(int *)((int)param_1 + 0x15a);
    if (DAT_004d9b68 <= iVar6) {
      iVar6 = DAT_004d9b68;
    }
    FUN_0040e0e0(param_1,param_1[0x1d] + *(int *)((int)param_1 + 0x15a));
    iVar7 = FUN_0040e180(param_1,(HPSTR)(*(int *)((int)param_1 + 0x156) +
                                        *(int *)((int)param_1 + 0x15a)),iVar6);
    iVar3 = iVar7;
  }
  *(int *)((int)param_1 + 0x15a) = *(int *)((int)param_1 + 0x15a) + iVar7;
  if (iVar7 != iVar6) {
    return CONCAT22((short)((uint)iVar3 >> 0x10),2);
  }
  cVar2 = (*pcVar1)(0xe);
  if (cVar2 == '\0') {
    if (*(int *)((int)param_1 + 0x15a) == param_1[0x1e]) {
      FUN_0041d1e0(param_1);
    }
    uVar5 = (ushort)((uint)param_1[0x1e] >> 0x10);
    iVar7 = CONCAT22(uVar5,1);
    if (*(int *)((int)param_1 + 0x15a) < param_1[0x1e]) {
      iVar7 = (uint)uVar5 << 0x10;
    }
  }
  else {
    if (*(int *)((int)param_1 + 0x15a) == param_1[0x44]) {
      FUN_0041d1e0(param_1);
    }
    uVar5 = (ushort)((uint)param_1[0x44] >> 0x10);
    iVar7 = CONCAT22(uVar5,1);
    if (*(int *)((int)param_1 + 0x15a) < param_1[0x44]) {
      return (uint)uVar5 << 0x10;
    }
  }
  return iVar7;
}


