
/* ==== FUN_00428580 @ 00428580 ==== 
 * signature: SIZE_T __thiscall FUN_00428580(void * this, undefined4 param_1, int param_2)
 * body: 00428580-004285d8
 */

SIZE_T __thiscall FUN_00428580(void *this,undefined4 param_1,int param_2)

{
  SIZE_T SVar1;
  
  SVar1 = 0;
  if (((*(HGLOBAL *)((int)this + 0xb8) != (HGLOBAL)0x0) && (*(short *)((int)this + 0x24) <= param_2)
      ) && (*(short *)((int)this + 0xc0) == 0)) {
    SVar1 = GlobalSize(*(HGLOBAL *)((int)this + 0xb8));
    FUN_0043f7a0(*(HGLOBAL *)((int)this + 0xb8));
    *(undefined2 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined1 *)((int)this + 0xf9) = 0;
  }
  return SVar1;
}


