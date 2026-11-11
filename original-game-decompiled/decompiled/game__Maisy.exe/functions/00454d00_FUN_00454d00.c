
/* ==== FUN_00454d00 @ 00454d00 ==== 
 * signature: undefined4 __cdecl FUN_00454d00(short * param_1, undefined4 param_2)
 * body: 00454d00-00454d4a
 */

undefined4 __cdecl FUN_00454d00(short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short local_30;
  undefined4 local_2e;
  
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  local_30 = 1;
  local_2e = param_2;
  if (*param_1 == 0) {
    *param_1 = 1;
  }
  if (*param_1 == 0x6a) {
    *param_1 = 1;
  }
  uVar1 = FUN_00453be0(0,0,&local_30,param_1);
  return uVar1;
}


