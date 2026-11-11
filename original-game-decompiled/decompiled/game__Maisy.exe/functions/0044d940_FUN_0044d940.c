
/* ==== FUN_0044d940 @ 0044d940 ==== 
 * signature: byte __thiscall FUN_0044d940(void * this, int param_1)
 * body: 0044d940-0044d97e
 */

byte __thiscall FUN_0044d940(void *this,int param_1)

{
  int iVar1;
  undefined1 local_20 [24];
  byte local_8;
  
  if (0 < param_1) {
    iVar1 = FUN_0044e340((int)this);
    if (param_1 <= iVar1) {
      FUN_00430370(*(void **)((int)this + 0x30),param_1,local_20);
      return local_8 & 1;
    }
  }
  return 1;
}


