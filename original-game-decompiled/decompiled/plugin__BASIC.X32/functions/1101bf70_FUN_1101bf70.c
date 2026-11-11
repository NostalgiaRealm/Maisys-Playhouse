
/* ==== FUN_1101bf70 @ 1101bf70 ==== 
 * signature: int __cdecl FUN_1101bf70(undefined4 param_1, undefined2 * param_2, short * param_3, short * param_4, int param_5)
 * body: 1101bf70-1101c0e5
 */

int __cdecl
FUN_1101bf70(undefined4 param_1,undefined2 *param_2,short *param_3,short *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  
  FUN_11019aa0(param_3,param_4);
  sVar1 = *param_4;
  sVar2 = *param_3;
  if (sVar1 != sVar2) {
    if ((((sVar2 == 0x19) || (sVar2 == 3)) && ((sVar1 == 0x19 || (sVar1 == 3)))) &&
       ((*(int *)(param_3 + 1) == 0 && (*(int *)(param_4 + 1) == 0)))) {
      bVar5 = true;
      goto LAB_1101c0ba;
    }
    goto LAB_1101c0b8;
  }
  switch(sVar2) {
  case 0:
    bVar5 = true;
    break;
  case 1:
    bVar5 = *(int *)(param_4 + 1) == *(int *)(param_3 + 1);
    break;
  default:
    return CONCAT22(sVar2 >> 0xf,0xffe9);
  case 3:
    bVar5 = *(int *)(param_4 + 1) == *(int *)(param_3 + 1);
    break;
  case 0xd:
    iVar3 = FUN_11014350(*(char **)(param_3 + 2),*(char **)(param_4 + 2));
    bVar5 = iVar3 == 0;
    break;
  case 0x10:
    if ((param_4[1] == param_3[1]) && (param_4[2] == param_3[2])) {
      bVar5 = true;
      break;
    }
    goto LAB_1101c0b8;
  case 0x11:
    if ((*(int *)(param_4 + 1) == *(int *)(param_3 + 1)) &&
       (*(int *)(param_4 + 3) == *(int *)(param_3 + 3))) {
      bVar5 = true;
      break;
    }
    goto LAB_1101c0b8;
  case 0x15:
    bVar5 = *(double *)(param_4 + 1) == *(double *)(param_3 + 1);
    break;
  case 0x16:
    if ((*(double *)(param_4 + 1) == *(double *)(param_3 + 1)) &&
       (*(double *)(param_4 + 5) == *(double *)(param_3 + 5))) {
      bVar5 = true;
      break;
    }
    goto LAB_1101c0b8;
  case 0x19:
    bVar5 = *(int *)(param_4 + 1) == *(int *)(param_3 + 1);
    break;
  case 0x1a:
    bVar5 = (char)param_4[1] == (char)param_3[1];
    break;
  case 0x1d:
    if ((*(int *)(param_4 + 1) == *(int *)(param_3 + 1)) &&
       (bVar5 = true, *(int *)(param_4 + 3) == *(int *)(param_3 + 3))) break;
LAB_1101c0b8:
    bVar5 = false;
  }
LAB_1101c0ba:
  *param_2 = 0x1a;
  uVar4 = (ushort)((uint)param_2 >> 0x10);
  if (param_5 == 0xd2) {
    *(bool *)(param_2 + 1) = bVar5;
    return (uint)uVar4 << 0x10;
  }
  *(bool *)(param_2 + 1) = bVar5 == false;
  return (uint)uVar4 << 0x10;
}


