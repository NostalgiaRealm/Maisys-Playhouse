
/* ==== FUN_0042c660 @ 0042c660 ==== 
 * signature: undefined __thiscall FUN_0042c660(void * this, int param_1)
 * body: 0042c660-0042c710
 */

void __thiscall FUN_0042c660(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short local_24 [3];
  int local_1e;
  int local_1a;
  
  iVar1 = *(int *)this;
  sVar4 = 1;
LAB_0042c671:
  do {
    local_24[0] = sVar4;
    iVar2 = (**(code **)(iVar1 + 0x274))(local_24,sVar4);
    if (iVar2 != 0) {
      return;
    }
    if ((899 < local_1e) && (local_1e < 1000)) {
      iVar2 = local_1a;
      iVar3 = FUN_00466a60(param_1);
      FUN_00466a60(*(int *)((int)this + 4));
      iVar2 = FUN_00479da0(iVar3,iVar2);
      if (iVar2 == -1) {
        local_1a = -0x18;
        (**(code **)(iVar1 + 0x278))(local_24,sVar4);
      }
      else if ((local_1e != 900) || (iVar2 != local_1a)) {
        local_1e = 900;
        local_24[0] = sVar4;
        local_1a = iVar2;
        (**(code **)(iVar1 + 0x278))(local_24,sVar4);
        sVar4 = sVar4 + 1;
        goto LAB_0042c671;
      }
    }
    sVar4 = sVar4 + 1;
  } while( true );
}


