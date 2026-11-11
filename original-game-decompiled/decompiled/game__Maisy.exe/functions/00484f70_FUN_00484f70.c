
/* ==== FUN_00484f70 @ 00484f70 ==== 
 * signature: undefined4 __stdcall FUN_00484f70(undefined2 * param_1, int * param_2)
 * body: 00484f70-004850ef
 */

undefined4 FUN_00484f70(undefined2 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  switch(*param_1) {
  case 0:
  case 0x6e:
    *param_2 = 2;
    return 0;
  case 1:
    *param_2 = 6;
    return 0;
  default:
    return 0x60001;
  case 9:
    *param_2 = 0xe;
    return 0;
  case 10:
    *param_2 = 6;
    return 0;
  case 0xb:
    *param_2 = 10;
    return 0;
  case 0xd:
    *param_2 = 10;
    return 0;
  case 0xf:
    *param_2 = 10;
    return 0;
  case 0x10:
    *param_2 = 0x1a;
    return 0;
  case 0x14:
    *param_2 = 4;
    return 0;
  case 0x17:
    *param_2 = 10;
    return 0;
  case 100:
    *param_2 = 10;
    return 0;
  case 0x65:
    *param_2 = *(int *)(param_1 + 5) + 10;
    return 0;
  case 0x66:
  case 0x6f:
  case 0x76:
    if (*(int *)(param_1 + 7) != 0) {
      *param_2 = *(int *)(param_1 + 5) + 0xb;
      return 0;
    }
    *param_2 = 10;
    return 0;
  case 0x68:
    *param_2 = 0x2a;
    return 0;
  case 0x6b:
    *param_2 = 0x1a;
    return 0;
  case 0x6c:
    *param_2 = 6;
    return 0;
  case 0x6d:
    *param_2 = (short)param_1[1] * 4 + 10;
    return 0;
  case 0x73:
    break;
  }
  *param_2 = 10;
  if (*(char **)(param_1 + 5) != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar3 = *(char **)(param_1 + 5);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *param_2 = ~uVar2 + 10;
  }
  return 0;
}


