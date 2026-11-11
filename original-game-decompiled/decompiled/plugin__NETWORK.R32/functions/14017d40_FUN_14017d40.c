
/* ==== FUN_14017d40 @ 14017d40 ==== 
 * signature: undefined4 __cdecl FUN_14017d40(int param_1, int param_2)
 * body: 14017d40-140180ff
 */

undefined4 __cdecl FUN_14017d40(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_648;
  undefined4 local_644;
  int local_640;
  int local_63c;
  undefined4 local_638;
  undefined1 auStack_632 [70];
  undefined2 uStack_5ec;
  undefined2 uStack_5a2;
  undefined2 *puStack_232;
  int iStack_22c;
  undefined2 uStack_228;
  undefined2 uStack_226;
  undefined4 uStack_218;
  int iStack_214;
  undefined4 uStack_210;
  char local_200 [256];
  undefined1 local_100 [256];
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  puVar5 = &local_638;
  for (iVar4 = 0x10d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  FUN_14018100(param_1);
  cVar1 = FUN_140181b0(param_1,(short *)(param_2 + 0x26));
  if (cVar1 == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_No_address_specified_14026d50);
    return 0;
  }
  FUN_14012750(*(int *)(param_1 + 0x70),0,(int)local_100);
  FUN_14012750(*(int *)(param_1 + 0x70),1,(int)local_200);
  if (local_200[0] == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Host_not_specified_14026770);
    return 0;
  }
  local_644 = 0;
  local_640 = 0;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x22,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,param_1,s_nProcessSrv_140262e0,0xffffffff,0,&local_63c);
  if (DAT_14028e48 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Cannot_locate_net_service_140266fc);
    return 0;
  }
  uStack_5ec = 0x40;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,auStack_632,local_200);
  uStack_218 = 0;
  uVar3 = FUN_14013780(param_1,&uStack_218,&local_644,&local_640,*(int *)(param_1 + 0x70),3,
                       *(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x82),
                       *(undefined4 *)(param_1 + 0x7e));
  if ((char)uVar3 == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Error_forming_HTTP_message_14026754);
    return 0;
  }
  uStack_210 = local_644;
  iStack_214 = local_640;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,0x12,&puStack_232);
  if (DAT_14028e48 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Out_of_memory__14026358);
    return 0;
  }
  *puStack_232 = 0x69;
  *(undefined4 *)(puStack_232 + 3) = 0;
  *(undefined4 *)(puStack_232 + 5) = 0;
  *(undefined4 *)(puStack_232 + 1) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(puStack_232 + 7) = 0;
  uStack_228 = 1;
  iStack_22c = param_1;
  uStack_226 = 0;
  uStack_5a2 = 1;
  pcVar2 = (code *)FUN_14008ab0(local_63c,1,2,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,&local_638);
  return 0;
}


