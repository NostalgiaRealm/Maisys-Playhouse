
/* ==== FUN_1101c140 @ 1101c140 ==== 
 * signature: undefined4 __cdecl FUN_1101c140(undefined4 param_1, undefined2 * param_2, short * param_3, short * param_4, undefined4 param_5)
 * body: 1101c140-1101c23f
 */

undefined4 __cdecl
FUN_1101c140(undefined4 param_1,undefined2 *param_2,short *param_3,short *param_4,undefined4 param_5
            )

{
  short sVar1;
  short sVar2;
  undefined4 in_EAX;
  bool bVar3;
  
  bVar3 = false;
  sVar1 = *param_3;
  sVar2 = *param_4;
  if ((((sVar1 != 1) && (sVar1 != 0x15)) && (sVar1 != 0x1e)) ||
     (((sVar2 != 1 && (sVar2 != 0x15)) && (sVar2 != 0x1e)))) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),0xffe9);
  }
  FUN_11019aa0(param_3,param_4);
  if (*param_3 == 1) {
    switch(param_5) {
    case 0xd4:
      bVar3 = *(int *)(param_3 + 1) <= *(int *)(param_4 + 1);
      break;
    case 0xd5:
      bVar3 = *(int *)(param_3 + 1) < *(int *)(param_4 + 1);
      break;
    case 0xd6:
      bVar3 = *(int *)(param_4 + 1) <= *(int *)(param_3 + 1);
      break;
    case 0xd7:
      bVar3 = *(int *)(param_4 + 1) < *(int *)(param_3 + 1);
    }
    goto switchD_1101c1a4_default;
  }
  if (*param_3 != 0x15) goto switchD_1101c1a4_default;
  switch(param_5) {
  case 0xd4:
    bVar3 = *(double *)(param_3 + 1) <= *(double *)(param_4 + 1);
    break;
  case 0xd5:
    bVar3 = *(double *)(param_3 + 1) < *(double *)(param_4 + 1);
    break;
  case 0xd6:
    bVar3 = *(double *)(param_3 + 1) < *(double *)(param_4 + 1);
    goto LAB_1101c22a;
  case 0xd7:
    bVar3 = *(double *)(param_3 + 1) <= *(double *)(param_4 + 1);
LAB_1101c22a:
    bVar3 = !bVar3;
  }
switchD_1101c1a4_default:
  *param_2 = 0x1a;
  *(bool *)(param_2 + 1) = bVar3;
  return (uint)param_2 & 0xffff0000;
}


