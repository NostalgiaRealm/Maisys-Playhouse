
/* ==== FUN_0041d830 @ 0041d830 ==== 
 * signature: undefined4 __cdecl FUN_0041d830(short * param_1, undefined2 * param_2, int param_3, int param_4, int param_5)
 * body: 0041d830-0041d9f6
 */

undefined4 __cdecl
FUN_0041d830(short *param_1,undefined2 *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  int *piVar6;
  undefined4 local_5c [9];
  AFX_EXCEPTION_LINK local_38 [8];
  short local_30 [3];
  short local_2a;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  byte local_18 [4];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041da22;
  *unaff_FS_OFFSET = &local_10;
  local_18[0] = 0xff;
  local_18[1] = 0xff;
  local_18[2] = 0xff;
  local_18[3] = 0;
  local_14 = &stack0xffffff98;
  local_1c = 0;
  local_1b = 0;
  local_30[0] = 0;
  local_1a = 0;
  local_30[1] = 0;
  local_19 = 0;
  local_20 = 0;
  if (*param_1 == 1) {
    local_24 = *(int *)(param_3 + 0x82);
    local_2a = param_1[4] - param_1[2];
    local_30[2] = param_1[3] - param_1[1];
    if ((DAT_004da388 != (void *)0x0) && (bVar1 = FUN_0047a230((int)DAT_004da388), bVar1 == 0)) {
      FUN_00408460(local_24);
      piVar6 = (int *)0x0;
      puVar4 = &DAT_004e1c30;
      puVar5 = local_5c;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      sVar2 = FUN_00403850(local_24);
      FUN_0047aa10(DAT_004da388,(undefined4 *)local_30,sVar2,piVar6);
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_38);
      local_8 = 1;
      FUN_0041da40(param_2,param_1 + 1);
      param_2[0x12] = (short)param_5;
      param_2[0x13] = (short)param_4;
      FUN_0041db00(DAT_004da388,local_30,local_18,(HRGN)0x0);
      OffsetRgn(*(HRGN *)(param_1 + 5),-param_5,-param_4);
      FUN_0041db00(DAT_004da388,local_30,&local_1c,*(HRGN *)(param_1 + 5));
      OffsetRgn(*(HRGN *)(param_1 + 5),param_5,param_4);
      FUN_0041dbb0((int)param_2,DAT_004da388,local_18);
      *(undefined1 *)(param_2 + 1) = 1;
      local_20 = 1;
      local_8 = 0xffffffff;
      FUN_0041da2c();
      FUN_0047b420((int)DAT_004da388);
      puVar4 = local_5c;
      puVar5 = &DAT_004e1c30;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else {
    *param_2 = 0;
    local_20 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return local_20;
}


