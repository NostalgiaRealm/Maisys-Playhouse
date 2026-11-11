
/* ==== FUN_11019c00 @ 11019c00 ==== 
 * signature: ulonglong __fastcall FUN_11019c00(undefined4 param_1, undefined4 param_2, undefined4 * param_3, short * param_4)
 * body: 11019c00-11019c67
 */

ulonglong __fastcall
FUN_11019c00(undefined4 param_1,undefined4 param_2,undefined4 *param_3,short *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (int)*param_4 - 1;
  switch(*param_4) {
  case 1:
  case 0x1e:
    break;
  default:
    return CONCAT44(param_2,CONCAT22((short)(uVar1 >> 0x10),0xfffb));
  case 0x15:
    *(double *)(param_4 + 1) = *(double *)(param_4 + 1) + 0.5;
    FUN_11011490(param_3,param_4 + 1,param_4 + 1);
    uVar2 = __ftol();
    *param_4 = 1;
    *(int *)(param_4 + 1) = (int)uVar2;
    return uVar2 & 0xffffffffffff0000;
  case 0x1a:
    uVar1 = (uint)*(byte *)(param_4 + 1);
    *(uint *)(param_4 + 1) = uVar1;
  }
  *param_4 = 1;
  return CONCAT44(param_2,uVar1) & 0xffffffffffff0000;
}


