
/* ==== FUN_00450260 @ 00450260 ==== 
 * signature: undefined2 __thiscall FUN_00450260(void * this, short param_1)
 * body: 00450260-00450291
 */

undefined2 __thiscall FUN_00450260(void *this,short param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [8];
  int local_c;
  
  uVar1 = FUN_00430370(*(void **)((int)this + 0x26),(int)param_1,local_14);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return *(undefined2 *)(local_c + 0xc);
}


