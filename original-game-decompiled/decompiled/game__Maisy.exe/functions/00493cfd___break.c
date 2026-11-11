
/* ==== __break @ 00493cfd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cfd-00493cfd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


