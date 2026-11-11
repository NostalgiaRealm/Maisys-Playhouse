
/* ==== FUN_1000bde0 @ 1000bde0 ==== 
 * signature: undefined __stdcall FUN_1000bde0(void)
 * body: 1000bde0-1000be13
 */

void FUN_1000bde0(void)

{
  LONG LVar1;
  int lOffset;
  
  lOffset = *(int *)(DAT_1002392c + 8) - *(int *)(DAT_1002392c + 0xc);
  LVar1 = _llseek(*(HFILE *)(DAT_1002392c + 0x18),0,2);
  if ((lOffset < LVar1) && (-1 < lOffset)) {
    _llseek(*(HFILE *)(DAT_1002392c + 0x18),lOffset,0);
  }
  return;
}


