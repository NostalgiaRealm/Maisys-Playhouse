
/* ==== FUN_004156e0 @ 004156e0 ==== 
 * signature: undefined __fastcall FUN_004156e0(int * param_1)
 * body: 004156e0-00415740
 */

void __fastcall FUN_004156e0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x62);
  uVar2 = *(undefined4 *)((int)param_1 + 0x5e);
  if ((((*(byte *)((int)param_1 + 0x2e) & 1) == 0) &&
      (local_c._0_2_ = (short)uVar2, (short)local_c < (short)uVar1)) &&
     (local_8._2_2_ = (short)((uint)uVar1 >> 0x10), local_c._2_2_ = (short)((uint)uVar2 >> 0x10),
     local_c._2_2_ < local_8._2_2_)) {
    iVar3 = *param_1;
    local_c = uVar2;
    local_8 = uVar1;
    (**(code **)(iVar3 + 0x110))();
    (**(code **)(iVar3 + 0x174))(*(undefined4 *)((int)param_1 + 0x5a),&local_c);
    *(undefined2 *)(param_1 + 0x19) = 0;
    *(undefined2 *)((int)param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
  }
  return;
}


