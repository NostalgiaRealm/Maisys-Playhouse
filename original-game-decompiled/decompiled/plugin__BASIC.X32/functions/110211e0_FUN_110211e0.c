
/* ==== FUN_110211e0 @ 110211e0 ==== 
 * signature: uint __cdecl FUN_110211e0(undefined4 * param_1, undefined4 param_2, undefined4 * param_3, short * param_4, undefined4 param_5, undefined2 * param_6)
 * body: 110211e0-11021230
 */

uint __cdecl
FUN_110211e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,short *param_4,
            undefined4 param_5,undefined2 *param_6)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  short *psVar3;
  
  if (*param_4 != 0x1fd) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),0xffe0);
  }
  uVar1 = FUN_11020f90(param_2,param_5,param_1,param_4,(short *)param_5,param_2,param_6);
  if ((short)uVar1 == 0) {
    psVar3 = param_4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 2;
      param_3 = param_3 + 1;
    }
    uVar1 = uVar1 & 0xffff0000;
    *param_4 = 0;
  }
  return uVar1;
}


