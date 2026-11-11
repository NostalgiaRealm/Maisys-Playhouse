
/* ==== FUN_00413920 @ 00413920 ==== 
 * signature: char __thiscall FUN_00413920(void * this, short param_1)
 * body: 00413920-0041393c
 */

char __thiscall FUN_00413920(void *this,short param_1)

{
  char cVar1;
  
  if (*(void **)((int)this + 0x12) != (void *)0x0) {
    cVar1 = FUN_00414030(*(void **)((int)this + 0x12),param_1);
    return cVar1;
  }
  return '\0';
}


