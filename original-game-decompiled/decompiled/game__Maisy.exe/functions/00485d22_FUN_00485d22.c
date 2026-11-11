
/* ==== FUN_00485d22 @ 00485d22 ==== 
 * signature: undefined4 __fastcall FUN_00485d22(int param_1, byte * param_2, undefined4 param_3, char * param_4)
 * body: 00485d22-00485d23
 */

undefined4 __fastcall FUN_00485d22(int param_1,byte *param_2,undefined4 param_3,char *param_4)

{
  undefined1 uVar1;
  short sVar2;
  byte *in_EAX;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  byte bVar5;
  void *this;
  bool in_ZF;
  int unaff_retaddr;
  int iStack_4;
  
  if (!in_ZF) {
    in_EAX[-0x1bffb7a6] = in_EAX[-0x1bffb7a6] + (char)((uint)(in_EAX + -1) >> 8);
    *param_2 = *param_2 + (char)((uint)(in_EAX + -2) >> 8);
    in_EAX[0x22004859] = in_EAX[0x22004859] + (char)in_EAX + -3;
    bVar5 = (byte)param_1;
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),
                       CONCAT11((char)((uint)param_1 >> 8) + bVar5,bVar5));
    *param_2 = *param_2 + (char)((uint)(in_EAX + -5) >> 8);
    *(char *)(unaff_retaddr + 0x5b) = *(char *)(unaff_retaddr + 0x5b) + (char)unaff_retaddr;
    in_EAX = in_EAX + -7;
    *in_EAX = *in_EAX + (char)in_EAX;
    *(int *)in_EAX = *(int *)in_EAX + param_1;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
    *in_EAX = *in_EAX | bVar5;
  }
  bVar5 = (byte)param_1;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  *param_2 = *param_2 | (byte)in_EAX;
  this = (void *)(param_1 + *(int *)in_EAX);
  bVar5 = (byte)this;
  *in_EAX = *in_EAX | bVar5;
  *in_EAX = *in_EAX | bVar5;
  in_EAX[(int)this] = in_EAX[(int)this] | (byte)in_EAX;
  in_EAX[0x6080808] = in_EAX[0x6080808] | bVar5;
  iStack_4 = 0;
  iVar3 = FUN_00485410(this,(undefined2 *)param_4,&iStack_4,1);
  if (iVar3 != 0) {
    return 0x60001;
  }
  uVar1 = FUN_00484f10(this,1);
  sVar2 = (short)CONCAT31(extraout_var,uVar1);
  if (sVar2 == 0) {
    uVar4 = FUN_00485b30(this,param_4,&iStack_4);
    return uVar4;
  }
  if (sVar2 != 1) {
    if (sVar2 != 2) {
      return 0x10000;
    }
    uVar4 = FUN_00485480(this,(undefined2 *)param_4,&iStack_4);
    return uVar4;
  }
  uVar4 = FUN_00485480(this,(undefined2 *)param_4,&iStack_4);
  return uVar4;
}


