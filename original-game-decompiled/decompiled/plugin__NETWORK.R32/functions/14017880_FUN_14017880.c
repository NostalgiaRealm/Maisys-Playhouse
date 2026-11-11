
/* ==== FUN_14017880 @ 14017880 ==== 
 * signature: undefined4 __cdecl FUN_14017880(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 14017880-14017a5a
 */

undefined4 __cdecl FUN_14017880(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  int local_4;
  
  uVar2 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar2 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,param_4,(int)param_1 + 0x36);
        return 0;
      }
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      *param_4 = 0x66;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[1] = -1;
      param_4[2] = -1;
      FUN_14008b20(0,param_4,(int)param_1 + 0x36);
      return 0;
    }
    uVar2 = FUN_14008910(param_2,(uint *)s_response_14026d3c);
    if ((char)uVar2 != '\0') {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_4);
      DAT_14028e48 = (*pcVar3)(local_4,param_4,*(undefined4 *)((int)param_1 + 0x82));
      return DAT_14028e48;
    }
    uVar2 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar2 != '\0') {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_4);
      DAT_14028e48 = (*pcVar3)(local_4,param_4,param_1[0x25]);
      return DAT_14028e48;
    }
  }
  else {
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
  return 0x10000;
}


