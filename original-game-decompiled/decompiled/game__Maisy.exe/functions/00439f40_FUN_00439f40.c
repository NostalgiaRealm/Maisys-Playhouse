
/* ==== FUN_00439f40 @ 00439f40 ==== 
 * signature: int __cdecl FUN_00439f40(int * param_1, int param_2, int param_3)
 * body: 00439f40-0043a0a2
 */

int __cdecl FUN_00439f40(int *param_1,int param_2,int param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_34 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined2 local_14;
  HGLOBAL local_12;
  undefined4 local_e;
  int local_8;
  
  local_8 = -1;
  piVar3 = param_1;
  piVar4 = local_34;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  *(short *)piVar4 = (short)*piVar3;
  local_24 = *(int *)(param_2 + 0x10);
  local_e = *(undefined4 *)(param_2 + 0x26);
  local_34[3] = FUN_00439f20(local_24,local_34[1]);
  local_20 = 0;
  local_1c = 0;
  local_34[0] = 1;
  hMem = GlobalAlloc(0x42,local_34[2] * local_34[3]);
  if (hMem != (HGLOBAL)0x0) {
    local_12 = hMem;
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 != (LPVOID)0x0) {
      local_18 = FUN_00439ba0(pvVar1);
      local_14 = FUN_00439bb0();
      if (0 < local_34[0]) {
        local_18 = local_18 + (local_34[2] + -1) * local_34[3];
        local_34[3] = -local_34[3];
      }
      switch(param_1[4]) {
      case 1:
        local_8 = FUN_0043a0e0((int)param_1,(int)local_34,param_3);
        break;
      case 2:
        local_8 = FUN_0043a280();
        break;
      default:
        goto switchD_0043a006_caseD_3;
      case 4:
        local_8 = FUN_0043a290((int)param_1,(int)local_34);
        break;
      case 8:
        local_8 = FUN_0043a610((int)param_1,(int)local_34);
        break;
      case 0x10:
        local_8 = FUN_0043a7e0((int)param_1,(int)local_34,param_3);
        break;
      case 0x20:
        local_8 = FUN_0043a930((int)param_1,(int)local_34,param_3);
      }
    }
switchD_0043a006_caseD_3:
    if (local_8 != -1) goto LAB_0043a08b;
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  if (local_8 == -1) {
    return -1;
  }
LAB_0043a08b:
  piVar3 = local_34;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar3;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 1;
  }
  *(short *)param_1 = (short)*piVar3;
  return local_8;
}


