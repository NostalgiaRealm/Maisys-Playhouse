
/* ==== FUN_00440330 @ 00440330 ==== 
 * signature: undefined __fastcall FUN_00440330(int param_1)
 * body: 00440330-00440353
 */

void __fastcall FUN_00440330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0048cf55();
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar1 = FUN_004417e0(param_1);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  return;
}


