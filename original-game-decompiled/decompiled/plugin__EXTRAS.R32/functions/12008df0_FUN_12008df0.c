
/* ==== FUN_12008df0 @ 12008df0 ==== 
 * signature: undefined4 __cdecl FUN_12008df0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12008df0-12008f11
 */

undefined4 __cdecl FUN_12008df0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return uVar2;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)&DAT_12037340);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_120271d0(param_2,(uint *)s_addtoreturnlist_120372c4);
      if ((char)uVar1 != '\0') {
        *param_4 = 0x14;
        param_4[1] = (ushort)*(undefined4 *)((int)param_1 + 0x1e) & 2;
        return 0;
      }
      uVar1 = FUN_120271d0(param_2,(uint *)s_close_120372b0);
      if ((char)uVar1 != '\0') {
        *param_4 = 0x14;
        param_4[1] = (ushort)*(undefined4 *)((int)param_1 + 0x1e) & 1;
        return 0;
      }
      return 0x10000;
    }
  }
  if (*(char *)((int)param_1 + 0x22) == '\0') {
    return 0x10000;
  }
  if (*param_4 == 0x66) {
    FUN_120273e0(0,param_4,(int)param_1 + 10);
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
    FUN_120273e0(0,param_4,(int)param_1 + 10);
    return 0;
  }
  return 0x10000;
}


