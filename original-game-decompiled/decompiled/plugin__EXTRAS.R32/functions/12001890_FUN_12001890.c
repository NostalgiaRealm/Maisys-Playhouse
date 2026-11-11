
/* ==== FUN_12001890 @ 12001890 ==== 
 * signature: int __cdecl FUN_12001890(int param_1, uint param_2, short * param_3)
 * body: 12001890-12001a12
 */

int __cdecl FUN_12001890(int param_1,uint param_2,short *param_3)

{
  code *pcVar1;
  int iVar2;
  uint local_78;
  int iStack_74;
  int iStack_70;
  short asStack_6c [10];
  int local_58 [11];
  short asStack_2c [22];
  
  local_78 = 0;
  if ((int)param_2 < 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    return 0x10000;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_12023290(param_1);
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_58);
  DAT_12039a9c = (*pcVar1)(local_58[0],*(undefined4 *)(param_1 + 0x10),&local_78);
  FUN_12023eb0(*(short *)(param_1 + 0xe),asStack_2c);
  if ((*(short *)(param_1 + 0xe) == -1) && (*param_3 == 0)) {
    asStack_6c[3] = 0;
    asStack_6c[4] = 0;
    asStack_6c[5] = 0;
    asStack_6c[6] = 0;
    param_3 = asStack_6c;
    asStack_6c[1] = 0;
    asStack_6c[2] = 0;
    asStack_6c[0] = 0x69;
    asStack_6c[7] = 0;
    asStack_6c[8] = 0;
  }
  iVar2 = FUN_12018ee0(param_1,param_3,asStack_2c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    return iVar2;
  }
  if (local_78 < param_2) {
    FUN_12023770(param_1,*(int *)(param_1 + 0x10),(uint)*(ushort *)(param_1 + 0xe),param_2);
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&iStack_74);
  DAT_12039a9c = (*pcVar1)(iStack_74,*(undefined4 *)(param_1 + 0x10),param_2,local_58);
  FUN_12018a40(param_1,(short *)local_58);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,7,&iStack_70);
  DAT_12039a9c = (*pcVar1)(iStack_70,*(undefined4 *)(param_1 + 0x10),param_2,asStack_2c);
  return 0;
}


