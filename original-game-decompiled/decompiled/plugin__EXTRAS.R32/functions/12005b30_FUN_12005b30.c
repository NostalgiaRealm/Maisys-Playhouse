
/* ==== FUN_12005b30 @ 12005b30 ==== 
 * signature: int __cdecl FUN_12005b30(undefined4 * param_1, uint * param_2, int param_3, undefined4 * param_4)
 * body: 12005b30-12005de2
 */

int __cdecl FUN_12005b30(undefined4 *param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte local_35;
  int local_34;
  int local_30;
  undefined2 local_2c [3];
  undefined4 local_26;
  int iStack_22;
  int local_1e;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
    if ((char)uVar1 != '\0') {
      local_26 = 0;
      local_1e = 0;
      local_2c[0] = 0x66;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_34);
      DAT_12039a9c = (*pcVar2)(local_34,param_1,param_4,local_2c);
      if (0xff < iStack_22) {
        return 0x10000;
      }
      if ((local_1e != 0) && (iStack_22 != 0)) {
        FUN_120273e0(0,(undefined2 *)((int)param_1 + 10),(int)local_2c);
        if ((param_1[6] != 0) && (param_1[5] != 0)) {
          *(undefined1 *)(param_1[6] + param_1[5]) = 0;
        }
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_34);
        DAT_12039a9c = (*pcVar2)(local_34,local_1e);
        *(undefined1 *)(param_1 + 7) = 1;
        return 0;
      }
      return 0x10000;
    }
    uVar1 = FUN_120271d0(param_2,(uint *)s_background_1203719c);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_120271d0(param_2,(uint *)&DAT_12037188);
      if ((char)uVar1 == '\0') {
        iVar4 = 0x10000;
      }
      else {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0xc,&local_34);
        pbVar6 = &local_35;
        uVar3 = FUN_12027340((int)param_1);
        iVar4 = (*pcVar2)(local_34,param_4,uVar3,pbVar6);
        DAT_12039a9c = iVar4;
        if (iVar4 == 0) {
          *(undefined2 *)((int)param_1 + 0x2a) = 0x14;
          *(ushort *)(param_1 + 0xb) = (ushort)local_35;
          return 0;
        }
      }
    }
    else {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0xc,&local_34);
      pbVar6 = &local_35;
      uVar3 = FUN_12027340((int)param_1);
      iVar4 = (*pcVar2)(local_34,param_4,uVar3,pbVar6);
      DAT_12039a9c = iVar4;
      if (iVar4 == 0) {
        *(uint *)((int)param_1 + 0x26) = (uint)(local_35 == 0);
        return 0;
      }
    }
  }
  else {
    if (param_3 == 0) {
      return 0x40005;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,5,&local_34);
    piVar5 = &local_30;
    uVar3 = FUN_12027340((int)param_1);
    iVar4 = (*pcVar2)(local_34,param_3,uVar3,piVar5);
    DAT_12039a9c = iVar4;
    if (iVar4 == 0) {
      if (local_30 != 1) {
        return 0x10000;
      }
      *param_1 = *param_4;
      param_1[1] = param_4[1];
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_4 + 2);
      return 0;
    }
  }
  return iVar4;
}


