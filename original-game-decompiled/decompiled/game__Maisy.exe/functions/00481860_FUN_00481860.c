
/* ==== FUN_00481860 @ 00481860 ==== 
 * signature: undefined4 __thiscall FUN_00481860(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 00481860-004818b2
 */

undefined4 __thiscall FUN_00481860(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((((*(char *)((int)this + 0x148) != '\0') || (*(char *)((int)this + 0x149) != '\x01')) &&
      (cVar1 = *(char *)((int)this + 0x149), cVar1 != '\x02')) &&
     ((cVar1 != '\t' && (cVar1 != '\b')))) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    return 0;
  }
  FUN_0044aec0(param_2,(undefined2 *)param_1);
  return 0;
}


