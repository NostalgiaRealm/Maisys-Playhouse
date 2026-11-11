
/* ==== FUN_1400e3b0 @ 1400e3b0 ==== 
 * signature: int __cdecl FUN_1400e3b0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1400e3b0-1400e642
 */

int __cdecl FUN_1400e3b0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar2 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar2 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,param_4,(int)param_1 + 10);
        return 0;
      }
      if (*param_4 == 0x6a) {
        *param_4 = 0x66;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[8] = 0;
        param_4[1] = -1;
        param_4[2] = -1;
        FUN_14008b20(0,param_4,(int)param_1 + 10);
        return 0;
      }
      return 0x10000;
    }
    uVar2 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_14008910(param_2,(uint *)s_stripheader_14026740);
      if ((char)uVar2 != '\0') {
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0xd,(int *)&local_14);
        DAT_14028e48 = (*pcVar4)(CONCAT22(uStack_12,local_14),param_4,
                                 *(undefined1 *)((int)param_1 + 0xa9));
        return DAT_14028e48;
      }
      iVar3 = 0x10000;
    }
    else {
      local_14 = 0x66;
      uStack_12 = 0xffff;
      uStack_10 = 0xffff;
      local_e = 0;
      local_a = 0;
      local_6 = 0;
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
      iVar3 = (*pcVar4)(local_18,param_1,param_4,&local_14);
      DAT_14028e48 = iVar3;
      if (iVar3 == 0) {
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
        DAT_14028e48 = (*pcVar4)(local_18,param_1,(undefined2 *)((int)param_1 + 0x8a));
        FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x8a),(int)&local_14);
        if (local_6 != 0) {
          pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
          DAT_14028e48 = (*pcVar4)(local_18,local_6);
        }
        return 0;
      }
    }
  }
  else {
    iVar3 = 0x10000;
    if ((param_3 == (short *)0x0) || (*param_3 != 1)) {
      return 0x10000;
    }
    sVar1 = *param_4;
    if ((sVar1 == 0x17) || (sVar1 == 0x6a)) {
      if (sVar1 == 0x6a) {
        *param_4 = 0x17;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
      }
      if (((*(uint *)(param_3 + 1) & 0xff000000) == 0x80000000) &&
         ((*(uint *)(param_3 + 1) & 0xffffff) == 1)) {
        *(undefined4 *)param_4 = *param_1;
        *(undefined4 *)(param_4 + 2) = param_1[1];
        param_4[4] = *(short *)(param_1 + 2);
        return 0;
      }
    }
  }
  return iVar3;
}


