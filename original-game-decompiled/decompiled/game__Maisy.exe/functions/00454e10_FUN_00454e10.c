
/* ==== FUN_00454e10 @ 00454e10 ==== 
 * signature: undefined4 __cdecl FUN_00454e10(short * param_1, undefined2 param_2, undefined2 param_3)
 * body: 00454e10-00454e62
 */

undefined4 __cdecl FUN_00454e10(short *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  short local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  if (*param_1 == 0) {
    *param_1 = 10;
  }
  local_30 = 10;
  local_2e = param_2;
  local_2c = param_3;
  if (*param_1 == 0x6a) {
    *param_1 = 10;
  }
  uVar1 = FUN_00453be0(0,0,&local_30,param_1);
  return uVar1;
}


