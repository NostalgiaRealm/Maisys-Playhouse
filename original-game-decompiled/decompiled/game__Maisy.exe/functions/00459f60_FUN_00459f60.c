
/* ==== FUN_00459f60 @ 00459f60 ==== 
 * signature: undefined __fastcall FUN_00459f60(void * param_1)
 * body: 00459f60-00459fb3
 */

void __fastcall FUN_00459f60(void *param_1)

{
  int iVar1;
  undefined4 unaff_EBP;
  undefined4 local_c;
  short local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  FUN_0045a350(param_1,(undefined2 *)&local_c,&local_6,(undefined1 *)0x0);
  FUN_0045abf0(param_1,s_Layout_004dc0d4,0,0,local_6,1,0);
  FUN_0045a390(param_1,local_c,local_6);
  iVar1 = FUN_00466a70((int)param_1);
  *(undefined4 *)((int)param_1 + 0x9e) = *(undefined4 *)(iVar1 + 0x3e);
  return;
}


