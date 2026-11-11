
/* ==== FUN_00454c50 @ 00454c50 ==== 
 * signature: undefined4 __cdecl FUN_00454c50(short * param_1, byte param_2)
 * body: 00454c50-00454c9d
 */

undefined4 __cdecl FUN_00454c50(short *param_1,byte param_2)

{
  undefined4 uVar1;
  short local_30;
  ushort local_2e;
  
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  local_30 = 0x14;
  local_2e = (ushort)param_2;
  if (*param_1 == 0) {
    *param_1 = 0x14;
  }
  if (*param_1 == 0x6a) {
    *param_1 = 0x14;
  }
  uVar1 = FUN_00453be0(0,0,&local_30,param_1);
  return uVar1;
}


