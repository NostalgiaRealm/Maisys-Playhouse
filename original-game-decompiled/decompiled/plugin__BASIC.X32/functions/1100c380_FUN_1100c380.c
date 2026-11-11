
/* ==== FUN_1100c380 @ 1100c380 ==== 
 * signature: undefined __cdecl FUN_1100c380(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1100c380-1100c4b2
 */

void __cdecl FUN_1100c380(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  byte local_13;
  short local_12;
  undefined4 local_c;
  undefined4 local_4;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_28,0x28);
  if (cVar1 != '\0') {
    if (*(LPVOID *)(param_2 + 0x20) != (LPVOID)0x0) {
      FUN_11029180(*(LPVOID *)(param_2 + 0x20));
    }
    if (local_12 == 0) {
      *(undefined4 *)(param_2 + 0x20) = 0;
    }
    else {
      iVar2 = FUN_11029420(local_12 * 0xc);
      *(int *)(param_2 + 0x20) = iVar2;
      if (iVar2 == 0) {
        *(undefined1 *)((int)param_3 + 0x12) = 0;
        return;
      }
      FUN_11011800(param_1,*param_3,iVar2,local_12 * 0xc);
    }
    if (local_14 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_14);
    }
    if (local_13 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_13);
    }
    FUN_11006290(&local_28,'\x02');
    FUN_11006290(&local_28,'\0');
    FUN_11006290(&local_28,'\x01');
    *(uint *)(param_2 + 0xc) = local_28;
    *(undefined4 *)(param_2 + 0x10) = local_24;
    *(undefined4 *)(param_2 + 0x14) = local_20;
    *(undefined4 *)(param_2 + 0x18) = local_1c;
    *(short *)(param_2 + 0x28) = local_12;
    *(undefined4 *)(param_2 + 0x1c) = local_18;
    *(undefined4 *)(param_2 + 0x24) = local_c;
    *(undefined4 *)(param_2 + 0x34) = local_4;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


