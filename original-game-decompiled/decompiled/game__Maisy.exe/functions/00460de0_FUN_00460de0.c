
/* ==== FUN_00460de0 @ 00460de0 ==== 
 * signature: undefined __thiscall FUN_00460de0(void * this, int * param_1, char param_2)
 * body: 00460de0-00460e41
 */

void __thiscall FUN_00460de0(void *this,int *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)this + 0x3a) != 0) && (*(char *)((int)this + 0x146) != '\0')) {
    uVar3 = FUN_00460d70(this);
    if ((char)uVar3 == '\0') {
      cVar1 = (**(code **)(*(int *)this + 0x130))();
      if (cVar1 == '\0') {
        bVar2 = FUN_00408450(*(int *)((int)this + 0x3a));
        if ((!bVar2) && (param_2 == '\0')) {
          FUN_00408560(*(void **)((int)this + 0x3a),param_1);
          return;
        }
      }
      FUN_004087c0(*(void **)((int)this + 0x3a),(short *)param_1,'\x01');
    }
  }
  return;
}


