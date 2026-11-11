
/* ==== FUN_11019ca0 @ 11019ca0 ==== 
 * signature: uint __cdecl FUN_11019ca0(undefined4 * param_1, short * param_2)
 * body: 11019ca0-11019d47
 */

uint __cdecl FUN_11019ca0(undefined4 *param_1,short *param_2)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = (int)*param_2 - 1;
  uVar3 = (ushort)(uVar2 >> 0x10);
  switch(*param_2) {
  case 1:
    *param_2 = 0x1a;
    *(char *)(param_2 + 1) = '\x01' - (*(int *)(param_2 + 1) == 0);
    return (uint)uVar3 << 0x10;
  default:
    uVar2 = FUN_11019e40(param_1,param_2);
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = 0x1a;
    return uVar2 & 0xffff0000;
  case 3:
    *param_2 = 0x1a;
    *(char *)(param_2 + 1) = '\x01' - (*(int *)(param_2 + 1) == 0);
    return (uint)uVar3 << 0x10;
  case 0x15:
    *param_2 = 0x1a;
    uVar2 = *(uint *)(param_2 + 3) & 0x7fffffff | *(uint *)(param_2 + 1);
    *(bool *)(param_2 + 1) = uVar2 != 0;
    return uVar2 & 0xffff0000;
  case 0x19:
    *param_2 = 0x1a;
    *(char *)(param_2 + 1) = '\x01' - (*(int *)(param_2 + 1) == 0);
    return (uint)uVar3 << 0x10;
  case 0x1a:
    break;
  case 0x1e:
    cVar1 = '\x01' - (*(int *)(param_2 + 1) == 0);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
    *(char *)(param_2 + 1) = cVar1;
  }
  *param_2 = 0x1a;
  return uVar2 & 0xffff0000;
}


