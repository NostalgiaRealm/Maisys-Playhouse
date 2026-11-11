
/* ==== FUN_004686e0 @ 004686e0 ==== 
 * signature: undefined __fastcall FUN_004686e0(int param_1)
 * body: 004686e0-0046872b
 */

void __fastcall FUN_004686e0(int param_1)

{
  undefined4 local_2c [5];
  short local_18;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00473580(*(void **)(param_1 + 0x3e),(int)local_2c);
    if (*(short *)(*(undefined4 **)(param_1 + 0x48) + 5) != local_18) {
      local_2c[0] = **(undefined4 **)(param_1 + 0x48);
      (**(code **)(**(int **)(param_1 + 0x3a) + 0x1ec))(local_2c);
      *(short *)(*(int *)(param_1 + 0x48) + 0x14) = local_18;
    }
  }
  return;
}


