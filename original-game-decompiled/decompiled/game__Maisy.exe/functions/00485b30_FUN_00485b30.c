
/* ==== FUN_00485b30 @ 00485b30 ==== 
 * signature: undefined4 __thiscall FUN_00485b30(void * this, char * param_1, int * param_2)
 * body: 00485b30-00485d21
 */

undefined4 __thiscall FUN_00485b30(void *this,char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  char *pcVar4;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  int local_e;
  uint local_a;
  
  local_20 = *(undefined2 *)param_1;
  switch(local_20) {
  case 0xf:
    local_12 = CONCAT22(local_20,(undefined2)local_12);
    local_e = *(int *)(param_1 + 2);
    local_a = *(uint *)(param_1 + 6);
    FUN_00486d80(this,(char *)((int)&local_12 + 2),*param_2);
    return 0;
  case 0x10:
    local_1e = *(undefined4 *)(param_1 + 2);
    local_1a = *(undefined4 *)(param_1 + 6);
    local_12 = *(undefined4 *)(param_1 + 0xe);
    local_16 = *(undefined4 *)(param_1 + 10);
    local_a = *(uint *)(param_1 + 0x16);
    local_e = *(int *)(param_1 + 0x12);
    FUN_00486d80(this,(char *)&local_20,*param_2);
    return 0;
  default:
    FUN_00486d80(this,param_1,*param_2);
    return 0;
  case 0x65:
    local_12 = CONCAT22(local_20,(undefined2)local_12);
    local_e = *(int *)(param_1 + 10);
    local_a = local_e;
    FUN_00486d80(this,(char *)((int)&local_12 + 2),10);
    if (local_a != 0) {
      FUN_00486d80(this,*(char **)(param_1 + 0xe),local_a);
      return 0;
    }
    break;
  case 0x66:
  case 0x6f:
  case 0x76:
    local_12 = CONCAT22(local_20,(undefined2)local_12);
    if (*(int *)(param_1 + 0xe) != 0) {
      local_e = *(int *)(param_1 + 6);
      local_a = *(int *)(param_1 + 10) + 1;
      FUN_00486d80(this,(char *)((int)&local_12 + 2),10);
      FUN_00486d80(this,*(char **)(param_1 + 0xe),local_a);
      return 0;
    }
    local_e = 0;
    local_a = 0;
    FUN_00486d80(this,(char *)((int)&local_12 + 2),10);
    return 0;
  case 0x6d:
    local_12 = CONCAT22(local_20,(undefined2)local_12);
    local_e = (int)*(short *)(param_1 + 2) << 2;
    sVar3 = 0;
    local_a = local_e;
    FUN_00486d80(this,(char *)((int)&local_12 + 2),10);
    if (0 < *(short *)(param_1 + 2)) {
      do {
        iVar2 = (int)sVar3;
        sVar3 = sVar3 + 1;
        FUN_00486d80(this,(char *)(iVar2 * 4 + *(int *)(param_1 + 4)),4);
      } while (sVar3 < *(short *)(param_1 + 2));
      return 0;
    }
    break;
  case 0x73:
    local_12 = CONCAT22(local_20,(undefined2)local_12);
    if (*(char **)(param_1 + 10) == (char *)0x0) {
      local_a = 0;
    }
    else {
      local_a = 0xffffffff;
      pcVar4 = *(char **)(param_1 + 10);
      do {
        if (local_a == 0) break;
        local_a = local_a - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_a = ~local_a;
    }
    local_e = *(int *)(param_1 + 6);
    FUN_00486d80(this,(char *)((int)&local_12 + 2),10);
    if (local_a != 0) {
      FUN_00486d80(this,*(char **)(param_1 + 10),local_a);
    }
  }
  return 0;
}


