
/* ==== FUN_00422fc0 @ 00422fc0 ==== 
 * signature: char __thiscall FUN_00422fc0(void * this, int param_1, char param_2, undefined4 param_3)
 * body: 00422fc0-00423096
 */

char __thiscall FUN_00422fc0(void *this,int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x26);
  cVar2 = '\0';
  iVar4 = 1;
  FUN_00430190((int)this);
  if (0 < iVar1) {
    do {
      if (cVar2 != '\0') break;
      iVar3 = FUN_004301c0(this,iVar4);
      if (*(int *)(iVar3 + 8) == param_1) {
        FUN_004301f0((int)this);
        if (param_2 != '\0') {
          FUN_0042fd40(this,iVar1,iVar4);
          (**(code **)(*(int *)this + 0xf8))(iVar1);
          FUN_00430090(this,iVar1);
          return '\x01';
        }
        (**(code **)(*(int *)this + 0xf8))();
        FUN_00430090(this,iVar4);
        return '\x01';
      }
      if (((char)param_3 != '\0') && (*(int *)(iVar3 + 4) == 1)) {
        cVar2 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x10c))(param_1,param_3,1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar1);
  }
  FUN_004301f0((int)this);
  return cVar2;
}


