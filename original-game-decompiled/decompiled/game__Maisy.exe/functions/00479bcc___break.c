
/* ==== __break @ 00479bcc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bcc-00479bcc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


