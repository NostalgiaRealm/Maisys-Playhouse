
/* ==== FUN_0045c3c0 @ 0045c3c0 ==== 
 * signature: undefined __thiscall FUN_0045c3c0(void * this, int * param_1)
 * body: 0045c3c0-0045c50b
 */

void __thiscall FUN_0045c3c0(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 local_24 [5];
  undefined4 local_1a;
  
  if (((*(int *)((int)this + 4) != 0) && ((*(uint *)((int)param_1 + 0x1e) & 0x10) != 0)) &&
     (*(int *)(*(int *)((int)this + 4) + 0x26) != 0)) {
    if ((*(uint *)((int)param_1 + 0x1e) & 0x20000000) == 0) {
      iVar3 = 1;
      pcVar1 = *(code **)(*param_1 + 0x274);
      while( true ) {
        local_24[0] = (undefined2)iVar3;
        iVar2 = (*pcVar1)(local_24,iVar3);
        if (iVar2 != 0) break;
        iVar3 = iVar3 + 1;
        (**(code **)(**(int **)((int)this + 4) + 0x10c))(local_1a,1,1);
      }
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0x2a4);
      iVar2 = (*pcVar1)(local_24,0x80000000,1);
      iVar3 = 0;
      while (iVar2 == 0) {
        (**(code **)(**(int **)((int)this + 4) + 0x10c))(local_1a,1,1);
        iVar2 = (*pcVar1)(local_24,0x80000000,iVar3 + 2);
        iVar3 = iVar3 + 1;
      }
      iVar2 = (*pcVar1)(local_24,0x40000000,1);
      iVar3 = 0;
      while (iVar2 == 0) {
        (**(code **)(**(int **)((int)this + 4) + 0x10c))(local_1a,1,1);
        iVar2 = (*pcVar1)(local_24,0x40000000,iVar3 + 2);
        iVar3 = iVar3 + 1;
      }
      iVar2 = (*pcVar1)(local_24,0x20000000,1);
      iVar3 = 0;
      while (iVar2 == 0) {
        (**(code **)(**(int **)((int)this + 4) + 0x10c))(local_1a,1,1);
        iVar2 = (*pcVar1)(local_24,0x20000000,iVar3 + 2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  return;
}


