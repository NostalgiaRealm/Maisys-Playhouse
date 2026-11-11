
/* ==== FUN_00454f30 @ 00454f30 ==== 
 * signature: undefined4 __cdecl FUN_00454f30(short * param_1, undefined2 param_2, undefined2 param_3, undefined2 param_4, undefined2 param_5)
 * body: 00454f30-00454f90
 */

undefined4 __cdecl
FUN_00454f30(short *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5)

{
  undefined4 uVar1;
  short local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  if (*param_1 == 0) {
    *param_1 = 0xd;
  }
  local_30 = 0xd;
  local_2c = param_2;
  local_2e = param_3;
  local_28 = param_4;
  local_2a = param_5;
  if (*param_1 == 0x6a) {
    *param_1 = 0xd;
  }
  uVar1 = FUN_00453be0(0,0,&local_30,param_1);
  return uVar1;
}


