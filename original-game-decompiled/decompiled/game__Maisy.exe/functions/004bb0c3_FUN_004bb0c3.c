
/* ==== FUN_004bb0c3 @ 004bb0c3 ==== 
 * signature: undefined __fastcall FUN_004bb0c3(int param_1)
 * body: 004bb0c3-004bb0ec
 */

void __fastcall FUN_004bb0c3(int param_1)

{
  ATOM AVar1;
  
  AVar1 = GlobalAddAtomA(*(LPCSTR *)(param_1 + 0x80));
  *(ATOM *)(param_1 + 0xa8) = AVar1;
  AVar1 = GlobalAddAtomA("system");
  *(ATOM *)(param_1 + 0xaa) = AVar1;
  return;
}


