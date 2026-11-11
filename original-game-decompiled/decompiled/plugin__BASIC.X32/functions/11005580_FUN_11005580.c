
/* ==== FUN_11005580 @ 11005580 ==== 
 * signature: undefined __cdecl FUN_11005580(undefined4 param_1, int * param_2, short param_3, int param_4, int param_5, int param_6, int param_7, int param_8, short param_9)
 * body: 11005580-110056f6
 */

void __cdecl
FUN_11005580(undefined4 param_1,int *param_2,short param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,short param_9)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  short local_10;
  LPVOID local_e;
  short local_8;
  LPVOID local_6;
  
  uVar2 = *(undefined4 *)(*(int *)(param_4 + 0x2a) + 8);
  uVar3 = (ushort)((int)uVar2 >> 0x1f);
  local_8 = 0;
  local_6 = FUN_110291a0(1,param_3 * 0xc);
  local_10 = 0;
  local_e = FUN_110291a0(1,param_3 * 0xc);
  if ((local_6 != (LPVOID)0x0) && (local_e != (LPVOID)0x0)) {
    FUN_11005700(param_1,param_2,param_3,&local_8);
    uVar1 = *(ushort *)((int)local_6 + 8);
    uVar4 = (uint)uVar1;
    sVar5 = *(short *)(*(int *)(param_4 + 8) + 2);
    if (sVar5 < (short)uVar1) {
      param_6 = param_6 + ((int)(short)uVar1 - (int)sVar5) * param_7;
    }
    while ((local_8 != 0 || (local_10 != 0))) {
      sVar5 = (short)uVar4;
      FUN_110058c0(param_1,&local_8,&local_10,sVar5);
      FUN_110059a0(param_1,&local_10);
      if ((*(short *)(*(int *)(param_4 + 8) + 2) <= sVar5) &&
         (sVar5 < *(short *)(*(int *)(param_4 + 8) + 6))) {
        if ((-1 < sVar5) && (sVar5 < (short)(((ushort)uVar2 ^ uVar3) - uVar3))) {
          FUN_11005a90(param_1,&local_10,uVar4,param_4,param_5,param_6,param_8,(int)param_9);
        }
        param_6 = param_6 + param_7;
      }
      uVar4 = (uint)(ushort)(sVar5 + 1);
      FUN_110059e0(param_1,&local_10);
      FUN_11005a20(param_1,&local_10);
    }
  }
  if (local_6 != (LPVOID)0x0) {
    FUN_11029180(local_6);
  }
  if (local_e != (LPVOID)0x0) {
    FUN_11029180(local_e);
  }
  return;
}


