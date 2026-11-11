
/* ==== FUN_004818c0 @ 004818c0 ==== 
 * signature: undefined4 __thiscall FUN_004818c0(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 004818c0-0048190e
 */

undefined4 __thiscall FUN_004818c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  if ((((*(char *)((int)this + 0x148) != '\0') || (*(char *)((int)this + 0x149) != '\x01')) &&
      (cVar1 = *(char *)((int)this + 0x149), cVar1 != '\x02')) &&
     ((cVar1 != '\t' && (cVar1 != '\b')))) {
    *param_1 = *param_2;
    return 0;
  }
  FUN_0044af20();
  return 0;
}


