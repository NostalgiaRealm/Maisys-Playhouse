
/* ==== FUN_140028a0 @ 140028a0 ==== 
 * signature: undefined4 __cdecl FUN_140028a0(undefined4 param_1)
 * body: 140028a0-14002a91
 */

undefined4 __cdecl FUN_140028a0(undefined4 param_1)

{
  code *pcVar1;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_24);
  DAT_14028e48 = (*pcVar1)(local_24,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1,s_listeningport_140260e4,1,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1,s_maxconnections_140260d0,1,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1,s_timeoutperiod_140260bc,1,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1,s_localip_140260a8,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1,s_sourceip_14026094,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,s_sourcepath_14026080,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,s_sourceparentpath_1402606c,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,s_outgoingmsg_14026058,0x65,3);
  return 0;
}


