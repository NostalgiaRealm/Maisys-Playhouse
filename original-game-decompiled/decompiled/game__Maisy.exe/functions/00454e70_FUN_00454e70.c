
/* ==== FUN_00454e70 @ 00454e70 ==== 
 * signature: undefined4 __cdecl FUN_00454e70(short * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00454e70-00454ec0
 */

undefined4 __cdecl FUN_00454e70(short *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  if (*param_1 == 0) {
    *param_1 = 0xb;
  }
  local_30 = 0xb;
  local_2e = param_2;
  local_2a = param_3;
  if (*param_1 == 0x6a) {
    *param_1 = 0xb;
  }
  uVar1 = FUN_00453be0(0,0,&local_30,param_1);
  return uVar1;
}


