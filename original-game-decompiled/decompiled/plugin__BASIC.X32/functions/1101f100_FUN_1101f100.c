
/* ==== FUN_1101f100 @ 1101f100 ==== 
 * signature: int __cdecl FUN_1101f100(int * param_1, int param_2, int param_3)
 * body: 1101f100-1101f27e
 */

int __cdecl FUN_1101f100(int *param_1,int param_2,int param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_2c [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined2 local_c;
  HGLOBAL local_a;
  undefined4 local_6;
  
  iVar3 = -1;
  piVar4 = param_1;
  piVar5 = local_2c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  *(short *)piVar5 = (short)*piVar4;
  local_1c = *(int *)(param_2 + 0x10);
  local_6 = *(undefined4 *)(param_2 + 0x26);
  local_2c[3] = FUN_1101f0e0(local_1c,local_2c[1]);
  local_18 = 0;
  local_14 = 0;
  local_2c[0] = 1;
  hMem = GlobalAlloc(0x42,local_2c[2] * local_2c[3]);
  if (hMem != (HGLOBAL)0x0) {
    local_a = hMem;
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 != (LPVOID)0x0) {
      local_10 = FUN_1101ece0(pvVar1);
      local_c = FUN_1101ecf0();
      if (0 < local_2c[0]) {
        local_10 = local_10 + (local_2c[2] + -1) * local_2c[3];
        local_2c[3] = -local_2c[3];
      }
      switch(param_1[4]) {
      case 1:
        iVar3 = FUN_1101f2c0((int)param_1,(int)local_2c,param_3);
        break;
      case 2:
        iVar3 = FUN_1101f470();
        break;
      case 4:
        iVar3 = FUN_1101f480((int)param_1,(int)local_2c);
        break;
      case 8:
        iVar3 = FUN_1101f850((int)param_1,(int)local_2c);
        break;
      case 0x10:
        iVar3 = FUN_1101fa20((int)param_1,(int)local_2c,param_3);
        break;
      case 0x20:
        iVar3 = FUN_1101fb80((int)param_1,(int)local_2c,param_3);
      }
    }
    if (iVar3 != -1) goto LAB_1101f266;
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  if (iVar3 == -1) {
    return -1;
  }
LAB_1101f266:
  piVar4 = local_2c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar4;
    piVar4 = piVar4 + 1;
    param_1 = param_1 + 1;
  }
  *(short *)param_1 = (short)*piVar4;
  return iVar3;
}


