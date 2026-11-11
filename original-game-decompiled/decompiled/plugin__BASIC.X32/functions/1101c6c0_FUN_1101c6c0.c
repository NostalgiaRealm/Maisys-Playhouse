
/* ==== FUN_1101c6c0 @ 1101c6c0 ==== 
 * signature: undefined2 __cdecl FUN_1101c6c0(undefined4 * param_1, undefined4 param_2, short * param_3, undefined4 param_4, undefined2 * param_5)
 * body: 1101c6c0-1101c727
 */

undefined2 __cdecl
FUN_1101c6c0(undefined4 *param_1,undefined4 param_2,short *param_3,undefined4 param_4,
            undefined2 *param_5)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 local_10;
  undefined4 local_e;
  
  local_10 = 3;
  *param_3 = 0x17;
  local_e = param_2;
  sVar1 = FUN_11024d70(param_1,&local_10,param_4,param_3,0);
  uVar2 = 0;
  if (sVar1 != 0) {
    uVar2 = 0xffe3;
    if (param_5 != (undefined2 *)0x0) {
      FUN_1101ca20(param_1,param_5,param_2);
    }
  }
  return uVar2;
}


