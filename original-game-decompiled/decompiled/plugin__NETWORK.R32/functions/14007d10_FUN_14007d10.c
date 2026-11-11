
/* ==== FUN_14007d10 @ 14007d10 ==== 
 * signature: undefined4 __cdecl FUN_14007d10(uint * param_1, char * param_2, undefined4 * param_3, int param_4)
 * body: 14007d10-14007e55
 */

undefined4 __cdecl FUN_14007d10(uint *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  int local_18;
  undefined4 local_14;
  int iStack_10;
  undefined1 auStack_c [6];
  int iStack_6;
  short sStack_2;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,0,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,0xc,&local_14);
  FUN_14015100(param_2,param_3,local_14);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,local_14,3,auStack_c);
  if (iStack_6 != 0) {
    *(undefined1 *)(sStack_2 + iStack_6) = 0;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&local_18);
    DAT_14028e48 = (*pcVar1)(local_18,&iStack_10,iStack_6,"mMsg/1.1");
    if (iStack_10 == 0) {
      FUN_14007e80(param_1,local_14,param_2,*param_3,param_4);
    }
    else {
      FUN_14008380(param_1,local_14,param_2,*param_3,param_4);
    }
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,local_14);
  return 0;
}


