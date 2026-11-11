
/* ==== FUN_14004310 @ 14004310 ==== 
 * signature: undefined4 __cdecl FUN_14004310(int * param_1)
 * body: 14004310-1400475d
 */

undefined4 __cdecl FUN_14004310(int *param_1)

{
  char *pcVar1;
  LONG *pLVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  short *psVar8;
  short *psVar9;
  int local_8;
  int iStack_4;
  
  pLVar2 = (LONG *)((int)param_1 + 0x516);
  psVar8 = (short *)*pLVar2;
  if (psVar8 != (short *)0x0) {
    *psVar8 = *psVar8 + 1;
LAB_1400432e:
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&local_8);
    DAT_14028e48 = (*pcVar3)(local_8,0x58,(int)param_1 + 0x6e);
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Out_of_memory__14026358);
      return 0;
    }
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&local_8);
    DAT_14028e48 = (*pcVar3)(local_8,0x436,(int)param_1 + 0x6a);
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Out_of_memory__14026358);
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x4b6) = *(undefined4 *)((int)param_1 + 0x1a);
    param_1[299] = param_1[8];
    iVar5 = 0;
    piVar6 = param_1 + 0x12a;
    psVar8 = &DAT_140240f8;
    do {
      iVar4 = iVar5 << ((byte)iVar5 & 0x1f);
      psVar9 = psVar8 + 1;
      iVar5 = iVar5 + 1;
      *piVar6 = iVar4;
      piVar6[1] = (int)*psVar8;
      *(undefined1 *)(piVar6 + 2) = 0;
      piVar6 = (int *)((int)piVar6 + 10);
      psVar8 = psVar9;
    } while (psVar9 < &DAT_14024102);
    FUN_14005e40((int)param_1,1);
    *(undefined1 *)((int)param_1 + 0x4de) = 1;
    return 0;
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&local_8);
  DAT_14028e48 = (*pcVar3)(local_8,0x1dc,pLVar2);
  if (DAT_14028e48 != 0) {
    pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
    DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Out_of_memory__14026358);
    return 0;
  }
  DAT_14028e48 = 0;
  puVar7 = (undefined4 *)*pLVar2;
  for (iVar5 = 0x77; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)(*pLVar2 + 2) = 0;
  *(short *)*pLVar2 = *(short *)*pLVar2 + 1;
  iVar5 = FUN_1400d0b0((undefined1 *)(*pLVar2 + 0x72),*pLVar2);
  if (iVar5 == 0) {
    iVar5 = FUN_1400d190();
    if (iVar5 == 0) {
      if (*(char *)(*pLVar2 + 0x72) != '\0') {
        DAT_14026034 = 1;
      }
      pcVar1 = (char *)(*pLVar2 + 0x2a);
      if (*pcVar1 == '\0') {
        FUN_14007260(*(uint *)(*pLVar2 + 0x6a),pcVar1);
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,0xf2,*pLVar2 + 0x1c);
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&iStack_4);
      DAT_14028e48 = (*pcVar3)(iStack_4,0x9e,*pLVar2 + 0x20);
      iVar5 = FUN_14005f80(param_1,pLVar2);
      if (iVar5 != 0) {
        FUN_140060e0(param_1,pLVar2);
        pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
        DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Error_creating_server_stream_14026328);
        return 0;
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x1e,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,param_1,param_1,0);
      if (DAT_14028e48 != 0) {
        pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
        DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Error_registering_net_service_14026308);
        return 0;
      }
      goto LAB_1400432e;
    }
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,1,&local_8);
  DAT_14028e48 = (*pcVar3)(local_8,*pLVar2);
  *pLVar2 = 0;
  FUN_14007300((int)param_1,*param_1,0x835,0);
  pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&iStack_4);
  DAT_14028e48 = (*pcVar3)(iStack_4,param_1,1,s_Network_failed_14026348);
  return 0;
}


