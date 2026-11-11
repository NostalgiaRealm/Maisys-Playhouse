
/* ==== FUN_00442260 @ 00442260 ==== 
 * signature: undefined __thiscall FUN_00442260(void * this, WPARAM param_1, short param_2, short param_3)
 * body: 00442260-004422a5
 */

void __thiscall FUN_00442260(void *this,WPARAM param_1,short param_2,short param_3)

{
  char cVar1;
  
  FUN_004296b0((void *)0x0);
  FUN_00410ca0(DAT_004da390,0x28);
  cVar1 = FUN_004402b0(*(void **)((int)this + 0x3c));
  if (cVar1 == '\0') {
    FUN_004421c0(this,0x202,param_1,param_2,param_3);
  }
  return;
}


