
/* ==== FUN_1100f290 @ 1100f290 ==== 
 * signature: undefined __cdecl FUN_1100f290(int param_1, int param_2, undefined1 * param_3, byte * param_4, byte * param_5)
 * body: 1100f290-1100f31e
 */

void __cdecl FUN_1100f290(int param_1,int param_2,undefined1 *param_3,byte *param_4,byte *param_5)

{
  undefined4 uVar1;
  short local_4;
  
  local_4 = 0xfe;
  do {
    uVar1 = FUN_1100ed90((uint)*param_5,(uint)param_4[4],param_1,param_2);
    param_3[4] = (char)uVar1;
    uVar1 = FUN_1100ed90((uint)param_5[1],(uint)param_4[5],param_1,param_2);
    param_3[5] = (char)uVar1;
    uVar1 = FUN_1100ed90((uint)param_5[2],(uint)param_4[6],param_1,param_2);
    param_3[6] = (char)uVar1;
    local_4 = local_4 + -1;
    param_3 = param_3 + 4;
    param_4 = param_4 + 4;
  } while (local_4 != 0);
  return;
}


