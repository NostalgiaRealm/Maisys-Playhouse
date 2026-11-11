
/* ==== FUN_10005350 @ 10005350 ==== 
 * signature: undefined __cdecl FUN_10005350(int param_1, short * param_2, undefined4 * param_3, int param_4)
 * body: 10005350-100054cf
 */

void __cdecl FUN_10005350(int param_1,short *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  code *pcVar4;
  uint uVar5;
  undefined2 local_14;
  undefined4 local_12;
  int local_e;
  uint local_a;
  undefined4 *local_6;
  
  psVar2 = param_2;
  if ((*param_2 == 0x73) &&
     (psVar3 = FUN_10005220(param_1,param_2,(int *)&param_2), *psVar3 == 0x66)) {
    uVar5 = (uint)(short)param_4;
    local_14 = 0x66;
    iVar1 = uVar5 + 1;
    local_12 = 0xffffffff;
    local_e = 0;
    local_a = 0;
    local_6 = (undefined4 *)0x0;
    if (0 < iVar1) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,&local_6,iVar1);
      if (local_6 != (undefined4 *)0x0) {
        *(undefined1 *)local_6 = 0;
        local_e = iVar1;
      }
    }
    FUN_100094f0(local_6,param_3,uVar5);
    *(undefined1 *)((int)local_6 + uVar5) = 0;
    local_a = uVar5;
    if (param_2 == (short *)0x0) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,*(undefined4 *)(psVar2 + 1),s_value_1001312c,0,&local_14);
    }
    else {
      pcVar4 = (code *)FUN_100089c7((int)param_2,0,0x17,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,s_value_1001312c,0,&local_14);
    }
    if (local_6 != (undefined4 *)0x0) {
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0x10,&param_4);
      DAT_100173bc = (*pcVar4)(param_4,local_6);
    }
  }
  return;
}


