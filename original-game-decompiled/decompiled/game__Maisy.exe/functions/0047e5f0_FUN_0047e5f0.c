
/* ==== FUN_0047e5f0 @ 0047e5f0 ==== 
 * signature: undefined __fastcall FUN_0047e5f0(int param_1)
 * body: 0047e5f0-0047e646
 */

void __fastcall FUN_0047e5f0(int param_1)

{
  undefined4 uVar1;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  FUN_004624e0(param_1);
  uVar1 = FUN_00441a60(*(int *)(param_1 + 0x5a));
  if ((char)uVar1 != '\0') {
    FUN_00441e20(*(void **)(param_1 + 0x5a),(undefined4 *)&local_c);
    *(short *)(param_1 + 0xb2) = *(short *)(param_1 + 0xb2) + local_c;
    *(short *)(param_1 + 0xb6) = *(short *)(param_1 + 0xb6) + local_8;
    *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + local_a;
    *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + local_6;
  }
  return;
}


