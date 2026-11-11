
/* ==== FUN_11019b70 @ 11019b70 ==== 
 * signature: uint __cdecl FUN_11019b70(short * param_1)
 * body: 11019b70-11019bbf
 */

uint __cdecl FUN_11019b70(short *param_1)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = (int)*param_1 - 1;
  switch(*param_1) {
  case 1:
  case 0x1e:
    dVar1 = (double)*(int *)(param_1 + 1);
    break;
  default:
    return CONCAT22((short)(uVar2 >> 0x10),0xffff);
  case 0x15:
    goto switchD_11019b88_caseD_15;
  case 0x1a:
    uVar2 = (uint)*(byte *)(param_1 + 1);
    dVar1 = (double)uVar2;
  }
  *(double *)(param_1 + 1) = dVar1;
switchD_11019b88_caseD_15:
  *param_1 = 0x15;
  return uVar2 & 0xffff0000;
}


