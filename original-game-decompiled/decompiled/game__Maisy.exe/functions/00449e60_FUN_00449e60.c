
/* ==== FUN_00449e60 @ 00449e60 ==== 
 * signature: int __cdecl FUN_00449e60(short * param_1, short param_2)
 * body: 00449e60-00449ee1
 */

int __cdecl FUN_00449e60(short *param_1,short param_2)

{
  short sVar1;
  uint3 uVar2;
  
  uVar2 = (uint3)((uint)(param_2 + -1) >> 8);
  switch(param_2) {
  case 1:
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = (uint)((char)param_1[1] != '\0');
    return 1;
  default:
    return (uint)uVar2 << 8;
  case 0x15:
    break;
  case 0x1a:
    *param_1 = param_2;
    return CONCAT31(uVar2,1);
  case 0x1e:
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = (uint)((char)param_1[1] != '\0');
    return 1;
  }
  sVar1 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if ((char)sVar1 != '\0') {
    *param_1 = param_2;
    param_1[3] = 0;
    param_1[4] = 0x3ff0;
    return CONCAT31(uVar2,1);
  }
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  return CONCAT31(uVar2,1);
}


