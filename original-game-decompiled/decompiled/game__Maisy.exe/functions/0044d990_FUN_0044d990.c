
/* ==== FUN_0044d990 @ 0044d990 ==== 
 * signature: undefined4 __thiscall FUN_0044d990(void * this, int param_1)
 * body: 0044d990-0044d9cc
 */

undefined4 __thiscall FUN_0044d990(void *this,int param_1)

{
  int iVar1;
  undefined1 local_20 [16];
  undefined4 local_10;
  
  if (0 < param_1) {
    iVar1 = FUN_0044e340((int)this);
    if (param_1 <= iVar1) {
      FUN_00430370(*(void **)((int)this + 0x30),param_1,local_20);
      return local_10;
    }
  }
  return 0;
}


