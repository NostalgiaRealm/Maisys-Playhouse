
/* ==== FUN_13001890 @ 13001890 ==== 
 * signature: undefined4 __cdecl FUN_13001890(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 13001890-1300199f
 */

undefined4 __cdecl FUN_13001890(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_130038f0(param_2,(uint *)s_events_1300804c);
  if ((char)uVar2 == '\0') {
    return 0x10000;
  }
  sVar1 = *param_4;
  if ((((sVar1 != 0x17) && (sVar1 != 0x6a)) || (param_3 == (short *)0x0)) || (*param_3 != 1)) {
    return 0x10000;
  }
  if ((((*(uint *)(param_3 + 1) & 0xff000000) != 0x80000000) ||
      (uVar2 = *(uint *)(param_3 + 1) & 0xffffff, uVar2 == 0)) || (3 < uVar2)) {
    return 0x10000;
  }
  if (sVar1 == 0x6a) {
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    *param_4 = 0x17;
  }
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 10);
      *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0xe);
      param_4[4] = *(short *)((int)param_1 + 0x12);
      return 0;
    }
    if (uVar2 != 3) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = param_1[5];
    *(undefined4 *)(param_4 + 2) = param_1[6];
    param_4[4] = *(short *)(param_1 + 7);
    return 0;
  }
  *(undefined4 *)param_4 = *param_1;
  *(undefined4 *)(param_4 + 2) = param_1[1];
  param_4[4] = *(short *)(param_1 + 2);
  return 0;
}


