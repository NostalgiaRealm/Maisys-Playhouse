
/* ==== FUN_11010f30 @ 11010f30 ==== 
 * signature: undefined FUN_11010f30(void)
 * body: 11010f30-11010f50
 */

void FUN_11010f30(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  
  switch(*param_1) {
  case 1:
  case 6:
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_2 + 1) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    break;
  default:
    break;
  case 5:
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_2 + 1) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    break;
  case 9:
    uVar1 = *(uint *)(param_1 + 3);
    *(uint *)(param_2 + 3) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
  }
  *param_2 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  return;
}


