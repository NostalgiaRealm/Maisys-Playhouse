
/* ==== FUN_00454ed0 @ 00454ed0 ==== 
 * signature: undefined4 __cdecl FUN_00454ed0(short * param_1, undefined4 * param_2)
 * body: 00454ed0-00454f26
 */

undefined4 __cdecl FUN_00454ed0(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  
  if ((param_1 != (short *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (*param_1 == 0) {
      *param_1 = 0xd;
    }
    local_2e = *param_2;
    local_30 = 0xd;
    local_2a = param_2[1];
    if (*param_1 == 0x6a) {
      *param_1 = 0xd;
    }
    uVar1 = FUN_00453be0(0,0,&local_30,param_1);
    return uVar1;
  }
  return 0x10001;
}


