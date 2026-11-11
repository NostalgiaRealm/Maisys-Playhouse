
/* ==== FUN_00452cd0 @ 00452cd0 ==== 
 * signature: undefined4 __cdecl FUN_00452cd0(undefined4 param_1, int * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 00452cd0-00452e38
 */

undefined4 __cdecl
FUN_00452cd0(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_c;
  int local_8;
  
  local_c._2_2_ = *(undefined2 *)param_4;
  switch(local_c._2_2_) {
  case 1:
    *param_3 = *param_4;
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_4 + 1);
    break;
  default:
    *(undefined2 *)param_3 = 0;
    return 0x10000;
  case 10:
    *param_3 = *param_4;
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_4 + 1);
    break;
  case 0xb:
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_4 + 2);
    break;
  case 0xf:
    FUN_00484c90((undefined2 *)param_3,(int)param_4);
    break;
  case 0x10:
    FUN_00484cb0((undefined2 *)param_3,(int)param_4);
    break;
  case 0x14:
    *param_3 = *param_4;
    break;
  case 0x66:
    local_8 = *(int *)((int)param_4 + 2);
    if (local_8 == 0) {
      *(undefined4 *)((int)param_3 + 0xe) = 0;
    }
    else {
      uVar2 = FUN_0043b950(local_8);
      *(undefined4 *)((int)param_3 + 0xe) = uVar2;
    }
    if (*(char **)((int)param_3 + 0xe) != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)((int)param_4 + 6);
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = *(char **)((int)param_3 + 0xe);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    *(undefined4 *)((int)param_3 + 2) = 0xffffffff;
    *(int *)((int)param_3 + 6) = local_8 + 1;
    *(int *)((int)param_3 + 10) = local_8;
    break;
  case 0x7b:
    iVar3 = 0;
    local_8 = 0;
    if (param_2 != (int *)0x0) {
      iVar3 = (**(code **)(*param_2 + 0x10))();
    }
    FUN_00452ee0(iVar3,&local_8,(int)param_4,&local_c,1);
    *(undefined2 *)param_3 = 0x73;
    *(undefined4 *)((int)param_3 + 2) = 0;
    *(undefined4 *)((int)param_3 + 6) = 0;
    *(undefined4 *)((int)param_3 + 10) = 0;
    local_c._2_2_ = 0x73;
    *(int *)((int)param_3 + 2) = local_8;
  }
  *(undefined2 *)param_3 = local_c._2_2_;
  return 0;
}


