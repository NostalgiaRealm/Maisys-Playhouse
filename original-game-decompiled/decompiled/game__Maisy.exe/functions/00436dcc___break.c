
/* ==== __break @ 00436dcc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436dcc-00436dcc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


