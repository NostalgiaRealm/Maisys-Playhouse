
/* ==== CTimeSpan::Format @ 004a50be ==== 
 * signature: CString __thiscall Format(CTimeSpan * this, char * param_1)
 * body: 004a50be-004a5213
 * note: Library Function - Single Match  public: class CString __thiscall CTimeSpan::Format(char const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CTimeSpan::Format(char const *)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CTimeSpan::Format(CTimeSpan *this,char *param_1)

{
  byte bVar1;
  CString *this_00;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int *extraout_ECX;
  byte *pbVar5;
  int unaff_EBP;
  byte *pbVar6;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  pbVar5 = (byte *)(unaff_EBP + -0x94);
  bVar1 = **(byte **)(unaff_EBP + 0xc);
  pbVar3 = *(byte **)(unaff_EBP + 0xc);
  do {
    if (bVar1 == 0) {
      this_00 = *(CString **)(unaff_EBP + 8);
      *pbVar5 = 0;
      CString::CString(this_00,(char *)(unaff_EBP + -0x94));
      uVar2 = *(undefined4 *)(unaff_EBP + 8);
      *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
      *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
      return uVar2;
    }
    pbVar6 = pbVar3 + 1;
    if (bVar1 == 0x25) {
      bVar1 = *pbVar6;
      pbVar6 = pbVar3 + 2;
      if (bVar1 == 0x44) {
        iVar4 = wsprintfA((LPSTR)pbVar5,&DAT_004db52c,*extraout_ECX / 0x15180);
        pbVar5 = pbVar5 + iVar4;
      }
      else if (bVar1 == 0x48) {
        iVar4 = *extraout_ECX;
        *(undefined4 *)(unaff_EBP + -0x10) = 0xe10;
        iVar4 = wsprintfA((LPSTR)pbVar5,"%02d",
                          (iVar4 / -0x15180) * 0x18 + *extraout_ECX / *(int *)(unaff_EBP + -0x10));
        pbVar5 = pbVar5 + iVar4;
      }
      else if (bVar1 == 0x4d) {
        iVar4 = *extraout_ECX;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x3c;
        iVar4 = wsprintfA((LPSTR)pbVar5,"%02d",
                          (iVar4 / -0xe10) * 0x3c + *extraout_ECX / *(int *)(unaff_EBP + -0x10));
        pbVar5 = pbVar5 + iVar4;
      }
      else {
        if (bVar1 != 0x53) {
          *pbVar5 = bVar1;
          goto LAB_004a51dc;
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffc4;
        iVar4 = wsprintfA((LPSTR)pbVar5,"%02d",
                          (*extraout_ECX / *(int *)(unaff_EBP + -0x10)) * 0x3c + *extraout_ECX);
        pbVar5 = pbVar5 + iVar4;
      }
    }
    else {
      *pbVar5 = bVar1;
      pbVar5 = pbVar5 + 1;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) != 0) {
        *pbVar5 = *pbVar6;
LAB_004a51dc:
        pbVar6 = pbVar3 + 2;
        pbVar5 = pbVar5 + 1;
      }
    }
    bVar1 = *pbVar6;
    pbVar3 = pbVar6;
  } while( true );
}


