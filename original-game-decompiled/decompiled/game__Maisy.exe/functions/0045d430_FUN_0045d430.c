
/* ==== FUN_0045d430 @ 0045d430 ==== 
 * signature: char __thiscall FUN_0045d430(void * this, char * param_1, short param_2)
 * body: 0045d430-0045d51d
 */

char __thiscall FUN_0045d430(void *this,char *param_1,short param_2)

{
  bool bVar1;
  void *this_00;
  undefined4 uVar2;
  char cVar3;
  undefined4 unaff_EBP;
  short *psVar4;
  int iVar5;
  int iVar6;
  char local_108 [258];
  short local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  cVar3 = '\0';
  iVar6 = 0;
  iVar5 = 0;
  psVar4 = &local_6;
  this_00 = (void *)FUN_00466a70(*(int *)((int)this + 4));
  FUN_0044d630(this_00,psVar4,iVar5,iVar6);
  if (param_2 == 1) {
    (**(code **)(*(int *)this + 300))(local_108);
    uVar2 = FUN_0043ed80(&local_6,local_108);
    if ((char)uVar2 != '\0') {
      cVar3 = '\x01';
    }
  }
  if (cVar3 == '\0') {
    FUN_0043e0a0(0,param_1,(int)local_108);
    uVar2 = FUN_0043ed80(&local_6,local_108);
    if ((char)uVar2 == '\0') {
      (**(code **)(*(int *)this + 0x178))(CONCAT22(uStack_4,local_6));
      do {
        uVar2 = FUN_0043ed80(&local_6,local_108);
        if ((char)uVar2 != '\0') {
          cVar3 = '\x01';
          goto LAB_0045d4fa;
        }
        bVar1 = FUN_0043f380(CONCAT22(uStack_4,local_6),local_108);
      } while (bVar1);
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
  }
LAB_0045d4fa:
  if (cVar3 == '\x01') {
    iVar5 = FUN_00466a70(*(int *)((int)this + 4));
    *(short *)(iVar5 + 0x5e) = local_6;
  }
  return cVar3;
}


