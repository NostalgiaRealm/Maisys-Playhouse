
/* ==== FUN_14009290 @ 14009290 ==== 
 * signature: undefined4 __stdcall FUN_14009290(void)
 * body: 14009290-14009589
 */

undefined4 FUN_14009290(void)

{
  int iVar1;
  undefined1 local_190 [382];
  ushort uStack_12;
  uint *puStack_4;
  
  DAT_140263fc = LoadLibraryA(s_Wsock32_DLL_14026540);
  if (DAT_140263fc == (HMODULE)0x0) {
    return 0;
  }
  DAT_14026400 = GetProcAddress(DAT_140263fc,s_WSAStartup_14026534);
  DAT_14026404 = GetProcAddress(DAT_140263fc,s_WSACleanup_14026528);
  DAT_14026408 = GetProcAddress(DAT_140263fc,s_WSAAsyncSelect_14026518);
  DAT_1402640c = GetProcAddress(DAT_140263fc,s_WSAAsyncGetHostByName_14026500);
  DAT_14026410 = GetProcAddress(DAT_140263fc,s_WSAGetLastError_140264f0);
  DAT_14026414 = GetProcAddress(DAT_140263fc,s_listen_140264e8);
  DAT_14026418 = GetProcAddress(DAT_140263fc,&DAT_140264e0);
  DAT_1402641c = GetProcAddress(DAT_140263fc,s_socket_140264d8);
  DAT_14026420 = GetProcAddress(DAT_140263fc,s_closesocket_140264cc);
  DAT_14026424 = GetProcAddress(DAT_140263fc,s_connect_140264c4);
  DAT_14026428 = GetProcAddress(DAT_140263fc,s_accept_140264bc);
  DAT_1402642c = GetProcAddress(DAT_140263fc,&DAT_140264b4);
  DAT_14026430 = GetProcAddress(DAT_140263fc,&DAT_140264ac);
  DAT_14026434 = GetProcAddress(DAT_140263fc,s_getsockname_140264a0);
  DAT_14026438 = GetProcAddress(DAT_140263fc,s_gethostname_14026494);
  DAT_1402643c = GetProcAddress(DAT_140263fc,s_gethostbyname_14026484);
  DAT_14026440 = GetProcAddress(DAT_140263fc,s_ntohs_1402647c);
  DAT_14026444 = GetProcAddress(DAT_140263fc,s_htonl_14026474);
  DAT_14026448 = GetProcAddress(DAT_140263fc,s_htons_1402646c);
  DAT_1402644c = GetProcAddress(DAT_140263fc,s_inet_addr_14026460);
  DAT_14026450 = GetProcAddress(DAT_140263fc,s_inet_ntoa_14026454);
  if (((((((DAT_14026400 != (FARPROC)0x0) && (DAT_14026404 != (FARPROC)0x0)) &&
         (DAT_14026408 != (FARPROC)0x0)) &&
        (((DAT_1402640c != (FARPROC)0x0 && (DAT_14026410 != (FARPROC)0x0)) &&
         ((DAT_14026414 != (FARPROC)0x0 &&
          ((DAT_14026418 != (FARPROC)0x0 && (DAT_1402641c != (FARPROC)0x0)))))))) &&
       ((DAT_14026420 != (FARPROC)0x0 &&
        (((DAT_14026424 != (FARPROC)0x0 && (DAT_14026428 != (FARPROC)0x0)) &&
         (DAT_1402642c != (FARPROC)0x0)))))) &&
      (((DAT_14026430 != (FARPROC)0x0 && (DAT_14026434 != (FARPROC)0x0)) &&
       (((DAT_14026438 != (FARPROC)0x0 &&
         ((DAT_1402643c != (FARPROC)0x0 && (DAT_14026440 != (FARPROC)0x0)))) &&
        (DAT_14026444 != (FARPROC)0x0)))))) &&
     (((DAT_14026448 != (FARPROC)0x0 && (DAT_1402644c != (FARPROC)0x0)) &&
      (DAT_14026450 != (FARPROC)0x0)))) {
    iVar1 = (*DAT_14026400)(0x101,local_190);
    if (iVar1 != 0) {
      FreeLibrary(DAT_140263fc);
      return 0;
    }
    if (puStack_4 != (uint *)0x0) {
      *puStack_4 = (uint)uStack_12;
    }
    return 1;
  }
  FreeLibrary(DAT_140263fc);
  return 0;
}


