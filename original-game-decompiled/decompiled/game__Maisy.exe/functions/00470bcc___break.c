
/* ==== __break @ 00470bcc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bcc-00470bcc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


