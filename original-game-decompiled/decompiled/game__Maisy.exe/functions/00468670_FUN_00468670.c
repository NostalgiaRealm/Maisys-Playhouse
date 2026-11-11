
/* ==== FUN_00468670 @ 00468670 ==== 
 * signature: undefined __fastcall FUN_00468670(int param_1)
 * body: 00468670-004686db
 */

void __fastcall FUN_00468670(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  short local_16;
  short local_14;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00473580(*(void **)(param_1 + 0x3e),(int)&local_2c);
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    if ((*(short *)(puVar1 + 6) != local_14) || (*(short *)((int)puVar1 + 0x16) != local_16)) {
      local_2c = *puVar1;
      (**(code **)(**(int **)(param_1 + 0x3a) + 0x1f0))(&local_2c);
      *(undefined2 *)(*(int *)(param_1 + 0x48) + 6) = local_26;
      *(undefined2 *)(*(int *)(param_1 + 0x48) + 4) = local_28;
      *(short *)(*(int *)(param_1 + 0x48) + 0x18) = local_14;
    }
  }
  return;
}


