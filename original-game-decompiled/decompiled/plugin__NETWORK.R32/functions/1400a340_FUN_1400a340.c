
/* ==== FUN_1400a340 @ 1400a340 ==== 
 * signature: undefined4 __cdecl FUN_1400a340(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1400a340-1400a4d6
 */

undefined4 __cdecl FUN_1400a340(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar2 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,param_4,(int)param_1 + 10);
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
      FUN_14008b20(0,param_4,(int)param_1 + 10);
      return 0;
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
      uVar2 = *(uint *)(param_3 + 1);
      if ((uVar2 & 0xff000000) == 0x20000000) {
        uVar2 = uVar2 & 0xffffff;
        if (uVar2 == 1) {
          *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 0x36);
          *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0x3a);
          param_4[4] = *(short *)((int)param_1 + 0x3e);
          return 0;
        }
        if (uVar2 == 2) {
          *(undefined4 *)param_4 = param_1[0x10];
          *(undefined4 *)(param_4 + 2) = param_1[0x11];
          param_4[4] = *(short *)(param_1 + 0x12);
          return 0;
        }
        if (uVar2 == 3) {
          *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 0x4a);
          *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0x4e);
          param_4[4] = *(short *)((int)param_1 + 0x52);
          return 0;
        }
      }
      else {
        if ((uVar2 & 0xff000000) != 0x80000000) {
          return 0x10000;
        }
        if ((uVar2 & 0xffffff) == 1) {
          *(undefined4 *)param_4 = *param_1;
          *(undefined4 *)(param_4 + 2) = param_1[1];
          param_4[4] = *(short *)(param_1 + 2);
          return 0;
        }
      }
    }
  }
  return 0x10000;
}


