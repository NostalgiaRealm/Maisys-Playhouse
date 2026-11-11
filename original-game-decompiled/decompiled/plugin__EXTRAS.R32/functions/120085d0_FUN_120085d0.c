
/* ==== FUN_120085d0 @ 120085d0 ==== 
 * signature: undefined4 __cdecl FUN_120085d0(int param_1, int param_2, short param_3)
 * body: 120085d0-120086bd
 */

undefined4 __cdecl FUN_120085d0(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  undefined2 uStack_14;
  ushort uStack_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_10);
    DAT_12039a9c = (*pcVar1)(local_10,2,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,4,param_1 + 10);
    uStack_14 = 0x14;
    uStack_12 = (ushort)((*(uint *)(param_1 + 0x1e) & 2) >> 1);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,0xb,&uStack_14);
    uStack_14 = 0x14;
    uStack_12 = (ushort)*(undefined4 *)(param_1 + 0x1e) & 1;
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,0xc,&uStack_14);
    return 0;
  }
  return 0x10000;
}


