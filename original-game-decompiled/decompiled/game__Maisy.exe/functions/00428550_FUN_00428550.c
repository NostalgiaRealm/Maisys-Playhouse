
/* ==== FUN_00428550 @ 00428550 ==== 
 * signature: int __fastcall FUN_00428550(int param_1)
 * body: 00428550-00428572
 */

int __fastcall FUN_00428550(int param_1)

{
  int iVar1;
  SIZE_T SVar2;
  
  iVar1 = FUN_0040d5d0(param_1);
  if (*(HGLOBAL *)(param_1 + 0xb8) != (HGLOBAL)0x0) {
    SVar2 = GlobalSize(*(HGLOBAL *)(param_1 + 0xb8));
    iVar1 = iVar1 + SVar2;
  }
  return iVar1;
}


