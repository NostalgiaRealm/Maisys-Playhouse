
/* ==== FUN_0044be50 @ 0044be50 ==== 
 * signature: undefined __thiscall FUN_0044be50(void * this, char param_1)
 * body: 0044be50-0044beba
 */

void __thiscall FUN_0044be50(void *this,char param_1)

{
  int *piVar1;
  
  if ((*(int *)((int)this + 0x7e) != 0) && (FUN_0044bb40(this), param_1 != '\0')) {
    FUN_0044bad0(this);
    FUN_0044c470((int)this);
    FUN_0044bcb0(this,0x40,'\0');
    piVar1 = (int *)FUN_0041ed90((int)this);
    (**(code **)(*piVar1 + 0x78))(0xb,this,0);
    piVar1 = (int *)FUN_0041ed90((int)this);
    (**(code **)(*piVar1 + 0x78))(0xc,this,0);
  }
  FUN_0042b5f0((int)this);
  return;
}


