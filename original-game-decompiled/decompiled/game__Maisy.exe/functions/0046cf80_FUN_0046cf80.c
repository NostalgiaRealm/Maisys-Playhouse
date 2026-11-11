
/* ==== FUN_0046cf80 @ 0046cf80 ==== 
 * signature: undefined __thiscall FUN_0046cf80(void * this, undefined * param_1, char * param_2, undefined4 param_3)
 * body: 0046cf80-0046cfd5
 */

void __thiscall FUN_0046cf80(void *this,undefined *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  void *this_00;
  
  if ((*(byte *)((int)this + 0x29) & 0x80) == 0) {
    cVar1 = (*(code *)param_1)(this,param_3);
    *param_2 = cVar1;
  }
  this_00 = (void *)FUN_00469fb0(this);
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (this_00 != (void *)0x0)); this_00 = *(void **)((int)this_00 + 0x6a)) {
    FUN_0046cf80(this_00,param_1,param_2,param_3);
    cVar1 = *param_2;
  }
  return;
}


