
/* ==== FUN_14016920 @ 14016920 ==== 
 * signature: undefined4 __cdecl FUN_14016920(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 14016920-14016a3a
 */

undefined4 __cdecl FUN_14016920(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140091b0(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return uVar2;
  }
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_targetframe_14026ce8);
    if ((char)uVar1 == '\0') {
      return 0x10000;
    }
    if (*param_4 == 0x66) {
      FUN_14008b20(0,param_4,(int)param_1 + 0x36);
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
      FUN_14008b20(0,param_4,(int)param_1 + 0x36);
      return 0;
    }
    return 0x10000;
  }
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


