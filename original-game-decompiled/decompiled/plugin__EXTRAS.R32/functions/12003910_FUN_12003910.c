
/* ==== FUN_12003910 @ 12003910 ==== 
 * signature: undefined __thiscall FUN_12003910(void * this, undefined1 param_1)
 * body: 12003910-1200393d
 */

void __thiscall FUN_12003910(void *this,undefined1 param_1)

{
  longlong lVar1;
  
  *(undefined1 *)((int)this + 100) = param_1;
  lVar1 = __ftol();
  *(int *)((int)this + 0x68) = (int)lVar1;
  if (*(char *)((int)this + 0x1a) != '\0') {
    FUN_12003880(this,(int)lVar1);
  }
  return;
}


