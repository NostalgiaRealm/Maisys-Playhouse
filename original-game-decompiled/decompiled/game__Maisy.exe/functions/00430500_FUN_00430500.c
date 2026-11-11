
/* ==== FUN_00430500 @ 00430500 ==== 
 * signature: undefined __thiscall FUN_00430500(void * this, undefined4 param_1)
 * body: 00430500-00430534
 */

void __thiscall FUN_00430500(void *this,undefined4 param_1)

{
  HLOCAL pvVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  pvVar1 = FUN_0043f6f0(4);
  *(HLOCAL *)((int)this + 8) = pvVar1;
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_004a3538();
  }
  return;
}


