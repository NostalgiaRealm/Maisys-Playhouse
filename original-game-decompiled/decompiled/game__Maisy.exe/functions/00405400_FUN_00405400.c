
/* ==== FUN_00405400 @ 00405400 ==== 
 * signature: undefined __fastcall FUN_00405400(int param_1)
 * body: 00405400-00405437
 */

void __fastcall FUN_00405400(int param_1)

{
  int local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  local_10 = *(int *)(param_1 + 0x96);
  if (local_10 != 0) {
    local_8 = *(undefined1 *)(param_1 + 0xb5);
    local_c = *(undefined4 *)(param_1 + 0x92);
    (**(code **)(**(int **)(param_1 + 0x32) + 0xe8))(&local_10);
  }
  return;
}


