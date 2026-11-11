
/* ==== FUN_00454620 @ 00454620 ==== 
 * signature: undefined4 __cdecl FUN_00454620(undefined4 * param_1, short * param_2)
 * body: 00454620-0045470f
 */

undefined4 __cdecl FUN_00454620(undefined4 *param_1,short *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0xf;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  switch(*(undefined2 *)param_1) {
  case 1:
    *(double *)(param_2 + 1) = (double)*(int *)((int)param_1 + 2);
    return 0;
  default:
    return 0x10000;
  case 0xf:
    *(undefined4 *)param_2 = *param_1;
    *(undefined4 *)(param_2 + 2) = param_1[1];
    param_2[4] = *(short *)(param_1 + 2);
    return 0;
  case 0x14:
    *(double *)(param_2 + 1) = (double)(int)*(short *)((int)param_1 + 2);
    return 0;
  case 0x66:
    break;
  case 0x69:
    uVar2 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar2;
  case 0x73:
    uVar2 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar2;
  }
  local_c = 0;
  local_8 = 0;
  if (*(char **)((int)param_1 + 0xe) != (char *)0x0) {
    iVar3 = -1;
    pcVar4 = *(char **)((int)param_1 + 0xe);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      FUN_0043bbf0(*(char **)((int)param_1 + 0xe),&local_c);
    }
  }
  *(undefined4 *)(param_2 + 3) = local_8;
  *(undefined4 *)(param_2 + 1) = local_c;
  return 0;
}


