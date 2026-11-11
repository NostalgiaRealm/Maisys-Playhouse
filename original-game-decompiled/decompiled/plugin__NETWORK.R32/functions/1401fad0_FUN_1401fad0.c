
/* ==== FUN_1401fad0 @ 1401fad0 ==== 
 * signature: undefined __cdecl FUN_1401fad0(undefined1 param_1, int * param_2, int * param_3, uint * param_4)
 * body: 1401fad0-1401ff7f
 */

void __cdecl FUN_1401fad0(undefined1 param_1,int *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_1402825c;
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    return;
  case 0x41:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[6] * 4 + 0x1c),param_3,(int *)param_4);
    return;
  case 0x42:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[4] * 4 + 0x68),param_3,(int *)param_4);
    return;
  case 0x48:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[2],2,param_3,param_4);
    return;
  case 0x49:
    DAT_14028264 = DAT_14028260;
    iVar4 = param_2[2] % 0xc;
    if (iVar4 == 0) {
      iVar4 = 0xc;
    }
    __store_num(iVar4,2,param_3,param_4);
    return;
  case 0x4d:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[1],2,param_3,param_4);
    return;
  case 0x53:
    DAT_14028264 = DAT_14028260;
    __store_num(*param_2,2,param_3,param_4);
    return;
  case 0x55:
    iVar4 = param_2[6];
    goto LAB_1401fc40;
  case 0x57:
    if (param_2[6] == 0) {
      iVar4 = 6;
    }
    else {
      iVar4 = param_2[6] + -1;
    }
LAB_1401fc40:
    DAT_14028264 = DAT_14028260;
    iVar1 = param_2[7];
    if (iVar1 < iVar4) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 / 7;
      if (iVar4 <= iVar1 % 7) {
        iVar3 = iVar3 + 1;
      }
    }
    __store_num(iVar3,2,param_3,param_4);
    return;
  case 0x58:
    DAT_14028260 = 0;
    FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa8),param_2,param_3,(int *)param_4);
    return;
  case 0x59:
    DAT_14028264 = DAT_14028260;
    __store_num(((param_2[5] / 100) * 4 + 0x4c) * 0x19 + param_2[5] % 100,4,param_3,param_4);
    return;
  case 0x5a:
  case 0x7a:
    FUN_14021390();
    __store_str((&PTR_DAT_140284ac)[-(uint)(param_2[8] == 0)],param_3,(int *)param_4);
    return;
  case 0x61:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[6] * 4),param_3,(int *)param_4);
    return;
  case 0x62:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[4] * 4 + 0x38),param_3,(int *)param_4);
    return;
  case 99:
    if (DAT_14028260 == 0) {
      FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa0),param_2,param_3,(int *)param_4);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_14020160(*(byte **)(puVar2 + 0xa8),param_2,param_3,(int *)param_4);
        return;
      }
    }
    else {
      DAT_14028260 = 0;
      FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa4),param_2,param_3,(int *)param_4);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_14020160(*(byte **)(puVar2 + 0xa8),param_2,param_3,(int *)param_4);
        return;
      }
    }
    break;
  case 100:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[3],2,param_3,param_4);
    return;
  case 0x6a:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[7] + 1,3,param_3,param_4);
    return;
  case 0x6d:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[4] + 1,2,param_3,param_4);
    return;
  case 0x70:
    if (param_2[2] < 0xc) {
      __store_str(*(char **)(PTR_PTR_1402825c + 0x98),param_3,(int *)param_4);
      return;
    }
    __store_str(*(char **)(PTR_PTR_1402825c + 0x9c),param_3,(int *)param_4);
    return;
  case 0x77:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[6],1,param_3,param_4);
    return;
  case 0x78:
    if (DAT_14028260 != 0) {
      DAT_14028260 = 0;
      FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa4),param_2,param_3,(int *)param_4);
      return;
    }
    FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa0),param_2,param_3,(int *)param_4);
    return;
  case 0x79:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}


