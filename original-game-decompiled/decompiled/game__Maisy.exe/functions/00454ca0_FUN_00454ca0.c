
/* ==== FUN_00454ca0 @ 00454ca0 ==== 
 * signature: undefined4 __cdecl FUN_00454ca0(short * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00454ca0-00454cf0
 */

undefined4 __cdecl FUN_00454ca0(short *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  local_30 = 0xf;
  local_2a = param_3;
  local_2e = param_2;
  if (*param_1 == 0) {
    *param_1 = 0xf;
  }
  if (*param_1 == 0x6a) {
    *param_1 = 0xf;
  }
  uVar1 = FUN_00453be0(0,0,&local_30,param_1);
  return uVar1;
}


