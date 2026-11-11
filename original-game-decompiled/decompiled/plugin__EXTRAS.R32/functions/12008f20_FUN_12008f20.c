
/* ==== FUN_12008f20 @ 12008f20 ==== 
 * signature: undefined4 __cdecl FUN_12008f20(undefined4 * param_1, uint * param_2, short * param_3, undefined4 * param_4)
 * body: 12008f20-12009188
 */

undefined4 __cdecl
FUN_12008f20(undefined4 *param_1,uint *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  code *pcVar2;
  int local_30;
  undefined2 local_2c;
  short sStack_2a;
  undefined4 local_26;
  int iStack_22;
  int local_1e;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    if ((param_3 != (short *)0x0) && (*param_3 == 1)) {
      if (*(int *)(param_3 + 1) != 1) {
        return 0x10000;
      }
      *param_1 = *param_4;
      param_1[1] = param_4[1];
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_4 + 2);
      return 0;
    }
    return 0x10000;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)&DAT_12037340);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_120271d0(param_2,(uint *)s_addtoreturnlist_120372c4);
      if ((char)uVar1 != '\0') {
        local_2c = 0x14;
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_30);
        DAT_12039a9c = (*pcVar2)(local_30,param_1,param_4,&local_2c);
        if (sStack_2a != 0) {
          *(uint *)((int)param_1 + 0x1e) = *(uint *)((int)param_1 + 0x1e) | 2;
          return 0;
        }
        *(uint *)((int)param_1 + 0x1e) = *(uint *)((int)param_1 + 0x1e) & 0xfffffffd;
        return 0;
      }
      uVar1 = FUN_120271d0(param_2,(uint *)s_close_120372b0);
      if ((char)uVar1 == '\0') {
        return 0x10000;
      }
      local_2c = 0x14;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_30);
      DAT_12039a9c = (*pcVar2)(local_30,param_1,param_4,&local_2c);
      if (sStack_2a != 0) {
        *(uint *)((int)param_1 + 0x1e) = *(uint *)((int)param_1 + 0x1e) | 1;
        return 0;
      }
      *(uint *)((int)param_1 + 0x1e) = *(uint *)((int)param_1 + 0x1e) & 0xfffffffe;
      return 0;
    }
  }
  local_26 = 0;
  local_1e = 0;
  local_2c = 0x66;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_30);
  DAT_12039a9c = (*pcVar2)(local_30,param_1,param_4,&local_2c);
  if (0xff < iStack_22) {
    return 0x10000;
  }
  if ((local_1e != 0) && (iStack_22 != 0)) {
    FUN_120273e0(0,(undefined2 *)((int)param_1 + 10),(int)&local_2c);
    if ((param_1[6] != 0) && (param_1[5] != 0)) {
      *(undefined1 *)(param_1[6] + param_1[5]) = 0;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_30);
    DAT_12039a9c = (*pcVar2)(local_30,local_1e);
    *(undefined1 *)((int)param_1 + 0x22) = 1;
    return 0;
  }
  return 0x10000;
}


