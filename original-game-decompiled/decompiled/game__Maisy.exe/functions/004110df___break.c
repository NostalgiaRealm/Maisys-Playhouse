
/* ==== __break @ 004110df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004110df-004110df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


