
/* ==== FUN_0046cfe0 @ 0046cfe0 ==== 
 * signature: byte __thiscall FUN_0046cfe0(void * this, undefined4 param_1, undefined4 param_2, undefined * param_3, char * param_4, undefined4 param_5)
 * body: 0046cfe0-0046d053
 */

byte __thiscall
FUN_0046cfe0(void *this,undefined4 param_1,undefined4 param_2,undefined *param_3,char *param_4,
            undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  void *this_00;
  byte bVar3;
  
  bVar3 = 0;
  if ((((*(uint *)((int)this + 0x26) & 0x80000000) == 0) && ((char)param_1 != '\0')) &&
     ((*(uint *)((int)this + 0x26) & 0x10000000) != 0)) {
    bVar3 = 1;
    cVar1 = (*(code *)param_3)(this,param_5);
    *param_4 = cVar1;
  }
  this_00 = (void *)FUN_00469fb0(this);
  cVar1 = *param_4;
  for (; (cVar1 != '\0' && (this_00 != (void *)0x0)); this_00 = *(void **)((int)this_00 + 0x6a)) {
    bVar2 = FUN_0046cfe0(this_00,param_1,param_2,param_3,param_4,param_5);
    bVar3 = bVar3 | bVar2;
    cVar1 = *param_4;
  }
  return bVar3;
}


