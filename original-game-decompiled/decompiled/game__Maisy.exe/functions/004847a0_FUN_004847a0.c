
/* ==== FUN_004847a0 @ 004847a0 ==== 
 * signature: undefined4 __cdecl FUN_004847a0(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, ushort param_7)
 * body: 004847a0-0048496b
 */

undefined4 __cdecl
FUN_004847a0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,ushort param_7)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 unaff_EBP;
  undefined1 local_44 [20];
  undefined1 local_30 [12];
  int *local_24;
  undefined1 local_1c [12];
  int *local_10;
  undefined2 local_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  if ((param_2 != (int *)0x0) && (*(short *)((int)param_2 + 0x22) == 0x69)) {
    if (((param_7 & 1) != 0) &&
       (piVar3 = (int *)(**(code **)(*param_2 + 0x108))(7), piVar3 != (int *)0x0)) {
      cVar2 = (**(code **)(*piVar3 + 0x124))(1,s_Modifier_Messages_004dcd78,local_1c,0,0);
      if (cVar2 == '\0') {
        pcVar1 = *(code **)(*piVar3 + 0x100);
        local_8 = SUB42(pcVar1,0);
        uStack_6 = (undefined2)((uint)pcVar1 >> 0x10);
        (*pcVar1)(&DAT_004dcd74,0,0,0,0);
        (*(code *)CONCAT22(uStack_6,local_8))(s_Modifier_Messages_004dcd78,1,0xc,local_1c,0);
      }
      cVar2 = (**(code **)(*local_10 + 0x124))(1,param_4,local_30,0,0);
      if (cVar2 == '\0') {
        (**(code **)(*local_10 + 0x100))(param_4,1,0xffffffff,local_30,0);
      }
      (**(code **)(*local_24 + 0x100))(param_6,0,param_5,0,0);
    }
    if (((param_7 & 2) != 0) &&
       (piVar3 = (int *)(**(code **)(*param_2 + 0x108))(6), piVar3 != (int *)0x0)) {
      pcVar1 = *(code **)(*piVar3 + 0x124);
      cVar2 = (*pcVar1)(1,s_Modifier_Messages_004dcd78,local_1c,0,0);
      if (cVar2 == '\0') {
        (*pcVar1)(1,s_Get_Attribute_004dcd64,local_44,0,&uStack_6);
        pcVar1 = *(code **)(*piVar3 + 0x100);
        (*pcVar1)(&DAT_004dcd74,0,0,local_44,CONCAT22(uStack_4,uStack_6));
        (*pcVar1)(s_Modifier_Messages_004dcd78,1,0xc,local_1c,CONCAT22(uStack_4,uStack_6));
      }
      cVar2 = (**(code **)(*local_10 + 0x124))(1,param_4,local_30,0,0);
      if (cVar2 == '\0') {
        (**(code **)(*local_10 + 0x100))(param_4,1,0xffffffff,local_30,0);
      }
      (**(code **)(*local_24 + 0x100))(param_6,0,param_5,0,0);
    }
    return 0;
  }
  return 0x10000;
}


